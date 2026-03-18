/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x14039C1B8
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rsi
  KIRQL v5; // al
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // rax
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_140C4CAE4);
  v6 = (__int64 *)qword_140C4CAC0;
  v7 = v5;
  while ( 1 )
  {
    if ( v6 == &qword_140C4CAC0 )
      goto LABEL_9;
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
      break;
    v6 = (__int64 *)*v6;
  }
  if ( a2 )
  {
    v8 = *v6;
    v9 = (__int64 *)v6[1];
    if ( *(__int64 **)(*v6 + 8) != v6 || (__int64 *)*v9 != v6 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
LABEL_9:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4CAE4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( a2 )
    {
      if ( v6 == &qword_140C4CAC0 )
        KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
      ExFreePoolWithTag(v3[5], 0);
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4CAE4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
  }
  __writecr8(v7);
  return v6;
}
