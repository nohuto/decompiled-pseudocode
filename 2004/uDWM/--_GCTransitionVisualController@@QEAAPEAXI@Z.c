/*
 * XREFs of ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180085B48
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180085670 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180033CE4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CTransitionVisualController *__fastcall CTransitionVisualController::`scalar deleting destructor'(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  *this = (CBaseObject *)&CTransitionVisualController::`vftable';
  CTransitionVisualController::CleanupTransition((CTransitionVisualController *)this);
  v2 = this[1];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[1] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 14);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 7);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 3);
  (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CTransitionVisualController *)this;
}
