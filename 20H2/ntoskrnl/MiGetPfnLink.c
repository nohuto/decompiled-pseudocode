/*
 * XREFs of MiGetPfnLink @ 0x140330EE0
 * Callers:
 *     MiFreeReadListPages @ 0x1406584B4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14065853C (MiFreeReadListPageList.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x140795D54 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14088019C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409B3E60 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
