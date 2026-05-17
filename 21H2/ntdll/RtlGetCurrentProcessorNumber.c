/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A22E0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007EE30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FE510 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCurrentProcessorNumber(unsigned __int8 a1)
{
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
    return a1;
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
