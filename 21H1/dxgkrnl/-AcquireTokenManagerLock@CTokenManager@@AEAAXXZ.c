/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00070A0
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0006B0C (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C000701C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0007540 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0007CA0 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001B5E0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0061AE0 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C0061C70 (-ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x1C0061CF0 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C0061DC0 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C0061F80 (-LockIfNotTokenThread@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
}
