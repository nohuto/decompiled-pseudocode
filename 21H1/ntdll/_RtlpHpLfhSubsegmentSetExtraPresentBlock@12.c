/*
 * XREFs of _RtlpHpLfhSubsegmentSetExtraPresentBlock@12 @ 0x4B3779F4
 * Callers:
 *     _RtlpHpSegSetExtraPresent@8 @ 0x4B37D8E7 (_RtlpHpSegSetExtraPresent@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentSetExtraPresentBlock(int a1, unsigned int a2, int a3)
{
  int v3; // ecx
  int result; // eax

  v3 = (unsigned __int16)dword_4B3A4324 ^ (unsigned __int16)(a2 >> 12) ^ *(unsigned __int16 *)(a2 + 24);
  result = a3;
  *(_WORD *)(v3 + a3 - 2) |= 0x4000u;
  return result;
}
