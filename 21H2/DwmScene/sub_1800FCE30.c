/*
 * XREFs of sub_1800FCE30 @ 0x1800FCE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FCCBC @ 0x1800FCCBC (sub_1800FCCBC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FCE30(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800FCCBC(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
