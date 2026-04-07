/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z @ 0x180037500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180037548 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        char a2)
{
  CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVisualSet *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
