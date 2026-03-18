/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x14050DAD0
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402729D0 (KeResumeClockTimerFromIdle.c)
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     PpmCheckContinueExecution @ 0x140279460 (PpmCheckContinueExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightAffinityEx(_WORD *a1)
{
  __int16 v1; // dx
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v1 = 0;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
    if ( v2 )
      break;
    if ( ++v1 >= (int)(unsigned __int16)*a1 )
      return 0xFFFFFFFFLL;
  }
  _BitScanForward64(&v4, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v4 + (v1 << 6))];
}
