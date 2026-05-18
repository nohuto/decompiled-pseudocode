/*
 * XREFs of sub_1800A3654 @ 0x1800A3654
 * Callers:
 *     ?dtor$1@?0???0_Pad@std@@QEAA@XZ@4HA @ 0x1801271C8 (-dtor$1@-0---0_Pad@std@@QEAA@XZ@4HA.c)
 * Callees:
 *     sub_1800A2340 @ 0x1800A2340 (sub_1800A2340.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A3654(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    sub_1800A2340(a1[1], *a1, *(__int64 **)(*v1 + 8LL));
    return j_j__o_free(*v1);
  }
  return result;
}
