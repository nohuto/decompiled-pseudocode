/*
 * XREFs of ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00852B8
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016F18 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C001C53C (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *Flink; // rbx
  int v4; // r9d
  char v5; // bp
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  FxCxPnpPowerCallbackContext *v8; // rdi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = 0LL;
  v4 = 0;
  v5 = 0;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  do
  {
    if ( !Flink )
      break;
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    v8 = CxPnpPowerCallbackContexts;
    if ( CxPnpPowerCallbackContexts )
    {
      if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
      {
        CxPnpPowerCallbackContexts->m_PreCallbackSuccessful = 0;
        if ( !v5 )
        {
          v4 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
          if ( v4 < 0 )
            v5 = 1;
          else
            v8->m_PreCallbackSuccessful = 1;
        }
      }
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead );
  return (unsigned int)v4;
}
