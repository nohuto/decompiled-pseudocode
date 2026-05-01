/*
 * XREFs of sub_180034BB0 @ 0x180034BB0
 * Callers:
 *     sub_180034D48 @ 0x180034D48 (sub_180034D48.c)
 *     sub_180034E84 @ 0x180034E84 (sub_180034E84.c)
 * Callees:
 *     sub_180034CB4 @ 0x180034CB4 (sub_180034CB4.c)
 *     sub_180034F18 @ 0x180034F18 (sub_180034F18.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 __fastcall sub_180034BB0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v8; // rdx
  __int64 i; // r9
  __int64 v10; // r10
  __int64 v11; // r8

  v2 = a2;
  if ( !a2 )
    v2 = sub_180034CB4(a1, *(_QWORD *)(a1 + 16));
  if ( v2 != *(_DWORD *)(a1 + 24) )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 8LL * v2;
      if ( !is_mul_ok(v2, 8uLL) )
        v4 = -1LL;
      v5 = operator new(v4, (const struct std::nothrow_t *)&unk_18005AF88);
      v6 = v5;
      if ( !v5 )
        return 2147942414LL;
      if ( v2 > 0x1FFFFFFF )
        return 2147549183LL;
      memset(v5, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
        if ( v10 )
        {
          do
          {
            v11 = *(_QWORD *)(v10 + 24);
            v8 = *(_DWORD *)(v10 + 32) % v2;
            *(_QWORD *)(v10 + 24) = v6[v8];
            v6[(unsigned int)v8] = v10;
            v10 = v11;
          }
          while ( v11 );
        }
      }
      j_j__o_free(*(_QWORD *)(a1 + 8), v8);
      *(_QWORD *)(a1 + 8) = v6;
    }
    *(_DWORD *)(a1 + 24) = v2;
    sub_180034F18(a1);
  }
  return 0LL;
}
