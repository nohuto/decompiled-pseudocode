/*
 * XREFs of ?IsSet@VailLatency@InteractionLatencyTelemetry@@QEBA_NXZ @ 0x1801E2648
 * Callers:
 *     ?IsSet@InteractionFrameLatency@InteractionLatencyTelemetry@@QEBA_NXZ @ 0x1801E25E4 (-IsSet@InteractionFrameLatency@InteractionLatencyTelemetry@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractionLatencyTelemetry::VailLatency::IsSet(InteractionLatencyTelemetry::VailLatency *this)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)this
    || *((_DWORD *)this + 1)
    || *((_DWORD *)this + 2)
    || *((_DWORD *)this + 3)
    || *((_DWORD *)this + 4)
    || *((_DWORD *)this + 5)
    || *((_DWORD *)this + 6)
    || *((_DWORD *)this + 7)
    || *((_DWORD *)this + 8)
    || *((_DWORD *)this + 9)
    || *((_DWORD *)this + 10)
    || *((_DWORD *)this + 11)
    || *((_DWORD *)this + 12)
    || *((_DWORD *)this + 13)
    || *((_DWORD *)this + 14) )
  {
    return 1;
  }
  return result;
}
