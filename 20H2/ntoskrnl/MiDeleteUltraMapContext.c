/*
 * XREFs of MiDeleteUltraMapContext @ 0x1403338F0
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x140313058 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x14055D898 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = a2 > 2 ? 1LL : MiLargePageSizes[a2];
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_140C4EAAC);
    v6 = (_QWORD *)(a1 + 8);
    v7 = 0LL;
    do
    {
      if ( *v6 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v6 - 0x58000000000LL, v5);
        ++v7;
        *v6 = -1LL;
      }
      ++v6;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v7 )
    {
      MiReturnCommit((__int64)&MiSystemPartition, v7);
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v7 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v7 >= 0x80000 )
              break;
            v11 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v7,
                    CachedResidentAvailable);
            v10 = (_DWORD)CachedResidentAvailable == v11;
            LODWORD(CachedResidentAvailable) = v11;
            if ( v10 )
              return;
          }
          while ( v11 != -1 && v7 + v11 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v7 += (int)CachedResidentAvailable - 192;
        }
      }
      if ( v7 )
        _InterlockedExchangeAdd64(&qword_140C52800, v7);
    }
  }
}
