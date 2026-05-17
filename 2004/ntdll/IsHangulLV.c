/*
 * XREFs of IsHangulLV @ 0x1800FF29C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008036C (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800FF1F4 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800FF268 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
