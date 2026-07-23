/*
 * XREFs of MiReduceWs @ 0x14036C53C
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14029EC80 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14036C5D8 (MiSimpleAging.c)
 */

__int64 __fastcall MiReduceWs(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned int i; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 136);
  for ( i = 7; v5 > a3; --i )
  {
    v8 = v5 - a3;
    if ( i )
    {
      v9 = *(_QWORD *)(a1 + 8LL * i + 40);
      if ( v9 > v8 )
        v9 = v8;
      v8 = v9;
    }
    if ( v8 )
    {
      MiTrimWorkingSet(a1, v8, a2, i, 80);
      if ( !i )
        break;
    }
    v5 = *(_QWORD *)(a1 + 136);
  }
  LOBYTE(v5) = a2;
  return MiSimpleAging(a1, v5);
}
