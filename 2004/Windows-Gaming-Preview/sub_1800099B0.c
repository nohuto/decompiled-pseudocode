/*
 * XREFs of sub_1800099B0 @ 0x1800099B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009C60 @ 0x180009C60 (sub_180009C60.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800099B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  LOBYTE(a3) = 1;
  *a1 = &off_180048118;
  v3 = a2;
  sub_180009C60(a1, a2, a3);
  qword_18005ADB0 = 0LL;
  byte_18005AE80 = 0;
  if ( (v3 & 1) != 0 )
    j_j__o_free(a1, 8LL);
  return a1;
}
