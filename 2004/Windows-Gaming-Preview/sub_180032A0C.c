/*
 * XREFs of sub_180032A0C @ 0x180032A0C
 * Callers:
 *     sub_18002DA10 @ 0x18002DA10 (sub_18002DA10.c)
 *     sub_18002E7E0 @ 0x18002E7E0 (sub_18002E7E0.c)
 *     sub_18002FF60 @ 0x18002FF60 (sub_18002FF60.c)
 *     sub_1800300B8 @ 0x1800300B8 (sub_1800300B8.c)
 *     sub_180034A64 @ 0x180034A64 (sub_180034A64.c)
 * Callees:
 *     sub_180034CB4 @ 0x180034CB4 (sub_180034CB4.c)
 *     sub_180034E84 @ 0x180034E84 (sub_180034E84.c)
 *     sub_180034F18 @ 0x180034F18 (sub_180034F18.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180032A0C(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  ++*(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v4);
        while ( v5 )
        {
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 24);
          result = sub_180034E84(a1, v6);
          if ( (int)result < 0 )
            return result;
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(a1 + 24) );
      v3 = *(_QWORD *)(a1 + 8);
    }
  }
  j_j__o_free(v3, a2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !*(_DWORD *)(a1 + 56) )
  {
    *(_DWORD *)(a1 + 24) = sub_180034CB4(a1, 0LL);
    sub_180034F18(a1);
  }
  *(_QWORD *)(a1 + 72) = 0LL;
  v8 = *(_QWORD **)(a1 + 64);
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      _o_free(v8);
      v8 = v9;
    }
    while ( v9 );
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  --*(_DWORD *)(a1 + 56);
  return 0LL;
}
