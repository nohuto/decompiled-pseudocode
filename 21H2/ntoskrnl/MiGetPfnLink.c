/*
 * XREFs of MiGetPfnLink @ 0x1402D2F30
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406E8C2C (MiFreeReadListPageList.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0274 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB3C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409B0D60 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
