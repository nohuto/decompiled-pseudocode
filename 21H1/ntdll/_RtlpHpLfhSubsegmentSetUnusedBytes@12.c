/*
 * XREFs of _RtlpHpLfhSubsegmentSetUnusedBytes@12 @ 0x4B377A48
 * Callers:
 *     _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27 (_RtlpHpLfhSubsegmentAllocateBlock@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentSetUnusedBytes(unsigned int a1, int a2, int a3)
{
  int result; // eax

  if ( a3 == 1 )
    result = 0x8000;
  else
    result = a3 & 0x3FFF;
  *(_WORD *)(((unsigned __int16)dword_4B3A4324 ^ *(unsigned __int16 *)(a1 + 24) ^ (unsigned __int16)(a1 >> 12)) + a2 - 2) = result;
  return result;
}
