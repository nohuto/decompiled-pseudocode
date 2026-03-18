/*
 * XREFs of IsWindowBroadcastingDpiToChildrenX @ 0x1C01053E4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1C0105330 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8 (xxxAppAdjustDpiCandidateRect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsWindowBroadcastingDpiToChildrenX(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v3; // r10

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2
    && (unsigned int)IsTopLevelWindow(a1)
    && (*(_DWORD *)(v3 + 232) & 0x20000000) != 0 )
  {
    return 1;
  }
  return v1;
}
