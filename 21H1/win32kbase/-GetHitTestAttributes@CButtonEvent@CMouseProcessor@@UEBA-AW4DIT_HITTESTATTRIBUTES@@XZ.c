/*
 * XREFs of ?GetHitTestAttributes@CButtonEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C0042D10
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetHitTestAttributes(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = 8LL;
  if ( *(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  return result;
}
