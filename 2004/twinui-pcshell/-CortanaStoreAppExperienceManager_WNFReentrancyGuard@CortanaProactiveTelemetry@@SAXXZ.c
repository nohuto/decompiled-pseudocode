/*
 * XREFs of ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x1800975C4
 * Callers:
 *     _lambda_7e6963f912875587faeb037360c0fdaa_::operator() @ 0x1800972AC (_lambda_7e6963f912875587faeb037360c0fdaa_--operator().c)
 *     _lambda_8c9079aa2485ab0718fabcb8e444aaab_::operator() @ 0x180097364 (_lambda_8c9079aa2485ab0718fabcb8e444aaab_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801BA6E8 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard(void)
{
  const struct _tlgProvider_t *v0; // rcx
  int v1; // ecx
  int v2; // r9d
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x400000000000LL) )
    {
      v3 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v1,
        (unsigned int)&unk_180505677,
        0,
        v2,
        (__int64)&v3);
    }
  }
}
