/*
 * XREFs of ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025230
 * Callers:
 *     ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180029A80 (-GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::GetIids(
        ContentManagement::AppInstallInfoRecordImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::GetIids(
           this,
           a2,
           a3);
}
