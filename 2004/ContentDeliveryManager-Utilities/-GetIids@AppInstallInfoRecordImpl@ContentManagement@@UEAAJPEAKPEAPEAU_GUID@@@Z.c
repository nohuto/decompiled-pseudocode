/*
 * XREFs of ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024A70
 * Callers:
 *     ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800292C0 (-GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
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
