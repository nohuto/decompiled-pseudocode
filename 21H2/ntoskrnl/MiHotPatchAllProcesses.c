/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408CA278
 * Callers:
 *     MiLoadHotPatch @ 0x1408CABD0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF30 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x1408CE7C8 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CE914 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _DWORD *v7; // r9
  _QWORD *v8; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  for ( i = 0LL; ; i = v8 )
  {
    NextProcess = PsGetNextProcess(i);
    v8 = (_QWORD *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 2172);
    if ( (v5 & 0x1000) == 0 && v8 != (_QWORD *)PsSecureSystemProcess && (v5 & 1) == 0 && !v8[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v8, 0LL, (__int64)v10, v7);
      MiHotPatchProcess(v8, a1, a2);
      KiUnstackDetachProcess((__int64)v10, 0);
    }
  }
  return 0LL;
}
