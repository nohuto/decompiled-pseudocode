/*
 * XREFs of ExQueryBigPoolTag @ 0x1405B3D60
 * Callers:
 *     sub_1403EBB94 @ 0x1403EBB94 (sub_1403EBB94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryBigPoolTag(unsigned __int64 a1, _DWORD *a2)
{
  int v4; // r11d
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  if ( !PoolBigPageTable || !PoolBigPageTableSize )
    return 0LL;
  v4 = 1;
  v5 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                               * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  while ( 1 )
  {
    v6 = PoolBigPageTable + 24 * v5;
    v7 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 && a1 >= v7 && a1 < *(_QWORD *)(v6 + 16) + v7 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v4 )
        return 0LL;
      v5 = 0LL;
      v4 = 0;
    }
  }
  if ( !v6 )
    return 0LL;
  result = 1LL;
  *a2 = *(_DWORD *)(v6 + 8);
  return result;
}
