/*
 * XREFs of ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0022644
 * Callers:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0022550 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00337F4 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(
        PRKEVENT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KEVENT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v5 = *this;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
    v5 = *this;
  }
  if ( KeReadStateEvent(v5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  KeSetEvent(*this, 1, 0);
}
