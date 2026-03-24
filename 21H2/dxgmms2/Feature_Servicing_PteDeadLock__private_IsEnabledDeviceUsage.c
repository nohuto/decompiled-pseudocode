/*
 * XREFs of Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage @ 0x1C0018990
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F15C (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 * Callees:
 *     Feature_Servicing_PteDeadLock__private_IsEnabledFallback @ 0x1C00189C8 (Feature_Servicing_PteDeadLock__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PteDeadLock__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PteDeadLock__private_featureState & 1;
  else
    return Feature_Servicing_PteDeadLock__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PteDeadLock__private_featureState,
             3LL);
}
