/*
 * XREFs of _xxxReleaseCapture@0 @ 0xC4E64
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4 (-xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 */

int __stdcall xxxReleaseCapture()
{
  if ( (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) & 0x100000) != 0 )
    return 0;
  if ( *(_DWORD *)(_gptiCurrent + 368) && (*(_BYTE *)(_gptiCurrent + 264) & 0x10) != 0 )
  {
    bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
    if ( (*(_BYTE *)(*(_DWORD *)(_gptiCurrent + 368) + 184) & 0x20) == 0 )
      xxxDrawDragRect(2);
    *(_DWORD *)(_gptiCurrent + 264) &= 0xFFFF7FEF;
  }
  xxxCapture(0);
  return 1;
}
