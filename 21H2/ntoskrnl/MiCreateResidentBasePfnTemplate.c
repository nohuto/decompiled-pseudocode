/*
 * XREFs of MiCreateResidentBasePfnTemplate @ 0x140A39CA0
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCreateResidentBasePfnTemplate(__int64 a1)
{
  char result; // al

  *(_OWORD *)a1 = xmmword_140C4E5C0;
  *(_OWORD *)(a1 + 16) = xmmword_140C4E5D0;
  *(_OWORD *)(a1 + 32) = xmmword_140C4E5E0;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = result;
  return result;
}
