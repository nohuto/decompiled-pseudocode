/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0012170
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0011BD4 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C00120EC (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0012440 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0012AB0 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001B7A0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0062B60 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C0062CF0 (-ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x1C0062D70 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C0062E40 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C0063000 (-LockIfNotTokenThread@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
}
