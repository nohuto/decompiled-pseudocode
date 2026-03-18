/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x180035410
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180035300 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180035438 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CDrawListEntry::Release(this);
}
