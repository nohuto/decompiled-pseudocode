/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x18008C6D0
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x18008C5C0 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18008C6F8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CDrawListEntry::Release(this);
}
