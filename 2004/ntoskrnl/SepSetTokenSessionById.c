/*
 * XREFs of SepSetTokenSessionById @ 0x140613DDC
 * Callers:
 *     SepGetAnonymousToken @ 0x14026F294 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SeSetSessionIdToken @ 0x140708398 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmGetSessionObjectById @ 0x140297904 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  struct _DMA_ADAPTER *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v7 = *(struct _DMA_ADAPTER **)(a1 + 1160);
        if ( v7 )
          HalPutDmaAdapter(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(v5, a2);
      }
    }
  }
}
