/*
 * XREFs of ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x18025B194
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18025AEF0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessSetTargetFrameRate(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE *a3)
{
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 3);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
