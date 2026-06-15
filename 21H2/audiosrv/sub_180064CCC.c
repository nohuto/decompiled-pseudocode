/*
 * XREFs of sub_180064CCC @ 0x180064CCC
 * Callers:
 *     sub_18006473C @ 0x18006473C (sub_18006473C.c)
 *     sub_180064AA4 @ 0x180064AA4 (sub_180064AA4.c)
 *     sub_180064BF0 @ 0x180064BF0 (sub_180064BF0.c)
 *     sub_1800B91F4 @ 0x1800B91F4 (sub_1800B91F4.c)
 *     sub_1800F3C44 @ 0x1800F3C44 (sub_1800F3C44.c)
 *     sub_1800F3D60 @ 0x1800F3D60 (sub_1800F3D60.c)
 *     sub_1800F3E08 @ 0x1800F3E08 (sub_1800F3E08.c)
 *     sub_1800FD1B0 @ 0x1800FD1B0 (sub_1800FD1B0.c)
 *     sub_1801020C4 @ 0x1801020C4 (sub_1801020C4.c)
 *     sub_180107514 @ 0x180107514 (sub_180107514.c)
 *     sub_180107670 @ 0x180107670 (sub_180107670.c)
 *     sub_180112258 @ 0x180112258 (sub_180112258.c)
 *     sub_1801122FC @ 0x1801122FC (sub_1801122FC.c)
 *     sub_1801123CC @ 0x1801123CC (sub_1801123CC.c)
 *     sub_180139C70 @ 0x180139C70 (sub_180139C70.c)
 *     sub_180139D74 @ 0x180139D74 (sub_180139D74.c)
 *     sub_180139E98 @ 0x180139E98 (sub_180139E98.c)
 *     sub_180140070 @ 0x180140070 (sub_180140070.c)
 *     sub_180142508 @ 0x180142508 (sub_180142508.c)
 *     sub_1801425A8 @ 0x1801425A8 (sub_1801425A8.c)
 * Callees:
 *     sub_1800210FC @ 0x1800210FC (sub_1800210FC.c)
 */

_QWORD *__fastcall sub_180064CCC(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( (int)sub_1800210FC(&v5, a2, a3) < 0 )
    return 0LL;
  if ( (unsigned __int64)~v5 < 8 )
    return 0LL;
  result = (_QWORD *)o_malloc(v5 + 8);
  if ( !result )
    return 0LL;
  *result = *a1;
  *a1 = result;
  return result;
}
