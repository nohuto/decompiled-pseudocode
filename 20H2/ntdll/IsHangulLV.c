/*
 * XREFs of IsHangulLV @ 0x1800FF7AC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008046C (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800FF704 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800FF778 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
