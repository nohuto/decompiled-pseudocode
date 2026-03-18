/*
 * XREFs of IopAllocateFileObjectExtension @ 0x14029FD20
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140209778 (IoSetOplockPrivateFoExt.c)
 *     IoGetFileObjectFilterContext @ 0x14020B550 (IoGetFileObjectFilterContext.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x140390974 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1405047A0 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSymlinkSetFoExtension @ 0x1406BEC5C (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x14029FE88 (IopVerifierExAllocatePool_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *Pool_0; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  _DWORD *v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != IopRevocationExtension )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
    v7 = *(_QWORD *)(a1 + 208);
    if ( v7 )
      goto LABEL_9;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = (unsigned int)CurrentIrql + 1;
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    Pool_0 = (void *)IopVerifierExAllocatePool_0(v8, 88LL);
    v7 = (__int64)Pool_0;
    if ( Pool_0 )
    {
      memset(Pool_0, 0, 0x58uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v17 = KeGetCurrentPrcb()->SchedulerAssist;
        v17[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v7;
        v7 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v7);
      }
LABEL_9:
      if ( a2 )
        *a2 = v7;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return 3221225626LL;
}
