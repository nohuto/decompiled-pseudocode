/*
 * XREFs of MiGetPfnLink @ 0x1402514D0
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14070000C (MiFreeReadListPageList.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0474 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DC9C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409B1C90 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
