/*
 * XREFs of ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800BB540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800BB498 (--1CProjectedShadowScene@@MEAA@XZ.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::`scalar deleting destructor'(
        CProjectedShadowScene *this,
        char a2)
{
  CProjectedShadowScene::~CProjectedShadowScene(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CProjectedShadowScene *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
