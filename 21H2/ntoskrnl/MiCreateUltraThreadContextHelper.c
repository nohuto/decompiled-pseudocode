/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x1402E3164
 * Callers:
 *     MiCreateUltraThreadContext @ 0x1402E30FC (MiCreateUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x14055F368 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiAcquireNonPagedResources @ 0x1402E5C90 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v3; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 Page; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r9
  _QWORD *v14; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v17; // eax

  v3 = dword_140C4EC2C;
  if ( dword_140C4EC2C != dword_140C4EC28 )
  {
    while ( 1 )
    {
      v7 = _InterlockedCompareExchange(&dword_140C4EC2C, v3 + 1, v3);
      v6 = v3 == v7;
      v3 = v7;
      if ( v6 )
        break;
      if ( v7 == dword_140C4EC28 )
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
          v11 = (_QWORD *)(48 * Page - 0x57FFFFFFFF0LL);
          *v11 = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(v11);
          *(_QWORD *)(a1 + 8 * v9 + 8) = v12;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_10;
        }
        _InterlockedDecrement(&dword_140C4EC2C);
        if ( (_DWORD)v9 )
        {
          v14 = (_QWORD *)(a1 + 8 * v9 + 8);
          do
          {
            MiReleaseFreshPage(48LL * *--v14 - 0x58000000000LL);
            *v14 = -1LL;
            LODWORD(v9) = v9 - 1;
          }
          while ( (_DWORD)v9 );
        }
        MiReturnCommit(&MiSystemPartition, v8);
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
              v17 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + v8,
                      CachedResidentAvailable);
              v6 = (_DWORD)CachedResidentAvailable == v17;
              LODWORD(CachedResidentAvailable) = v17;
              if ( v6 )
                return 0LL;
            }
            while ( v17 != -1 && v8 + v17 <= 0x100 );
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
          _InterlockedExchangeAdd64(&qword_140C52980, v8);
        return 0LL;
      }
LABEL_10:
      *(_BYTE *)(a1 + 24) = 1;
      return 1LL;
    }
    _InterlockedDecrement(&dword_140C4EC2C);
  }
  return 0LL;
}
