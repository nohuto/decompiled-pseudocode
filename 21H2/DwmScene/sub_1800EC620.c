/*
 * XREFs of sub_1800EC620 @ 0x1800EC620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A8FB4 @ 0x1800A8FB4 (sub_1800A8FB4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EC620(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  sub_1800A8FB4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
