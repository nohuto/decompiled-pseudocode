/*
 * XREFs of CmpInitializeKcbCache @ 0x1406F8720
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     CmpDeleteKcbCache @ 0x1405E0150 (CmpDeleteKcbCache.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeKcbCache(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // r14
  int v5; // edi
  _QWORD *v6; // rbp
  unsigned int v7; // r15d
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rax
  unsigned int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v3 = 0LL;
  v5 = -1073741670;
  if ( ((a2 - 1) & a2) != 0 )
    return 3221225485LL;
  v6 = 0LL;
  if ( a2 > 0xAAAAAAA )
  {
    v5 = -1073741811;
  }
  else
  {
    v7 = 24 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * a2, 0x61434D43u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      v9 = ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x61434D43u);
      v6 = v9;
      if ( v9 )
      {
        memset(v9, 0, 0x300uLL);
        v10 = 0;
        if ( a2 )
        {
          v11 = v3;
          v12 = a2;
          v10 = a2;
          do
          {
            *v11 = 0LL;
            v11 += 3;
            --v12;
          }
          while ( v12 );
        }
        if ( v10 == a2 )
        {
          v13 = v6;
          v14 = 32LL;
          do
          {
            *v13 = 0LL;
            v13 += 3;
            --v14;
          }
          while ( v14 );
          v5 = 0;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 1640) = v3;
  *(_DWORD *)(a1 + 1648) = a2;
  *(_QWORD *)(a1 + 1656) = v6;
  *(_DWORD *)(a1 + 1664) = 32;
  if ( v5 < 0 )
    CmpDeleteKcbCache(a1);
  return (unsigned int)v5;
}
