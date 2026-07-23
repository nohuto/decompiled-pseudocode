/*
 * XREFs of MmManageFaultRange @ 0x14039DC58
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x14039DC0C (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v8; // r12d
  unsigned int v9; // edx
  volatile signed __int64 *v10; // rcx
  volatile signed __int64 *v11; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 *v15; // r14
  KIRQL v16; // al
  unsigned __int64 *v17; // rbx
  unsigned __int64 v18; // r15
  bool v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+40h] [rbp-48h]
  ULONG_PTR v29; // [rsp+50h] [rbp-38h]

  v4 = BugCheckParameter3 + BugCheckParameter4 - 1;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 0;
    v10 = (volatile signed __int64 *)&unk_140C4C960;
    while ( 1 )
    {
      v11 = v10 - 3;
      if ( !*v10 && !_InterlockedCompareExchange64(v10, BugCheckParameter3, 0LL) )
        break;
      ++v9;
      v10 += 5;
      if ( v9 >= 2 )
        goto LABEL_5;
    }
    *((_QWORD *)v11 + 4) = v4;
LABEL_5:
    if ( v9 == 2 )
    {
      result = (__int64)MiAllocatePool(64, 0x28uLL, 0x7641694Du);
      v11 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v4;
    }
  }
  else
  {
    *((_QWORD *)&v28 + 1) = BugCheckParameter3;
    v11 = (volatile signed __int64 *)&v27;
    v29 = BugCheckParameter3 + BugCheckParameter4 - 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x5230uLL, (ULONG_PTR)CurrentThread->ApcState.Process, BugCheckParameter3, BugCheckParameter4);
    v15 = (unsigned __int64 *)(Process[1].AffinityPadding[5] + 1008);
  }
  else
  {
    v15 = (unsigned __int64 *)&unk_140C4C940;
  }
  v16 = ExAcquireSpinLockExclusive(&dword_140C4C938);
  v17 = (unsigned __int64 *)*v15;
  v18 = v16;
  if ( !v8 )
  {
    while ( v17 )
    {
      if ( *((_QWORD *)v11 + 3) > v17[4] )
      {
        v17 = (unsigned __int64 *)v17[1];
      }
      else
      {
        if ( *((_QWORD *)v11 + 4) >= v17[3] )
          break;
        v17 = (unsigned __int64 *)*v17;
      }
    }
    if ( v17[3] != BugCheckParameter3 || v17[4] != v4 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v17, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(v15, v17);
    goto LABEL_18;
  }
  v19 = 0;
  if ( !v17 )
    goto LABEL_17;
  while ( *((_QWORD *)v11 + 3) <= v17[4] && *((_QWORD *)v11 + 4) < v17[3] )
  {
    v20 = *v17;
    if ( !*v17 )
      goto LABEL_17;
LABEL_22:
    v17 = (unsigned __int64 *)v20;
  }
  v20 = v17[1];
  if ( v20 )
    goto LABEL_22;
  v19 = 1;
LABEL_17:
  RtlAvlInsertNodeEx(v15, (unsigned __int64)v17, v19, v11);
  v17 = 0LL;
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C938);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  if ( v17 )
  {
    v21 = 0LL;
    while ( v17 != (unsigned __int64 *)((char *)&unk_140C4C948 + 40 * v21) )
    {
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= 2 )
        goto LABEL_26;
    }
    v17 = 0LL;
LABEL_26:
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  return 1LL;
}
