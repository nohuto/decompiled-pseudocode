/*
 * XREFs of AMLIPauseInterpreter @ 0x1C00633CC
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0051340 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00518A0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x1C005B670 (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     Simulator_PauseInterpreter @ 0x1C0063CCC (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C0029F60 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C00827D8;
    byte_1C00827B0 = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C00827E8;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C00827E8 != &qword_1C00827E0 )
        __fastfail(3u);
      *a1 = &qword_1C00827E0;
      a1[1] = v4;
      *v4 = a1;
      qword_1C00827E8 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
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
