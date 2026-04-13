/*
 * XREFs of ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800240E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::PhoneShellNamespaceHelper::QueryInterface(
           (ContentManagement::PhoneShellNamespaceHelper *)(a1 - 40),
           a2,
           a3);
}
