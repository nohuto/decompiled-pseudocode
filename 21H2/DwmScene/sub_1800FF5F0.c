/*
 * XREFs of sub_1800FF5F0 @ 0x1800FF5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FF36C @ 0x1800FF36C (sub_1800FF36C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FF5F0(_QWORD *a1, char a2)
{
  sub_1800FF36C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
