/*
 * XREFs of _RtlpHpStackTraceEnable@0 @ 0x4B36E304
 * Callers:
 *     _RtlSetLowFragHeapGlobalFlags@8 @ 0x4B35708B (_RtlSetLowFragHeapGlobalFlags@8.c)
 *     _RtlpHpStackTraceConfig@4 @ 0x4B36E268 (_RtlpHpStackTraceConfig@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpStackDbInitialize@0 @ 0x4B36DC8D (_RtlpHpStackDbInitialize@0.c)
 */

int __stdcall RtlpHpStackTraceEnable()
{
  int v0; // esi

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = RtlpHpStackDbInitialize();
    if ( v0 )
      dword_4B3A6834 |= 1u;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return v0;
}
