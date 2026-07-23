/*
 * XREFs of _RtlHpHeapManagerInitialize@8 @ 0x4B375D4D
 * Callers:
 *     _RtlHpInitializeHeapManager@0 @ 0x4B37080D (_RtlHpInitializeHeapManager@0.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpVaMgrCtxInitialize@4 @ 0x4B37AD53 (_RtlpHpVaMgrCtxInitialize@4.c)
 *     _RtlCSparseBitmapInitialize@8 @ 0x4B37E24A (_RtlCSparseBitmapInitialize@8.c)
 */

unsigned int __fastcall RtlHpHeapManagerInitialize(int a1, int *a2)
{
  unsigned int result; // eax
  size_t v4; // [esp-10h] [ebp-18h]
  size_t v5; // [esp-4h] [ebp-Ch]

  LODWORD(v5) = 7276;
  memset(&dword_4B3A6DC4, 0, v5);
  LODWORD(v4) = 44;
  RtlpHpHeapManager = (int)&RtlpHpHeapGlobals;
  memset(&dword_4B3A6DC4, 0, v4);
  RtlCSparseBitmapInitialize(&unk_4B3A6DC8, 40);
  RtlpHpVaMgrCtxInitialize(&unk_4B3A6DF0);
  dword_4B3A8A28 = *a2;
  dword_4B3A8A2C = a2[1];
  for ( result = 0; result < 6; result += 2 )
    dword_4B3A8A14[result] = 0;
  return result * 4;
}
