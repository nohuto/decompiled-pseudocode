/*
 * XREFs of MiGetFileHashPage @ 0x14038A6A0
 * Callers:
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 Page; // rax
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  void *v9; // r8
  unsigned __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned __int8 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 248);
  v3 = 1LL;
  v16 = 0;
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2u) >= 0 )
  {
    Page = MiGetPage(v2, a2, 512LL);
    v7 = Page;
    if ( Page == -1 )
    {
      MiReturnCommit(v2, 1LL);
      if ( (ULONG_PTR *)v2 != &MiSystemPartition )
        goto LABEL_20;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_20;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v15 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v15;
          LODWORD(CachedResidentAvailable) = v15;
          if ( v14 )
            return v7;
        }
        while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v3 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v3 )
LABEL_20:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 7168), v3);
    }
    else
    {
      v8 = MiMapPageInHyperSpaceWorker(Page, &v16, 0x80000000, v6);
      v9 = (void *)v8;
      v10 = 1024LL;
      if ( (v8 & 4) != 0 )
      {
        *(_DWORD *)v8 = 0;
        v9 = (void *)(v8 + 4);
        v10 = 1023LL;
      }
      memset(v9, 0, 8 * (v10 >> 1));
      if ( (v10 & 1) != 0 )
        *((_DWORD *)v9 + v10 - 1) = 0;
      MiUnmapPageInHyperSpaceWorker(v8, v16, 0x80000000);
      _InterlockedAdd64(&qword_140C4F628, 1uLL);
    }
    return v7;
  }
  return -1LL;
}
