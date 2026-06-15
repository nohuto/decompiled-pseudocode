/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140031844
 * Callers:
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140011C70 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x140011E40 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x14001412C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140015380 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x14001A480 (-GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140030DF0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x14003F960 (-SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x1400574C8 (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x14003150C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr(this, a2, a3, a4, v5, retaddr);
}
