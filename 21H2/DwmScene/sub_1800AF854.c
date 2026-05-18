/*
 * XREFs of sub_1800AF854 @ 0x1800AF854
 * Callers:
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A6CA0 @ 0x1800A6CA0 (sub_1800A6CA0.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 */

__int64 __fastcall sub_1800AF854(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rcx

  v4 = sub_1800F0B14(a1);
  result = sub_18007B2B4(v4);
  v6 = *(__int64 **)(a1 + 1616);
  v7 = result;
  v8 = *v6;
  while ( (__int64 *)v8 != v6 )
  {
    if ( *(_DWORD *)(v8 + 32) == -1 || *(_DWORD *)(v8 + 32) == a2 )
      sub_1800A6CA0(v7);
    result = *(_QWORD *)(v8 + 16);
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = *(_QWORD *)(v8 + 8);
            !*(_BYTE *)(result + 25) && v8 == *(_QWORD *)(result + 16);
            result = *(_QWORD *)(result + 8) )
      {
        v8 = result;
      }
      v8 = result;
    }
    else
    {
      v9 = *(__int64 **)result;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          result = *v9;
          v8 = (__int64)v9;
          v9 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}
