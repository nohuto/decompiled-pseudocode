/*
 * XREFs of _Init_thread_abort @ 0x1800CC324
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800D2515 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_180193CD8);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_180193CD8);
  WakeAllConditionVariable(&ConditionVariable);
}
