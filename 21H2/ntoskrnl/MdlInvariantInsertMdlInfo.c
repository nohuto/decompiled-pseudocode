/*
 * XREFs of MdlInvariantInsertMdlInfo @ 0x1405A1688
 * Callers:
 *     MdlInvariantPreProcessing1 @ 0x1405A19C8 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MdlInvariantInsertMdlInfo(__int64 a1, _OWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm1

  v2 = *(_QWORD **)(a1 + 224);
  if ( !v2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D646C56u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x58uLL);
    *(_DWORD *)v2 = 2;
    v2[1] = v2 + 3;
    *(_QWORD *)(a1 + 224) = v2;
  }
  v6 = 0;
  if ( !*(_DWORD *)v2 )
    return 0LL;
  v7 = v2[1];
  while ( *(_QWORD *)(32LL * v6 + v7) )
  {
    if ( ++v6 >= *(_DWORD *)v2 )
      return 0LL;
  }
  v9 = 32LL * v6;
  result = 1LL;
  v10 = a2[1];
  *(_OWORD *)(v9 + v7) = *a2;
  *(_OWORD *)(v9 + v7 + 16) = v10;
  return result;
}
