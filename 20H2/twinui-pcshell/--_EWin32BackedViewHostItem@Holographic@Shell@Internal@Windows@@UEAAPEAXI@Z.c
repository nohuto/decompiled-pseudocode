/*
 * XREFs of ??_EWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18024D230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ @ 0x18024C8E0 (--1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *__fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vector deleting destructor'(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::~Win32BackedViewHostItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E8);
  return this;
}
