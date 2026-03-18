/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C0008B20
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C0007924 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C0008A3C (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002E3E0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C004F888 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C004FAD4 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C004FC38 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C00500F4 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0051EC8 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1C0008D14 (ACPIDeviceInternalQueueRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C0062BE8 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C0062C34 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00B59B4 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  PSLIST_ENTRY v11; // rdi
  KIRQL v12; // r12
  unsigned int v13; // esi
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 result; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64 *); // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF

  ++dword_1C0081FD4;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v11 )
  {
    ++dword_1C0081FD8;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0081FF0)(
                          (unsigned int)dword_1C0081FE4,
                          (unsigned int)dword_1C0081FEC,
                          (unsigned int)dword_1C0081FE8);
    if ( !v11 )
    {
      v16 = -1073741670;
LABEL_22:
      if ( a3 )
        ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a4, (unsigned int)v16);
      return (unsigned int)v16;
    }
  }
  memset(v11, 0, 0x108uLL);
  *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
  v11[1].Next = v11 + 1;
  *((_QWORD *)&v11[5].Next + 1) = v11 + 5;
  v11[5].Next = v11 + 5;
  *((_QWORD *)&v11[4].Next + 1) = v11 + 4;
  v11[4].Next = v11 + 4;
  LODWORD(v11[2].Next) = 1599293264;
  v11[12].Next = a3;
  *((_QWORD *)&v11[12].Next + 1) = a4;
  *((_QWORD *)&v11[2].Next + 1) = a1;
  LODWORD(v11[13].Next) = 3;
  LODWORD(v11[16].Next) = 0;
  LODWORD(v11[3].Next) = a6;
  *((_QWORD *)&v11->Next + 1) = v11;
  v11->Next = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a6 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 736), 0, 0) )
    {
LABEL_5:
      v13 = a7;
      goto LABEL_6;
    }
    if ( a5 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_5;
      v13 = a7 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_5;
      v13 = a7 | 0x20;
    }
LABEL_6:
    *((_DWORD *)&v11[6].Next + 2) = a2;
    *((_DWORD *)&v11[6].Next + 3) = 0;
    *((_DWORD *)&v11[3].Next + 2) = v13;
    if ( a2 > *(_DWORD *)(a1 + 384) )
    {
      v14 = *(struct _DEVICE_OBJECT **)(a1 + 768);
      if ( v14 )
        PoSetPowerState(v14, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 1000) &= ~0x10000uLL;
    goto LABEL_11;
  }
  if ( a6 == 1 )
  {
    v13 = a7;
    *((_DWORD *)&v11[6].Next + 3) = a5;
    *((_DWORD *)&v11[6].Next + 2) = a2;
    goto LABEL_11;
  }
  if ( a6 != 2 )
  {
    if ( a6 == 3 )
    {
      v13 = a7;
      *((_DWORD *)&v11[6].Next + 2) = a2;
    }
    else
    {
      v13 = a7;
      if ( a6 != 4 )
      {
LABEL_11:
        if ( (v13 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v11, v13);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
        return 3221225494LL;
      }
    }
    *((_DWORD *)&v11[3].Next + 2) = v13;
    goto LABEL_11;
  }
  *((_DWORD *)&v11[3].Next + 2) = a7;
  *((_DWORD *)&v11[6].Next + 2) = a2;
  LODWORD(v11[7].Next) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  if ( _bittest64((const signed __int64 *)(a1 + 1000), 0x20u) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v16 = -1073741496;
      goto LABEL_22;
    }
    v16 = ACPIWakeEmulationPrepare(v11);
    if ( v16 < 0 )
      goto LABEL_22;
    v16 = ACPIWakeEmulationEnable(v11);
    if ( v16 < 0 )
    {
      ACPIWakeEmulationDisable(v11);
      goto LABEL_22;
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1000), 0x26u) )
  {
    v18 = *(_QWORD *)(a1 + 992);
    v20 = *(unsigned int *)(a1 + 976);
    v19 = *(void (__fastcall **)(__int64, __int64 *))(a1 + 984);
    BYTE4(v20) = 1;
    v19(v18, &v20);
  }
  LOBYTE(v17) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v17, &ACPIDeviceIrpWaitWakeRequestPending, v11);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
