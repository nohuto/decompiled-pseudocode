/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0063984
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00639EC (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C003FC14 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  PRKEVENT *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_DWORD *)((v2 << 6) + a1 + 168) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = (PRKEVENT *)((v2 << 6) + a1 + 208);
  if ( *v4 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v4);
}
