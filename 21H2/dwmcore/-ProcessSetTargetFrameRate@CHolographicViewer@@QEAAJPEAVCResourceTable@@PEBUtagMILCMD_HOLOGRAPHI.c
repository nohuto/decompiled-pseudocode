/*
 * XREFs of ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x18029CBFC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18029C960 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessSetTargetFrameRate(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE *a3)
{
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
