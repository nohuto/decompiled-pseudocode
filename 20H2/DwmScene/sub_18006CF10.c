/*
 * XREFs of sub_18006CF10 @ 0x18006CF10
 * Callers:
 *     sub_1800720C8 @ 0x1800720C8 (sub_1800720C8.c)
 *     sub_180078BF4 @ 0x180078BF4 (sub_180078BF4.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     sub_18007DF60 @ 0x18007DF60 (sub_18007DF60.c)
 * Callees:
 *     sub_18006D11C @ 0x18006D11C (sub_18006D11C.c)
 *     sub_1800721A0 @ 0x1800721A0 (sub_1800721A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006CF10(__int64 *a1, __int64 a2)
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
      sub_18006D11C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800721A0(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
