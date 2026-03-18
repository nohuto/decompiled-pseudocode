/*
 * XREFs of SepSetTokenSessionById @ 0x1406F7AEC
 * Callers:
 *     SepGetAnonymousToken @ 0x1402DE61C (SepGetAnonymousToken.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  struct _DMA_ADAPTER *v7; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
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
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(a2);
      }
    }
  }
}
