/*
 * XREFs of ?ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x180171874
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCachedVisualImage::ProcessSnapshot(
        CCachedVisualImage::CCachedTarget ***this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT *a3)
{
  return CCachedVisualImage::Snapshot(this);
}
