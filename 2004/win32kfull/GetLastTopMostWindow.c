/*
 * XREFs of GetLastTopMostWindow @ 0x1C003CA64
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0022ADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0024154 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00245BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C003C8F8 (CalcForegroundInsertAfter.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v2; // rdx
  __int64 i; // r8

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v2 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v2 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 88); i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 24LL) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v2 = i;
  return v2;
}
