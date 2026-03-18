/*
 * XREFs of IsHangulLV @ 0x1405ED044
 * Callers:
 *     CanComposeHangul @ 0x1405ECF9C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405ED010 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1409BDBFC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
