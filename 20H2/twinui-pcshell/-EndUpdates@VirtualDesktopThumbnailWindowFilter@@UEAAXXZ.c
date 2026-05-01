/*
 * XREFs of ?EndUpdates@VirtualDesktopThumbnailWindowFilter@@UEAAXXZ @ 0x18038AD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopThumbnailWindowFilter::EndUpdates(VirtualDesktopThumbnailWindowFilter *this)
{
  --*((_DWORD *)this + 10);
  VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates(this);
}
