/*
 * XREFs of IsHangulLV @ 0x140587F44
 * Callers:
 *     CanComposeHangul @ 0x140587E9C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140587F10 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140913F10 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
