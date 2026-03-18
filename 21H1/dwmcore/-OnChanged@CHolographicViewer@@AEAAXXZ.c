/*
 * XREFs of ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18025AEF0
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x18025B0E8 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_.c)
 *     ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x18025B170 (-ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SE.c)
 *     ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x18025B194 (-ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802539B8 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x180255464 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
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
