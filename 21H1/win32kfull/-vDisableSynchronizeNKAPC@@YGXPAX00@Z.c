/*
 * XREFs of ?vDisableSynchronizeNKAPC@@YGXPAX00@Z @ 0x1FD29C
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YGXK@Z @ 0xAD16A (-vDisableTimers@@YGXK@Z.c)
 */

void __stdcall vDisableSynchronizeNKAPC(void *a1, void *a2, void *a3)
{
  UserEnterUserCritSec();
  vDisableTimers((char)a1);
  UserLeaveUserCritSec();
}
