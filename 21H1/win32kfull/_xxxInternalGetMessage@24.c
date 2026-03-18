/*
 * XREFs of _xxxInternalGetMessage@24 @ 0xA199C
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserPeekMessage@24 @ 0x686A0 (_NtUserPeekMessage@24.c)
 *     _NtUserGetMessage@16 @ 0x9343A (_NtUserGetMessage@16.c)
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     ?xxxMS_FlushWigglies@@YGXXZ @ 0x1746F4 (-xxxMS_FlushWigglies@@YGXXZ.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     ?xxxMNRemoveMessage@@YGHII@Z @ 0x1951DC (-xxxMNRemoveMessage@@YGHII@Z.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _IsInsideMPH@0 @ 0xA19FC (_IsInsideMPH@0.c)
 *     _ClientGetMessageMPH@24 @ 0x189F5B (_ClientGetMessageMPH@24.c)
 */

int __thiscall xxxInternalGetMessage(_DWORD *this, struct tagMSG *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v6; // edx

  if ( IsInsideMPH() )
    return ClientGetMessageMPH(a2, a3, a4, a5);
  else
    return xxxRealInternalGetMessage(this, v6, a2, a3, a4, a5);
}
