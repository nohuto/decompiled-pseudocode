/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085C4C
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C001C5EC (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     ?_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z @ 0x1C001C654 (-_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  unsigned int v2; // ebx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *Flink; // rdi
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  int v7; // eax
  int status; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  status = 0;
  Flink = 0LL;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  if ( Flink )
  {
    do
    {
      CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
      if ( CxPnpPowerCallbackContexts && CxPnpPowerCallbackContexts->u.Generic.PreCallback )
      {
        v7 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
        FxPrePostCallback::_SaveTheFirstError(&status, v7);
      }
      Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
    }
    while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink );
    return (unsigned int)status;
  }
  return v2;
}
