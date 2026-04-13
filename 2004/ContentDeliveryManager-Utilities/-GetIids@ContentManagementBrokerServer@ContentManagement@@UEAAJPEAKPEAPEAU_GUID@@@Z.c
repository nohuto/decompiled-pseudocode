/*
 * XREFs of ?GetIids@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024F50
 * Callers:
 *     ?GetIids@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180029A50 (-GetIids@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetIids(
        ContentManagement::ContentManagementBrokerServer *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::GetIids(
           this,
           a2,
           a3);
}
