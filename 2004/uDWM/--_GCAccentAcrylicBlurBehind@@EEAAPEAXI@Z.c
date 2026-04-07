/*
 * XREFs of ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x1800455C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800456B8 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAccentAcrylicBlurBehind *__fastcall CAccentAcrylicBlurBehind::`scalar deleting destructor'(
        CAccentAcrylicBlurBehind *this,
        char a2)
{
  CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAccentAcrylicBlurBehind *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
