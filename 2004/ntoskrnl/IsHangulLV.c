/*
 * XREFs of IsHangulLV @ 0x140588674
 * Callers:
 *     CanComposeHangul @ 0x1405885CC (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140588640 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140915290 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
