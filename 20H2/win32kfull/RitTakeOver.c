/*
 * XREFs of RitTakeOver @ 0x1C000980C
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 RitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
    CBaseInput::Read(gpHidInput);
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
