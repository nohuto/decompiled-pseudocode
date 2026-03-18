/*
 * XREFs of ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C00166C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C00166F8 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkerThreadRoutine(FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
