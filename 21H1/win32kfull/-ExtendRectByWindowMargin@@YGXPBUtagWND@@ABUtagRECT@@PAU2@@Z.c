/*
 * XREFs of ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x175C45 (-xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 */

void __userpurge ExtendRectByWindowMargin(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        const struct tagWND *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  *(_DWORD *)a3 = *a1;
  *((_DWORD *)a3 + 1) = a1[1];
  *((_DWORD *)a3 + 2) = a1[2];
  *((_DWORD *)a3 + 3) = a1[3];
  if ( GetWindowExtendedMargin(a2, (int)&v5) )
  {
    *((_DWORD *)a3 + 1) -= (__int16)v6;
    *(_DWORD *)a3 -= (__int16)v5;
    *((_DWORD *)a3 + 2) += SHIWORD(v5);
    *((_DWORD *)a3 + 3) += SHIWORD(v6);
  }
}
