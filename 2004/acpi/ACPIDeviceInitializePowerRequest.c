/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C001C784
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000D950 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001AFF4 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001C688 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002D724 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002E2C4 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C00311B0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C0050878 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0050BD0 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0052838 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1C001C9F0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C0061C5C (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C0061CA4 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00B603C (ACPIWakeEmulationPrepare.c)
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
  __int64 result; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64 *); // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF

  ++dword_1C0082E94;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v11 )
  {
    ++dword_1C0082E98;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0082EB0)(
                          (unsigned int)dword_1C0082EA4,
                          (unsigned int)dword_1C0082EAC,
                          (unsigned int)dword_1C0082EA8);
    if ( !v11 )
    {
      v17 = -1073741670;
LABEL_26:
      if ( a3 )
        ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a4, (unsigned int)v17);
      return (unsigned int)v17;
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
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 696), 0, 0) )
    {
LABEL_12:
      v13 = a7;
      goto LABEL_13;
    }
    if ( a5 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_12;
      v13 = a7 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_12;
      v13 = a7 | 0x20;
    }
LABEL_13:
    *((_DWORD *)&v11[6].Next + 2) = a2;
    *((_DWORD *)&v11[6].Next + 3) = 0;
    *((_DWORD *)&v11[3].Next + 2) = v13;
    if ( a2 > *(_DWORD *)(a1 + 344) )
    {
      v15 = *(struct _DEVICE_OBJECT **)(a1 + 728);
      if ( v15 )
        PoSetPowerState(v15, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 960) &= ~0x10000uLL;
    goto LABEL_8;
  }
  if ( a6 == 1 )
  {
    v13 = a7;
    *((_DWORD *)&v11[6].Next + 3) = a5;
    *((_DWORD *)&v11[6].Next + 2) = a2;
    goto LABEL_8;
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
LABEL_8:
        if ( (v13 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v11, v13);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
        return 3221225494LL;
      }
    }
    *((_DWORD *)&v11[3].Next + 2) = v13;
    goto LABEL_8;
  }
  *((_DWORD *)&v11[3].Next + 2) = a7;
  *((_DWORD *)&v11[6].Next + 2) = a2;
  LODWORD(v11[7].Next) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  if ( (*(_QWORD *)(a1 + 960) & 0x100000000LL) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v17 = -1073741496;
      goto LABEL_26;
    }
    v17 = ACPIWakeEmulationPrepare(v11);
    if ( v17 < 0 )
      goto LABEL_26;
    v17 = ACPIWakeEmulationEnable(v11);
    if ( v17 < 0 )
    {
      ACPIWakeEmulationDisable(v11);
      goto LABEL_26;
    }
  }
  if ( (*(_QWORD *)(a1 + 960) & 0x4000000000LL) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 952);
    v20 = *(unsigned int *)(a1 + 936);
    v19 = *(void (__fastcall **)(__int64, __int64 *))(a1 + 944);
    BYTE4(v20) = 1;
    v19(v18, &v20);
  }
  LOBYTE(v16) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v16, &ACPIDeviceIrpWaitWakeRequestPending, v11);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
