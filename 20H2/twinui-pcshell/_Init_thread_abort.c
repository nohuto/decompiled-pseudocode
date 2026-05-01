/*
 * XREFs of _Init_thread_abort @ 0x18008E0B0
 * Callers:
 *     _CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x1801F27E0 (_CortanaStoreAppExperienceManager--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801F46B1 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x18034AE75 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1805CB2F8);
  *a1 = 0;
  LeaveCriticalSection(&stru_1805CB2F8);
  return Init_thread_notify();
}
