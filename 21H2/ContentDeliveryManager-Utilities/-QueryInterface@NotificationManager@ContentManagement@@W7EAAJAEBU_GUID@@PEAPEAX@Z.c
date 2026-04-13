/*
 * XREFs of ?QueryInterface@NotificationManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800249F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::NotificationManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::NotificationManager::QueryInterface(
           (ContentManagement::NotificationManager *)(a1 - 8),
           a2,
           a3);
}
