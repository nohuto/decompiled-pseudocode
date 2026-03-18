/*
 * XREFs of MiCreateResidentBasePfnTemplate @ 0x140A35CD4
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCreateResidentBasePfnTemplate(__int64 a1)
{
  char result; // al

  *(_OWORD *)a1 = xmmword_140C4E4C0;
  *(_OWORD *)(a1 + 16) = xmmword_140C4E4D0;
  *(_OWORD *)(a1 + 32) = xmmword_140C4E4E0;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = result;
  return result;
}
