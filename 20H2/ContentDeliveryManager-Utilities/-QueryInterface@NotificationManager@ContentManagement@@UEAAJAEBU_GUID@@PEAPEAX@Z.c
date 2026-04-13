/*
 * XREFs of ?QueryInterface@NotificationManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000EEC0
 * Callers:
 *     ?QueryInterface@NotificationManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023E10 (-QueryInterface@NotificationManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NotificationManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023E70 (-QueryInterface@NotificationManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NotificationManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024190 (-QueryInterface@NotificationManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::QueryInterface(
        ContentManagement::NotificationManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::INotificationManager>::QueryInterface(
           this,
           a2,
           a3);
}
