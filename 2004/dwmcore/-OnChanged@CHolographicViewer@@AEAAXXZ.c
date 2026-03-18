/*
 * XREFs of ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x180258480
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x180258678 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_.c)
 *     ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x180258700 (-ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SE.c)
 *     ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x180258724 (-ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x180250F28 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802529D4 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 */

void __fastcall CHolographicViewer::OnChanged(CHolographicViewer *this)
{
  CHolographicManager *v2; // rcx

  v2 = (CHolographicManager *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 152) )
    {
      CHolographicManager::UpdateHolographicViewer(v2, this);
    }
    else
    {
      CHolographicManager::AddHolographicViewer((RTL_SRWLOCK *)v2, this);
      *((_BYTE *)this + 152) = 1;
    }
  }
}
