/*
 * XREFs of _Init_thread_abort @ 0x1800CE9BC
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800D4D40 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_180198CE8);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_180198CE8);
  WakeAllConditionVariable(&ConditionVariable);
}
