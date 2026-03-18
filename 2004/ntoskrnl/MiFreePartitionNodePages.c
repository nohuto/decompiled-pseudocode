/*
 * XREFs of MiFreePartitionNodePages @ 0x14055CE44
 * Callers:
 *     MiFreePartitionTree @ 0x14055CE9C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 * Callees:
 *     MiActOnPartitionNodePages @ 0x14055B400 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionNodePages(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v6 = a1;
  v4 = 1;
  v7 = 0LL;
  v8 = 0LL;
  if ( (a3 & 4) == 0 )
    v4 = 2 * ((a3 & 1) == 0);
  MiActOnPartitionNodePages(a2, v4, (__int16 **)&v6);
  return DWORD1(v7);
}
