/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408C6C78
 * Callers:
 *     MiLoadHotPatch @ 0x1408C75D0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C7930 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x1408CB1C8 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CB314 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _QWORD *v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = (_QWORD *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 2172);
    if ( (v5 & 0x1000) == 0 && v7 != (_QWORD *)PsSecureSystemProcess && (v5 & 1) == 0 && !v7[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v7, 0LL, (__int64)v9);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess((__int64)v9, 0LL);
    }
  }
  return 0LL;
}
