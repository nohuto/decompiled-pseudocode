/*
 * XREFs of MiFreeLargeZeroPages @ 0x14026E05C
 * Callers:
 *     MiPruneProcessLargePageCaches @ 0x140267594 (MiPruneProcessLargePageCaches.c)
 *     MiCleanupPageTablePages @ 0x14026DFF0 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1405C20CC (MiFreeLargeProcessPagesToCache.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbp
  int v9; // r10d
  _QWORD **v10; // rcx
  _QWORD *v11; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdi
  char v15; // al
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v9 = a1;
  do
  {
    while ( 1 )
    {
      v10 = (_QWORD **)(a2 + 24 * v7);
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] != v10 || (v13 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v13;
      v13[1] = v10;
      if ( (_DWORD)v7 == 3 )
      {
        if ( a4 && (unsigned int)MiIsPfnFromSlabAllocation(v11) )
          ++v5;
        MiReleaseFreshPage((__int64)v11);
        ++v4;
      }
      else
      {
        v14 = MiLargePageSizes[v7];
        MiUpdateLargePageBitMap(v9, -1431655765 * ((__int64)(v11 + 0x44000000000LL) >> 4), v14, 0, 1);
        v15 = MiLockPageInline(v11);
        *((_QWORD *)&v18 + 1) = a3;
        v19 = 0LL;
        *(_QWORD *)&v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v11 + 0x44000000000LL) >> 4);
        LOBYTE(v19) = v15;
        MiInsertLargePageInNodeList(&v18);
        v4 += v14;
      }
      v9 = a1;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 4 );
  if ( a4 )
    *a4 = v5;
  return v4;
}
