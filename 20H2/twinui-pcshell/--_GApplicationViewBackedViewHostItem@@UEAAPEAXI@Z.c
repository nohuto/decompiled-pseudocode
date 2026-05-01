/*
 * XREFs of ??_GApplicationViewBackedViewHostItem@@UEAAPEAXI@Z @ 0x1802590E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewBackedViewHostItem@@UEAA@XZ @ 0x180258BA8 (--1ApplicationViewBackedViewHostItem@@UEAA@XZ.c)
 */

ApplicationViewBackedViewHostItem *__fastcall ApplicationViewBackedViewHostItem::`scalar deleting destructor'(
        ApplicationViewBackedViewHostItem *this,
        char a2)
{
  ApplicationViewBackedViewHostItem::~ApplicationViewBackedViewHostItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x268);
  return this;
}
