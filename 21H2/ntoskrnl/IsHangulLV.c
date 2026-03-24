/*
 * XREFs of IsHangulLV @ 0x14058D9E4
 * Callers:
 *     CanComposeHangul @ 0x14058D93C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14058D9B0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140918590 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
