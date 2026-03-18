/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x1C006135C
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C0061028 (ACPIAssociateWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0061640 (ACPIFreeWaitWakePowerRequest.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C004C858 (ExFreeToNPagedLookasideList.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C00615F8 (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C00622F4 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(unsigned int a1, __int64 a2)
{
  KIRQL v4; // si
  char *v5; // rbx
  int v6; // ecx
  KIRQL v7; // al
  _QWORD *v8; // rax
  PVOID *v9; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF
  PVOID Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  Parameters = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( (int)ACPIFindWakeInterruptForVector(a1, a2, &Entry) >= 0 )
  {
    v5 = (char *)Entry;
    v6 = *((_DWORD *)Entry + 22);
    if ( !v6 )
    {
      if ( *((_DWORD *)Entry + 14) != 5 )
      {
        if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(Entry) )
          goto LABEL_10;
        *((_DWORD *)v5 + 14) = 1;
        KeReleaseSpinLock(&AcpiPowerLock, v4);
        Parameters.Version = 1;
        Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v5 + 6);
        IoDisconnectInterruptEx(&Parameters);
        v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        *((_DWORD *)v5 + 14) = 5;
        v4 = v7;
        KeSetEvent((PRKEVENT)(v5 + 64), 0, 0);
        v6 = *((_DWORD *)v5 + 22);
      }
      if ( !v6 )
      {
        v8 = *(_QWORD **)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v9 = (PVOID *)*((_QWORD *)v5 + 1), *v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        *((_QWORD *)v5 + 1) = v5;
        *(_QWORD *)v5 = v5;
        ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v5);
      }
    }
  }
LABEL_10:
  KeReleaseSpinLock(&AcpiPowerLock, v4);
}
