/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1801BA180
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801B8370 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x1801BC1FC (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnEnsureForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::EnsureForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
