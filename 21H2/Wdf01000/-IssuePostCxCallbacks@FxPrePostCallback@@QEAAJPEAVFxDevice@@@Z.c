/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008A270
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0039866 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *Flink; // rbx
  int v5; // esi
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  __int64 v7; // r8
  int v8; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts )
    {
      if ( CxPnpPowerCallbackContexts->u.Generic.PostCallback )
      {
        LOBYTE(v7) = 1;
        v8 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, (FxCxInvokeCallbackSubType)v7);
        if ( v5 >= 0 )
          v5 = v8;
      }
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  return (unsigned int)v5;
}
