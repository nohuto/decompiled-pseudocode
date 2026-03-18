/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180100410
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18010D6C0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180028930 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::destroy(
        wil::details::EnabledStateManager *this)
{
  __int64 v2; // rdx
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // r8

  if ( wil::ProcessShutdownInProgress(this) )
  {
    *(_BYTE *)this = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this, v2, v3);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager(this);
  }
}
