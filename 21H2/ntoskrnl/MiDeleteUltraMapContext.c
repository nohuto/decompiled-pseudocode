/*
 * XREFs of MiDeleteUltraMapContext @ 0x140297984
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x14025FBE0 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x14055F5A8 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v11; // zf
  signed __int32 v12; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = (unsigned int)a2 > 2 ? 1LL : MiLargePageSizes[(unsigned int)a2];
    MiGetUltraMapping(a1, a2, v4, 2LL);
    _InterlockedDecrement(&dword_140C4EC6C);
    v7 = (_QWORD *)(a1 + 8);
    v8 = 0LL;
    do
    {
      if ( *v7 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v7 - 0x58000000000LL);
        ++v8;
        *v7 = -1LL;
      }
      ++v7;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v8 )
    {
      MiReturnCommit(&MiSystemPartition, v8, v5, v6);
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
            v12 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v8,
                    CachedResidentAvailable);
            v11 = (_DWORD)CachedResidentAvailable == v12;
            LODWORD(CachedResidentAvailable) = v12;
            if ( v11 )
              return;
          }
          while ( v12 != -1 && v8 + v12 <= 0x100 );
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
        _InterlockedExchangeAdd64(&qword_140C529C0, v8);
    }
  }
}
