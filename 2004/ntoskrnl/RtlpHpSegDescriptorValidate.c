/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x140256450
 * Callers:
 *     RtlpHpSegFree @ 0x1402538BC (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsDecommit @ 0x140256360 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x1403C7AE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpSizeHeapInternal @ 0x14058F640 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegSetExtraPresent @ 0x14058FB70 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  char v4; // cl
  unsigned __int64 result; // rax
  char v6; // dl
  char v7; // dl

  v3 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v3 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)(v3 + 0x10)) != 0xA2E64EADA2E64EADuLL )
    return 0LL;
  v4 = *(_BYTE *)(a1 + 8);
  result = v3 + 32 * ((unsigned __int64)(unsigned int)(a2 - v3) >> v4);
  if ( !result )
    return 0LL;
  v6 = *(_BYTE *)(result + 24);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) == 0 )
  {
    result -= 32LL * *(unsigned __int8 *)(result + 31);
    v7 = *(_BYTE *)(result + 24);
    if ( (v7 & 3) == 3 && (v7 & 0xCu) >= 8 )
      return result;
    return 0LL;
  }
  if ( (v6 & 0xCu) < 8 && (((1 << v4) - 1) & a2) != 0 )
    return 0LL;
  return result;
}
