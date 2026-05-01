/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180191AC0
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x1800F2670 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        int a2)
{
  return AgileRegistrationList::Unregister(this + 15, a2);
}
