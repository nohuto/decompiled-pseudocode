/*
 * XREFs of _RitTakeOver@0 @ 0xD4A6C
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(_gpHidInput) >= 0 )
    CBaseInput::Read(_gpHidInput);
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0);
  return 1;
}
