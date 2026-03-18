/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408C5928
 * Callers:
 *     MiLoadHotPatch @ 0x1408C6280 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C65E0 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x1408C9E78 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408C9FC4 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  __int64 v6; // r8
  _DWORD *v7; // r9
  unsigned __int64 NextProcess; // rax
  _DWORD *v9; // r9
  _QWORD *v10; // rbx
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  for ( i = 0LL; ; i = v10 )
  {
    NextProcess = PsGetNextProcess(i);
    v10 = (_QWORD *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 2172);
    if ( (v5 & 0x1000) == 0 && v10 != (_QWORD *)PsSecureSystemProcess && (v5 & 1) == 0 && !v10[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v10, 0LL, (__int64)v12, v9);
      MiHotPatchProcess(v10, a1, a2);
      KiUnstackDetachProcess((__int64)v12, 0LL, v6, v7);
    }
  }
  return 0LL;
}
