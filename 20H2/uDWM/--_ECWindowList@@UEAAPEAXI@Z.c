/*
 * XREFs of ??_ECWindowList@@UEAAPEAXI@Z @ 0x180085370
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180084E10 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180095794 (--1CWindowList@@UEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::`vector deleting destructor'(CWindowList *this, char a2)
{
  CWindowList::~CWindowList(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowList *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
