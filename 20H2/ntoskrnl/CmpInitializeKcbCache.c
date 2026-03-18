/*
 * XREFs of CmpInitializeKcbCache @ 0x1405DAC74
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     CmpDeleteKcbCache @ 0x1406A33C4 (CmpDeleteKcbCache.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeKcbCache(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // r14
  int v5; // edi
  _QWORD *v6; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rax
  unsigned int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * a2, 0x61434D43u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 24 * a2);
      v8 = ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x61434D43u);
      v6 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x300uLL);
        v9 = 0;
        if ( a2 )
        {
          v10 = v3;
          v11 = a2;
          v9 = a2;
          do
          {
            *v10 = 0LL;
            v10 += 3;
            --v11;
          }
          while ( v11 );
        }
        if ( v9 == a2 )
        {
          v12 = v6;
          v13 = 32LL;
          do
          {
            *v12 = 0LL;
            v12 += 3;
            --v13;
          }
          while ( v13 );
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
