/*
 * XREFs of sub_1800E6840 @ 0x1800E6840
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A36E4 @ 0x1800A36E4 (sub_1800A36E4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E6840(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  sub_1800A36E4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
