/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C00235A8
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0023670 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0023640 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((CMouseProcessor **)this + 490) != (CMouseProcessor *)((char *)this + 3920) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_QWORD *)this + 487) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_QWORD *)this + 472) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3880));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3880));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3640));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
