/*
 * XREFs of ?SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z @ 0x172097
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge SetCurrentHitTargetMonitor(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        struct tagMONITOR *a4,
        int a5)
{
  int v5; // eax

  if ( a3 )
  {
    v5 = a2[46];
    if ( (v5 & 0x2000000) == 0 )
    {
      a2[48] = a1;
      if ( (v5 & 0x20) == 0 )
        a2[46] = v5 | 0x10000000;
    }
  }
  a2[51] = a1;
}
