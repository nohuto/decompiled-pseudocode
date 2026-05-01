/*
 * XREFs of sub_180010710 @ 0x180010710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011E60 @ 0x180011E60 (sub_180011E60.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180010710(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v8; // rdx
  bool i; // zf
  signed __int64 v10; // rax
  signed __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 128);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v5 = sub_180011E60(a1 - 8);
    v6 = v5;
    if ( !v5 )
      return 2147942414LL;
    *(_DWORD *)(v5 + 16) = v2;
    v8 = (v5 >> 1) | 0x8000000000000000uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 128), v8, v2);
    for ( i = v2 == v10; ; i = v10 == v11 )
    {
      v11 = v10;
      if ( i )
      {
        *a2 = v6;
        return 0LL;
      }
      if ( v10 < 0 )
        break;
      *(_DWORD *)(v6 + 16) = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 128), v8, v10);
    }
    *(_QWORD *)v6 = off_180048D88;
    *(_DWORD *)(v6 + 16) = -1073741823;
    *(_DWORD *)(v6 + 12) = -1073741823;
    j_j__o_free(v6, 32LL);
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 12));
    *a2 = 2 * v11;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    *a2 = 2 * v2;
  }
  return 0LL;
}
