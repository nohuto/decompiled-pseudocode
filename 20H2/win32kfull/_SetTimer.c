/*
 * XREFs of _SetTimer @ 0x1C01EABE8
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // esi
  __int64 v9; // rdx
  __int64 v10; // r8

  v6 = a3;
  if ( !a1 || PsGetCurrentProcessWin32Process(a1, a2, a3) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
    return InternalSetTimer(a1, a2, v6, a4, a5, 0);
  UserSetLastError(5LL, v9, v10);
  return 0LL;
}
