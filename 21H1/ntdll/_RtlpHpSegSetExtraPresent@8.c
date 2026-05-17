/*
 * XREFs of _RtlpHpSegSetExtraPresent@8 @ 0x4B37D8E7
 * Callers:
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 * Callees:
 *     _RtlpHpLfhSubsegmentSetExtraPresentBlock@12 @ 0x4B3779F4 (_RtlpHpLfhSubsegmentSetExtraPresentBlock@12.c)
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpVsChunkSetExtraPresent@12 @ 0x4B37ECDF (_RtlpHpVsChunkSetExtraPresent@12.c)
 */

int __fastcall RtlpHpSegSetExtraPresent(int a1, int a2)
{
  int result; // eax
  int v5; // ecx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  LOBYTE(v5) = *(_BYTE *)(result + 12) & 0xC;
  if ( (unsigned __int8)v5 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else if ( (_BYTE)v5 == 8 )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 4);
    return RtlpHpLfhSubsegmentSetExtraPresentBlock(
             v5,
             ((result - (result & *(_DWORD *)a1)) >> 4 << v5) + (result & *(_DWORD *)a1),
             a2);
  }
  else
  {
    return RtlpHpVsChunkSetExtraPresent(v5);
  }
  return result;
}
