/*
 * XREFs of MiHotPatchAllProcesses @ 0x140973630
 * Callers:
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x140977B70 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140977CBC (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  __int64 *i; // rcx
  int v5; // eax
  __int64 *NextProcess; // rax
  _DWORD *v7; // r9
  __int64 *v8; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  for ( i = 0LL; ; i = v8 )
  {
    NextProcess = PsGetNextProcess(i);
    v8 = NextProcess;
    if ( !NextProcess )
      break;
    v5 = *((_DWORD *)NextProcess + 543);
    if ( (v5 & 0x1000) == 0 && v8 != (__int64 *)PsSecureSystemProcess && (v5 & 1) == 0 && !v8[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v8, 0LL, (__int64)v10, v7);
      MiHotPatchProcess(v8, a1, a2);
      KiUnstackDetachProcess((__int64)v10, 0LL);
    }
  }
  return 0LL;
}
