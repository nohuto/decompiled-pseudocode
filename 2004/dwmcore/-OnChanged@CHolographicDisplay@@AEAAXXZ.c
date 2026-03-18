/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802547E8
 * Callers:
 *     ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x180254828 (-ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CR.c)
 *     ?ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS@@@Z @ 0x1802548B0 (-ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRA.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18025490C (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x180250DE0 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180252950 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::OnChanged(CHolographicDisplay *this)
{
  CHolographicManager *v2; // rcx

  v2 = (CHolographicManager *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 116) )
    {
      CHolographicManager::UpdateHolographicDisplay(v2, this);
    }
    else
    {
      CHolographicManager::AddHolographicDisplay((RTL_SRWLOCK *)v2, this);
      *((_BYTE *)this + 116) = 1;
    }
  }
}
