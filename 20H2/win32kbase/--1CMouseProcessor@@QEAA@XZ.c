/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C0008118
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C00080B0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C00080F4 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((CMouseProcessor **)this + 481) != (CMouseProcessor *)((char *)this + 3848) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_QWORD *)this + 478) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_QWORD *)this + 463) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3808));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3808));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3568));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
