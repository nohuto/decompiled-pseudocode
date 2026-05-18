/*
 * XREFs of sub_1800CF5D0 @ 0x1800CF5D0
 * Callers:
 *     sub_1800CFCBC @ 0x1800CFCBC (sub_1800CFCBC.c)
 *     sub_1800CFE34 @ 0x1800CFE34 (sub_1800CFE34.c)
 * Callees:
 *     sub_1800CF63C @ 0x1800CF63C (sub_1800CF63C.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CF5D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800CF63C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800CFCC4(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
