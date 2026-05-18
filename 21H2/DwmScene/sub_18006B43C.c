/*
 * XREFs of sub_18006B43C @ 0x18006B43C
 * Callers:
 *     sub_18006A028 @ 0x18006A028 (sub_18006A028.c)
 *     sub_18006A14C @ 0x18006A14C (sub_18006A14C.c)
 *     sub_180072924 @ 0x180072924 (sub_180072924.c)
 *     sub_180072B80 @ 0x180072B80 (sub_180072B80.c)
 *     sub_1800D7C80 @ 0x1800D7C80 (sub_1800D7C80.c)
 *     sub_1800DA534 @ 0x1800DA534 (sub_1800DA534.c)
 *     sub_1800DA8B8 @ 0x1800DA8B8 (sub_1800DA8B8.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18006B43C(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[5];
  if ( v4 >= 0x10 )
  {
    v5 = a1[2];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x18006B4B5LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
