/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C008A1FC
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0039866 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *i; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  for ( i = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
        i != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && i;
        i = (FxCxDeviceInfo *)i->ListEntry.Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(i, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts
      && CxPnpPowerCallbackContexts->u.Generic.CleanupCallback
      && CxPnpPowerCallbackContexts->m_PreCallbackSuccessful == 1 )
    {
      this->InvokeCxCleanupCallback(this, CxPnpPowerCallbackContexts);
    }
  }
}
