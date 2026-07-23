/*
 * XREFs of MiHotAddHugeRange @ 0x1408C6B18
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiAddPartitionHugeRange @ 0x1405329D8 (MiAddPartitionHugeRange.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiInitializeHugePfnDatabase @ 0x1405335E0 (MiInitializeHugePfnDatabase.c)
 */

__int64 __fastcall MiHotAddHugeRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  int v10; // r8d
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v11[0] = 0LL;
  v11[1] = 0LL;
  v13 = 0;
  if ( !(unsigned int)MiInitializeHugePfnDatabase() )
    return 3221225626LL;
  if ( a4 )
  {
    MiHugePageOperation((a2 >> 18) & 0x3FFFF);
    v10 = 1;
  }
  else
  {
    v10 = (a5 != 0) + 2;
  }
  v14 = a2;
  v15 = a3;
  v12 = 38;
  return MiAddPartitionHugeRange(a1, (__int64)v11, v10);
}
