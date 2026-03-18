/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x140326FF0
 * Callers:
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x140559878 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v3; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 Page; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 *v13; // rcx
  __int64 v14; // r9
  _QWORD *v16; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v19; // eax

  v3 = dword_140C4EB6C;
  if ( dword_140C4EB6C != dword_140C4EB68 )
  {
    while ( 1 )
    {
      v7 = _InterlockedCompareExchange(&dword_140C4EB6C, v3 + 1, v3);
      v6 = v3 == v7;
      v3 = v7;
      if ( v6 )
        break;
      if ( v7 == dword_140C4EB68 )
        return 0LL;
    }
    *(_QWORD *)a1 = 0LL;
    v8 = a2;
    *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    if ( !a2 )
      goto LABEL_10;
    if ( a2 > 2uLL )
      v8 = 2LL;
    if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, (unsigned int)v8, 0LL, 0LL) >= 0 )
    {
      v9 = 0LL;
      if ( v8 )
      {
        while ( 1 )
        {
          Page = MiGetPage((__int64)&MiSystemPartition, a3, 778LL);
          if ( Page == -1 )
            break;
          v13 = (unsigned __int64 *)(48 * Page - 0x57FFFFFFFF0LL);
          *v13 = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(v13);
          *(_QWORD *)(a1 + 8 * v9 + 8) = v14;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_10;
        }
        _InterlockedDecrement(&dword_140C4EB6C);
        if ( (_DWORD)v9 )
        {
          v16 = (_QWORD *)(a1 + 8 * v9 + 8);
          do
          {
            MiReleaseFreshPage(48LL * *--v16 - 0x58000000000LL, v11, v12);
            *v16 = -1LL;
            LODWORD(v9) = v9 - 1;
          }
          while ( (_DWORD)v9 );
        }
        MiReturnCommit((__int64)&MiSystemPartition, v8);
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v8 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v8 >= 0x80000 )
                break;
              v19 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + v8,
                      CachedResidentAvailable);
              v6 = (_DWORD)CachedResidentAvailable == v19;
              LODWORD(CachedResidentAvailable) = v19;
              if ( v6 )
                return 0LL;
            }
            while ( v19 != -1 && v8 + v19 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v8 += (int)CachedResidentAvailable - 192;
          }
        }
        if ( v8 )
          _InterlockedExchangeAdd64(&qword_140C52880, v8);
        return 0LL;
      }
LABEL_10:
      *(_BYTE *)(a1 + 24) = 1;
      return 1LL;
    }
    _InterlockedDecrement(&dword_140C4EB6C);
  }
  return 0LL;
}
