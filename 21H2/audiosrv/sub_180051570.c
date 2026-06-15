/*
 * XREFs of sub_180051570 @ 0x180051570
 * Callers:
 *     <none>
 * Callees:
 *     sub_180051640 @ 0x180051640 (sub_180051640.c)
 *     sub_1800516F0 @ 0x1800516F0 (sub_1800516F0.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     sub_1800C41E0 @ 0x1800C41E0 (sub_1800C41E0.c)
 */

__int64 __fastcall sub_180051570(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  __int64 v13; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v6 = sub_180051640(a1 - 8);
    v7 = v6;
    if ( !v6 )
      return 2147942414LL;
    *(_DWORD *)(v6 + 16) = v2;
    v9 = (v6 >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v12 )
    {
      v12 = v11;
      if ( i )
      {
        *a2 = v7;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      *(_DWORD *)(v7 + 16) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v9, v11);
    }
    sub_1800516F0(v7, 1LL);
    v5 = 2 * v12;
    sub_1800C41E0(v5, v13);
  }
  else
  {
    v5 = 2 * v2;
    sub_180071940(v5, a2);
  }
  *a2 = v5;
  return 0LL;
}
