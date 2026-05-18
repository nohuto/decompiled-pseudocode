/*
 * XREFs of sub_18007B8A0 @ 0x18007B8A0
 * Callers:
 *     sub_180072148 @ 0x180072148 (sub_180072148.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_1800A2258 @ 0x1800A2258 (sub_1800A2258.c)
 *     sub_1800A22DC @ 0x1800A22DC (sub_1800A22DC.c)
 *     sub_1800A2B10 @ 0x1800A2B10 (sub_1800A2B10.c)
 *     sub_1800A58CC @ 0x1800A58CC (sub_1800A58CC.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18007B8A0(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      unknown_libname_100((__int64)(v3 + 2), 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
