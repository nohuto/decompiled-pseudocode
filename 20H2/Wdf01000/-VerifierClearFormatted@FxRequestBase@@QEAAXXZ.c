/*
 * XREFs of ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001970C
 * Callers:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0009160 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00196C8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004E408 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierClearFormatted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::ClearVerifierFlags(this, 128);
  }
}
