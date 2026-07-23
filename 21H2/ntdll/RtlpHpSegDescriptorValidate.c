/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x180022944
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x180002210 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800206C0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegSetExtraPresent @ 0x18006B348 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010ED88 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 DescriptorValidateSafe; // rdx
  char v6; // al

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe();
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    return 0LL;
  v6 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) == 0 )
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 3) == 3 && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) >= 8 )
      return DescriptorValidateSafe;
    return 0LL;
  }
  if ( (v6 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    return 0LL;
  return DescriptorValidateSafe;
}
