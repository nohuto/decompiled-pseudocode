/*
 * XREFs of IsHangulLV @ 0x14058DC14
 * Callers:
 *     CanComposeHangul @ 0x14058DB6C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14058DBE0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1409186F0 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
