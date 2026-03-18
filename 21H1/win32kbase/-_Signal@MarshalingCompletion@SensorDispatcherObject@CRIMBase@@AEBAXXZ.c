/*
 * XREFs of ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C003FC14
 * Callers:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003FB20 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0063984 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(PRKEVENT *this)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rcx

  v2 = *this;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
    v2 = *this;
  }
  if ( KeReadStateEvent(v2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  KeSetEvent(*this, 1, 0);
}
