/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x1409D9C64
 * Callers:
 *     ViFaultsAddAllApps @ 0x1409D9B0C (ViFaultsAddAllApps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x14064FE60 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     ViFaultsIsAppTarget @ 0x1409DA1B4 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  size_t v2; // rdi
  unsigned int v4; // ebp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  unsigned __int64 v7; // rbx
  UNICODE_STRING **v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = 2 * a2;
  v4 = 0;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * a2 + 34, 0x41466656u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(&PoolWithTag[2], Src, v2);
    *(unsigned __int16 *)((char *)&v6[2].Length + v2) = 0;
    RtlInitUnicodeString(v6 + 1, &v6[2].Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v7 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = (UNICODE_STRING **)qword_140C1CB28;
      if ( *(PVOID **)qword_140C1CB28 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v8;
      *v8 = v6;
      qword_140C1CB28 = (__int64)v6;
    }
    KxReleaseSpinLock(&ViFaultInjectionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
