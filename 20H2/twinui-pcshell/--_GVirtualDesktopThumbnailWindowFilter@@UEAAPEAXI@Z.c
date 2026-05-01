/*
 * XREFs of ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x18038AA80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x18038A990 (--1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ.c)
 */

VirtualDesktopThumbnailWindowFilter *__fastcall VirtualDesktopThumbnailWindowFilter::`scalar deleting destructor'(
        VirtualDesktopThumbnailWindowFilter *this,
        char a2)
{
  VirtualDesktopThumbnailWindowFilter::~VirtualDesktopThumbnailWindowFilter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
