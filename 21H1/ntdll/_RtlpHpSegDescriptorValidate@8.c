/*
 * XREFs of _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D
 * Callers:
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 *     _RtlpHpSegLfhVsCommit@12 @ 0x4B37BD10 (_RtlpHpSegLfhVsCommit@12.c)
 *     _RtlpHpSegLfhVsDecommit@12 @ 0x4B37BD60 (_RtlpHpSegLfhVsDecommit@12.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 *     _RtlpHpSegSetExtraPresent@8 @ 0x4B37D8E7 (_RtlpHpSegSetExtraPresent@8.c)
 *     _RtlpHpSegSize@16 @ 0x4B37D931 (_RtlpHpSegSize@16.c)
 * Callees:
 *     _RtlpHpSegGetDescriptorValidateSafe@8 @ 0x4B37BB1F (_RtlpHpSegGetDescriptorValidateSafe@8.c)
 */

int __fastcall RtlpHpSegDescriptorValidate(int a1, int a2)
{
  int v4; // esi
  int DescriptorValidateSafe; // edx
  char v6; // al

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe();
  }
  else
  {
    v4 = a2 & *(_DWORD *)a1;
    if ( (a1 ^ v4 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v4 + 8)) == 0xA2E64EAD )
      DescriptorValidateSafe = v4 + 16 * ((unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 4));
    else
      DescriptorValidateSafe = 0;
  }
  if ( !DescriptorValidateSafe )
    return 0;
  v6 = *(_BYTE *)(DescriptorValidateSafe + 12);
  if ( (v6 & 1) == 0 )
    return 0;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 4)) - 1) & a2) != 0 )
      return 0;
  }
  else
  {
    DescriptorValidateSafe += -16 * *(unsigned __int8 *)(DescriptorValidateSafe + 15);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 12) & 3) != 3 || (*(_BYTE *)(DescriptorValidateSafe + 12) & 0xCu) < 8 )
      return 0;
  }
  return DescriptorValidateSafe;
}
