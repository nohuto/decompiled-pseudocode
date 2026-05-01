/*
 * XREFs of sub_180074F24 @ 0x180074F24
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180074F24(void *a1)
{
  return WaitForSingleObjectEx(a1, 0, 0) == 0;
}
