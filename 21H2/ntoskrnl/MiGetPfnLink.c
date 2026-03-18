/*
 * XREFs of MiGetPfnLink @ 0x140258680
 * Callers:
 *     MiFreeReadListPages @ 0x1406FAD90 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406FAE2C (MiFreeReadListPageList.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140833350 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x140A6A948 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
