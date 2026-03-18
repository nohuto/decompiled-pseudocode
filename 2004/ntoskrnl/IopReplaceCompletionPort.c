/*
 * XREFs of IopReplaceCompletionPort @ 0x14038A76C
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopReplaceCompletionPort(__int64 a1, void *a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r14
  unsigned int v7; // esi
  KIRQL v8; // al
  PVOID *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = -1073741823;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = *(PVOID **)(a1 + 176);
  v10 = v8;
  if ( v9 && *(_QWORD *)(a1 + 192) == a1 + 192 )
  {
    ObfDereferenceObjectWithTag(*v9, 0x746C6644u);
    *(_DWORD *)(a1 + 80) &= 0xF1FFFFFF;
    if ( a2 )
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      **(_QWORD **)(a1 + 176) = a2;
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL) = a3;
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 176), 0);
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 80) |= 0x400u;
    }
    v7 = 0;
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v7;
}
