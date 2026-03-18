/*
 * XREFs of ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C000E828
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EF08 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008BA20 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C001199C (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0012804 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::QueueToThread(FxThreadedEventQueue *this)
{
  if ( FxEventQueue::QueueToThreadWorker(this) )
    FxThreadedEventQueue::QueueWorkItem(this);
}
