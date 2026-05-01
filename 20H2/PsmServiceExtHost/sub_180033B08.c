/*
 * XREFs of sub_180033B08 @ 0x180033B08
 * Callers:
 *     sub_180033A50 @ 0x180033A50 (sub_180033A50.c)
 * Callees:
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 */

__int64 __fastcall sub_180033B08(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int8 v10; // dl
  __int64 v11; // r9
  BOOL v12; // eax
  int v13; // r8d

  v3 = *(_QWORD *)(a1 + 80);
  v4 = a2;
  v5 = a1;
  if ( (a3 & 1) == 0 )
  {
    sub_180006278(a1, 5u);
    v12 = sub_180006278(v11, v10);
    if ( v13 )
    {
      if ( !v12 )
        return 1LL;
    }
    else if ( v12 )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(v5 + 112) & 0x10000) != 0 && (*(_DWORD *)(v4 + 112) & 0x10000) == 0 )
    return 1LL;
  if ( (*(_DWORD *)(v5 + 112) & 0x10000) == 0 && (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(v5 + 456);
  if ( v7 > *(_QWORD *)(v4 + 456) )
    return 1LL;
  if ( v7 < *(_QWORD *)(v4 + 456) )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(v5 + 464);
  if ( v8 > *(_QWORD *)(v4 + 464) )
    return 1LL;
  if ( v8 < *(_QWORD *)(v4 + 464) )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(v3 + 1000);
  if ( v5 == v9 )
    return 1LL;
  if ( v4 == v9 )
    return 0xFFFFFFFFLL;
  return 0LL;
}
