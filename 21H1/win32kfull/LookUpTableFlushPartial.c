/*
 * XREFs of LookUpTableFlushPartial @ 0x27B226
 * Callers:
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x27A966 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTO.c)
 *     TlgAggregateFlushTimerCallback @ 0x27B27B (TlgAggregateFlushTimerCallback.c)
 * Callees:
 *     FlushLookUpTableBucket @ 0x1B698C (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x27B304 (UpdateInternalStatsOnFlush.c)
 */

void __thiscall LookUpTableFlushPartial(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // [esp+8h] [ebp-4h]

  v2 = 0;
  if ( this[32] )
  {
    v3 = this[33];
    v5 = v3;
    v4 = v3;
    do
    {
      if ( this[v4] )
      {
        v2 += FlushLookUpTableBucket((int)this, v4);
        v3 = v5;
      }
      v4 = ((_BYTE)v4 + 1) & 0x1F;
    }
    while ( v4 != v3 && v2 < 0x10 );
    this[33] = v4;
    UpdateInternalStatsOnFlush(this, v2);
  }
}
