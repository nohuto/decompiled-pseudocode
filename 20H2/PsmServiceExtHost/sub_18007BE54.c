/*
 * XREFs of sub_18007BE54 @ 0x18007BE54
 * Callers:
 *     sub_18007BC10 @ 0x18007BC10 (sub_18007BC10.c)
 * Callees:
 *     sub_180026A54 @ 0x180026A54 (sub_180026A54.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18003BB4C @ 0x18003BB4C (sub_18003BB4C.c)
 *     sub_18003BB80 @ 0x18003BB80 (sub_18003BB80.c)
 *     sub_18003BF7C @ 0x18003BF7C (sub_18003BF7C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18007DAF4 @ 0x18007DAF4 (sub_18007DAF4.c)
 */

__int64 __fastcall sub_18007BE54(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 i; // rax
  __int64 v9; // rsi

  v3 = sub_180026A54(a1, *(_DWORD *)(a2 + 12));
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    sub_18003BB80(v3, v4);
    *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) & 0xFFFFFFFE | (*(_DWORD *)(a2 + 8) != 0);
    sub_18003BB4C(v6, v7);
    if ( *(_DWORD *)(a2 + 8) )
    {
      for ( i = (__int64)sub_18003CF94(v6, 1, 0LL); ; i = sub_18003BF7C(v9) )
      {
        v9 = i;
        if ( !i )
          break;
        sub_18007DAF4(i);
      }
    }
    sub_1800274E0((_QWORD *)v6);
  }
  else
  {
    return (unsigned int)-1073741729;
  }
  return v5;
}
