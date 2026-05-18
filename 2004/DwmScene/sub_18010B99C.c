/*
 * XREFs of sub_18010B99C @ 0x18010B99C
 * Callers:
 *     sub_18010B92C @ 0x18010B92C (sub_18010B92C.c)
 *     sub_18010B994 @ 0x18010B994 (sub_18010B994.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18010B99C(_QWORD *a1)
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
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
