/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C0008D14
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C004FD30 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0008120 (ACPIPowerScheduleDpc.c)
 */

char __fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v4 = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) != &AcpiPowerSynchronizeList )
      goto LABEL_13;
    *a2 = AcpiPowerSynchronizeList;
    a2[1] = &AcpiPowerSynchronizeList;
    v4[1] = a2;
    AcpiPowerSynchronizeList = (__int64)a2;
  }
  else
  {
    v4 = (_QWORD *)(a1 + 584);
    v5 = a2 + 2;
    if ( (_QWORD *)*v4 == v4 )
    {
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 != v4 )
        goto LABEL_13;
      *v5 = v4;
      a2[3] = v6;
      *v6 = v5;
      v4[1] = v5;
      if ( (v3 & 1) != 0 )
      {
        v4 = (_QWORD *)qword_1C0081318;
        if ( *(__int64 **)qword_1C0081318 == &AcpiPowerDelayedQueueList )
        {
          *a2 = &AcpiPowerDelayedQueueList;
          a2[1] = v4;
          *v4 = a2;
          qword_1C0081318 = (__int64)a2;
          goto LABEL_7;
        }
LABEL_13:
        __fastfail(3u);
      }
      v4 = (_QWORD *)qword_1C0081328;
      if ( *(__int64 **)qword_1C0081328 != &AcpiPowerQueueList )
        goto LABEL_13;
      *a2 = &AcpiPowerQueueList;
      a2[1] = v4;
      *v4 = a2;
      qword_1C0081328 = (__int64)a2;
    }
    else
    {
      v7 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v7 != v4 )
        goto LABEL_13;
      *v5 = v4;
      v5[1] = v7;
      *v7 = v5;
      v4[1] = v5;
    }
  }
LABEL_7:
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    LOBYTE(v4) = ACPIPowerScheduleDpc();
  return (char)v4;
}
