/*
 * XREFs of ??1SensorDispatcherObject@CRIMBase@@QEAA@XZ @ 0x1C0058100
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::~SensorDispatcherObject(
        CRIMBase::SensorDispatcherObject *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
}
