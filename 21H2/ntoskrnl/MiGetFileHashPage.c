/*
 * XREFs of MiGetFileHashPage @ 0x14038D1B0
 * Callers:
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 Page; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  void *v8; // r8
  unsigned __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  unsigned __int8 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 248);
  v3 = 1LL;
  v15 = 0;
  if ( (int)MiAcquireNonPagedResources((ULONG_PTR *)v2, 1uLL, 128LL, 2u) >= 0 )
  {
    Page = MiGetPage(v2, a2, 512LL);
    v6 = Page;
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
          v14 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v13 = (_DWORD)CachedResidentAvailable == v14;
          LODWORD(CachedResidentAvailable) = v14;
          if ( v13 )
            return v6;
        }
        while ( v14 != -1 && (unsigned __int64)(v14 + 1LL) <= 0x100 );
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
      v7 = MiMapPageInHyperSpaceWorker(Page, &v15, 0x80000000);
      v8 = (void *)v7;
      v9 = 1024LL;
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)v7 = 0;
        v8 = (void *)(v7 + 4);
        v9 = 1023LL;
      }
      memset(v8, 0, 8 * (v9 >> 1));
      if ( (v9 & 1) != 0 )
        *((_DWORD *)v8 + v9 - 1) = 0;
      MiUnmapPageInHyperSpaceWorker(v7, v15, 0x80000000);
      _InterlockedAdd64(&qword_140C4F868, 1uLL);
    }
    return v6;
  }
  return -1LL;
}
