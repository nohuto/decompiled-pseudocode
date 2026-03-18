/*
 * XREFs of PoFxInitPowerManagement @ 0x140B28250
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopFxInitializeWorkPool @ 0x14085B454 (PopFxInitializeWorkPool.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 result; // rax

  stru_140C23C80.Header.Size = 6;
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  qword_140C23B88 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  qword_140C23BA8 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_140C23CF8 = (__int64)&PopWorkOrderList;
  PopWorkOrderList = (__int64)&PopWorkOrderList;
  qword_140C23CD0 = (__int64)PopFxResidentTimeoutRoutine;
  qword_140C23C70 = (__int64)&qword_140C23C68;
  qword_140C23C68 = (__int64)&qword_140C23C68;
  stru_140C23C80.Header.WaitListHead.Blink = &stru_140C23C80.Header.WaitListHead;
  stru_140C23C80.Header.WaitListHead.Flink = &stru_140C23C80.Header.WaitListHead;
  PopFxResidentDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  qword_140C23B78 = (__int64)&PopFxPluginList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  PopFxActiveIdleThreshold *= 10000;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  PopWorkOrderLock = 0LL;
  qword_140C23CD8 = 0LL;
  PopFxResidentWorkItem = 0LL;
  PopFxBlockingDeviceListLock = 0LL;
  PopFxUpdateDripsConstraintContext = 0LL;
  LOWORD(stru_140C23C80.Header.Lock) = 0;
  stru_140C23C80.Header.SignalState = 1;
  PopFxResidentDpc.TargetInfoAsUlong = 275;
  PopFxResidentDpc.DeferredContext = 0LL;
  PopFxResidentDpc.DpcData = 0LL;
  PopFxResidentDpc.ProcessorHistory = 0LL;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  PopFxResidentTimer.Period = 0;
  PopFxResidentTimer.Processor = 0;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxGlobalDeviceAccountingLock = 0LL;
  memset(&byte_140C23D21, 0, 0x6FuLL);
  PopFxGlobalDeviceAccountingInfo[0] = 1;
  PopFxDeviceAccountingLevel = PopSleepStudyDeviceAccountingLevel;
  if ( PopSleepStudyDisabled )
    PopFxDeviceAccountingLevel = 0;
  qword_140C23CA8 = (__int64)&SocSubsystemsList;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxSystemWorkPool, 0LL);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_140C20A48 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_140C20AD0 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  qword_140C1C970 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_140C20AD8 = 0LL;
  PopPepIdleWorkItem = 0LL;
  PopPepIdleDpc.TargetInfoAsUlong = 275;
  PopPepIdleDpc.DeferredContext = 0LL;
  PopPepIdleDpc.DpcData = 0LL;
  PopPepIdleDpc.ProcessorHistory = 0LL;
  PopPepIdleTimer.DueTime.QuadPart = 0LL;
  PopPepIdleTimer.Period = 0;
  PopPepIdleTimer.Processor = 0;
  PopPepVetoMaskReadyLock = 0LL;
  PopFxDirectedPowerUpTimeoutMs = 0;
  PopFxPlatformInterface = 0LL;
  if ( PopWatchdogResumeTimeout )
    PopFxDirectedPowerUpTimeoutMs = 1000 * (PopWatchdogResumeTimeout + 120);
  result = (unsigned int)PopWatchdogSleepTimeout;
  PopFxDirectedPowerDownTimeoutMs = 0;
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    result = (unsigned int)(PopWatchdogSleepTimeout + 120);
    PopFxDirectedPowerDownTimeoutMs = 1000 * result;
  }
  return result;
}
