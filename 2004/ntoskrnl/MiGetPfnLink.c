/*
 * XREFs of MiGetPfnLink @ 0x140360050
 * Callers:
 *     MiFreeReadListPages @ 0x1406093AC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140609434 (MiFreeReadListPageList.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x140788044 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087A62C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409ADEF0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
