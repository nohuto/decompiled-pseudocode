/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x27A94A
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 */

void __stdcall TlgAggregateInternalProviderCallback(
        const struct _GUID *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        void *a7)
{
  int i; // esi

  if ( a2 == 2 && a4 == 32 && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_274B44, 0) )
  {
    for ( i = dword_275590; i; i = *(_DWORD *)(i + 204) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_274B44, 0);
  }
}
