/*
 * XREFs of PoFxSetTargetDripsDevicePowerState @ 0x1408E46B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     PopFxReleaseDevice @ 0x14056C5A0 (PopFxReleaseDevice.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574AD0 (PopPepGetMinimumDevicePowerState.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoFxSetTargetDripsDevicePowerState(ULONG_PTR a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // bp
  __int64 v6; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v9 = 0;
  v10 = 0;
  if ( PopFxDeviceAccountingLevel < 0 )
  {
    if ( a2 == 1 || a2 > 4 )
      return (unsigned int)-1073741811;
    v5 = dword_140C500C0;
    if ( dword_140C500C0 == -1 )
      return (unsigned int)-1073741823;
    if ( !a1 )
      return (unsigned int)-1073741811;
    PopFxAddRefDevice(a1);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 )
      {
        if ( PopPepGetMinimumDevicePowerState(v6, v5, 1, &v9, &v10) )
        {
          if ( !a2 && v9 == v10 || a2 == v9 )
            goto LABEL_20;
          if ( v10 <= 1 || !a2 || a2 > v10 )
          {
            PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4D584650u);
            if ( PoolWithTag )
            {
              PoolWithTag->List.Blink = &PoolWithTag->List;
              PoolWithTag->List.Flink = &PoolWithTag->List;
              PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))a1;
              LODWORD(PoolWithTag->Parameter) = a2;
              PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))PopFxUpdateVetoMaskWork;
              PoolWithTag[1].Parameter = PoolWithTag;
              PoolWithTag[1].List.Flink = 0LL;
              ExQueueWorkItem(PoolWithTag + 1, DelayedWorkQueue);
              return v2;
            }
            v2 = -1073741670;
            goto LABEL_20;
          }
        }
      }
    }
    v2 = -1073741823;
LABEL_20:
    PopFxReleaseDevice(a1);
    return v2;
  }
  return (unsigned int)-1073741637;
}
