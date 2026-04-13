/*
 * XREFs of ?GetIids@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180027420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::ContentManagementBrokerServer::GetIids(
           (ContentManagement::ContentManagementBrokerServer *)(a1 - 48),
           a2,
           a3);
}
