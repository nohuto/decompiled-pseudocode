/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x27A966
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x27B226 (LookUpTableFlushPartial.c)
 */

void __stdcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _DWORD *a7)
{
  void (__stdcall *v7)(const struct _GUID *, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, struct _EVENT_FILTER_DESCRIPTOR *, _DWORD); // eax

  v7 = (void (__stdcall *)(const struct _GUID *, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, struct _EVENT_FILTER_DESCRIPTOR *, _DWORD))a7[48];
  if ( v7 )
    v7(a1, a2, a3, a4, HIDWORD(a4), a5, HIDWORD(a5), a6, a7[49]);
  if ( a2 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( a2 == 2 )
  {
    LookUpTableFlushPartial(a7);
  }
}
