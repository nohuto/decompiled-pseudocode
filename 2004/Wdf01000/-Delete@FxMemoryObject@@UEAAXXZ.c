/*
 * XREFs of ?Delete@FxMemoryObject@@UEAAXXZ @ 0x1C00530A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxMemoryObject::Delete(FxMemoryObject *this)
{
  (*(void (__fastcall **)(_FX_DRIVER_GLOBALS **))&this[-1].m_Globals->DestroyEvent.m_DbgFlagIsInitialized)(&this[-1].m_Globals);
}
