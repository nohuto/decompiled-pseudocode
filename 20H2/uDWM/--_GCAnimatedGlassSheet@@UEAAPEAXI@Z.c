/*
 * XREFs of ??_GCAnimatedGlassSheet@@UEAAPEAXI@Z @ 0x18009A5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18009A50C (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 */

CAnimatedGlassSheet *__fastcall CAnimatedGlassSheet::`scalar deleting destructor'(CAnimatedGlassSheet *this, char a2)
{
  CAnimatedGlassSheet::~CAnimatedGlassSheet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimatedGlassSheet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
