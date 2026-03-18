/*
 * XREFs of ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C0063FA8
 * Callers:
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0064168 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoTarget::ClearCompletedRequestVerifierFlags(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
    {
      irql = 0;
      FxNonPagedObject::Lock(Request, &irql, a3);
      v5 = irql;
      Request->m_VerifierFlags &= ~0x100u;
      FxNonPagedObject::Unlock(Request, v5, v6);
    }
  }
}
