/*
 * XREFs of _Init_thread_abort @ 0x1800CE56C
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800D48F0 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_180198CF0);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_180198CF0);
  WakeAllConditionVariable(&ConditionVariable);
}
