/*
 * XREFs of EtwpGetTrackingLockSlotForThread @ 0x1405AAE84
 * Callers:
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AB178 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405AB36C (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

signed __int64 __fastcall EtwpGetTrackingLockSlotForThread(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 Object; // rbx
  int v6; // ebp
  PVOID PoolWithTag; // rax
  signed __int64 v8; // rdi
  signed __int64 v10; // rax
  int v11; // ecx
  int v12; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 0LL;
  Object = (signed __int64)CurrentThread[1].WaitBlock[0].Object;
  v6 = EtwpEthreadSyncTrackingSequence;
  if ( !Object )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x200uLL, 0x72546552u);
    v8 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x200uLL);
      *(_QWORD *)(v8 + 16) = a1;
      *(_DWORD *)(v8 + 28) = a2;
      *(_DWORD *)(v8 + 40) = v6;
      Object = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Object, v8, 0LL);
      if ( !Object )
        return v8;
      ExFreePoolWithTag((PVOID)v8, 0);
      goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  v10 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(Object + 28);
    if ( v12 == a2 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v6 )
      return Object;
    if ( !v10 )
    {
      if ( v12 )
      {
        if ( *(_DWORD *)(Object + 40) < v6 )
        {
          v10 = Object;
LABEL_18:
          Object = v10;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = a1;
            *(_DWORD *)(v10 + 28) = a2;
            *(_QWORD *)(v10 + 32) = 0LL;
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = 0LL;
            *(_DWORD *)(v10 + 24) = 0;
            *(_DWORD *)(v10 + 40) = v6;
            *(_DWORD *)(v10 + 44) = 0;
          }
          return Object;
        }
      }
      else
      {
        v10 = Object;
      }
    }
    Object += 64LL;
    if ( (unsigned int)++v11 >= 8 )
      goto LABEL_18;
  }
}
