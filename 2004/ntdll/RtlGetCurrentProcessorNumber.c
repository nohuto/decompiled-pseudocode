/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A1A60
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E390 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FE160 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int8 v0; // cl
  char v3; // zf
  unsigned __int32 v4; // eax

  if ( MEMORY[0x7FFE0295] )
  {
    __asm { rdpid   rcx }
    return (unsigned __int8)_RCX;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    return v0;
  }
  else
  {
    v4 = __segmentlimit(0x53u);
    if ( v3 )
      return v4 >> 14;
    else
      return ZwGetCurrentProcessorNumber();
  }
}
