/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C0035BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032BF8 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  char v2; // di
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a3; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(unsigned __int64, __int64, void *, _MDL *, unsigned __int64, unsigned __int64); // r11

  v2 = 1;
  if ( this->m_ConfigureChannelFunction.Method )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqq(
        v6,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        _a1,
        this->m_ConfigureChannelContext,
        _a3);
    }
    FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    if ( v9 )
      return v9(
               ObjectHandleUnchecked,
               v8,
               this->m_ConfigureChannelContext,
               this->m_CurrentFragmentMdl,
               this->m_CurrentFragmentOffset,
               this->m_CurrentFragmentLength);
  }
  return v2;
}
