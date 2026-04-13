/*
 * XREFs of ?GetIids@AppManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800574F0
 * Callers:
 *     ?GetIids@AppManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18005F080 (-GetIids@AppManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppManager::GetIids(
        ContentManagement::AppManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::GetIids(
           this,
           a2,
           a3);
}
