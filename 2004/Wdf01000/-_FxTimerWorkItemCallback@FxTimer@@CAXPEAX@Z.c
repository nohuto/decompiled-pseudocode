/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C00046B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00046C8 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 */

void __fastcall FxTimer::_FxTimerWorkItemCallback(FxTimer *Parameter)
{
  FxTimer::TimerHandler(Parameter);
}
