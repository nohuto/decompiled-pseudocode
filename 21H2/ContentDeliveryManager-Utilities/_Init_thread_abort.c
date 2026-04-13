/*
 * XREFs of _Init_thread_abort @ 0x1800D0A6C
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800D6E4A (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_18019CCE0);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_18019CCE0);
  WakeAllConditionVariable(&ConditionVariable);
}
