/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C0002A70
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0002AE4 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 */

void __fastcall FxTimer::_FxTimerWorkItemCallback(FxTimer *Parameter)
{
  FxTimer::TimerHandler(Parameter);
}
