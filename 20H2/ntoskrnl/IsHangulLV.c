/*
 * XREFs of IsHangulLV @ 0x14058BFD4
 * Callers:
 *     CanComposeHangul @ 0x14058BF2C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14058BFA0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14091ADD0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
