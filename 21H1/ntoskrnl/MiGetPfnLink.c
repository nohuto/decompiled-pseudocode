/*
 * XREFs of MiGetPfnLink @ 0x140322740
 * Callers:
 *     MiFreeReadListPages @ 0x14063E4FC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063E584 (MiFreeReadListPageList.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x1407826C0 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409AD090 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
