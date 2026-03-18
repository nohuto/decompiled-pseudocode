/*
 * XREFs of AMLIPauseInterpreter @ 0x1C00647E0
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0050A60 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0050F80 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x1C005C6A0 (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     Simulator_PauseInterpreter @ 0x1C00650DC (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C00297A4 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C0081DA8;
    NewIrql = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C0081DB8;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C0081DB8 != &qword_1C0081DB0 )
        __fastfail(3u);
      *a1 = &qword_1C0081DB0;
      a1[1] = v4;
      *v4 = a1;
      qword_1C0081DB8 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, NewIrql);
    LogSchedEvent(1346458963, 0LL, v1, 0LL, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
