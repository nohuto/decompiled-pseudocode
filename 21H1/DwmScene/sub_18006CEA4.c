/*
 * XREFs of sub_18006CEA4 @ 0x18006CEA4
 * Callers:
 *     sub_180072150 @ 0x180072150 (sub_180072150.c)
 *     sub_180075BFC @ 0x180075BFC (sub_180075BFC.c)
 *     sub_1800CEEF4 @ 0x1800CEEF4 (sub_1800CEEF4.c)
 *     sub_1800CEF80 @ 0x1800CEF80 (sub_1800CEF80.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_18006D0C0 @ 0x18006D0C0 (sub_18006D0C0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006CEA4(__int64 *a1, __int64 a2)
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
      sub_18006D0C0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180065AF4(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
