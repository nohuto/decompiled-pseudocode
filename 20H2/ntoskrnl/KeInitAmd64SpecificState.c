/*
 * XREFs of KeInitAmd64SpecificState @ 0x140A5E568
 * Callers:
 *     PsNotifyCoreDriversInitialized @ 0x140A5E3F4 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 *     KiSwInterruptPresent @ 0x140A4A494 (KiSwInterruptPresent.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  _mm_lfence();
  if ( !InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  result = KiSwInterruptPresent();
  if ( (int)result >= 0 )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
