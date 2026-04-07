/*
 * XREFs of ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x180095AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800B57A0 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CDCompDesktopThumbnailCVI *__fastcall CDCompDesktopThumbnailCVI::`scalar deleting destructor'(
        CDCompDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDCompDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
