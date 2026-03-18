/*
 * XREFs of AMLIResumeInterpreter @ 0x1C0064914
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C00502A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0050B60 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C005C740 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0064B90 (Simulator_CallbackWorker.c)
 * Callees:
 *     LogSchedEvent @ 0x1C00297A4 (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C002B8D0 (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0081DA8 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_1C0081D68;
        if ( (__int64 *)qword_1C0081D68 == &qword_1C0081D68 )
          break;
        if ( *(__int64 **)(qword_1C0081D68 + 8) != &qword_1C0081D68 )
          goto LABEL_14;
        v1 = *(_QWORD *)qword_1C0081D68;
        if ( *(_QWORD *)(*(_QWORD *)qword_1C0081D68 + 8LL) != qword_1C0081D68 )
          goto LABEL_14;
        qword_1C0081D68 = *(_QWORD *)qword_1C0081D68;
        *(_QWORD *)(v1 + 8) = &qword_1C0081D68;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C0081D68;
          if ( *(__int64 **)(qword_1C0081D68 + 8) != &qword_1C0081D68 )
LABEL_14:
            __fastfail(3u);
          *v0 = qword_1C0081D68;
          v0[1] = &qword_1C0081D68;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C0081D68 = (__int64)v0;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      if ( (__int64 *)qword_1C0081D68 != &qword_1C0081D68 && (gReadyQueue & 2) == 0 )
      {
        OSQueueWorkItem(&qword_1C0081D88);
        gReadyQueue |= 2u;
        LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
