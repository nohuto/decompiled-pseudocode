/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x1800150F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasButton@@MEAA@XZ @ 0x180015138 (--1CAtlasButton@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  CAtlasButton::~CAtlasButton(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAtlasButton *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
