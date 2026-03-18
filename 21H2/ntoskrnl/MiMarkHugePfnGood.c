/*
 * XREFs of MiMarkHugePfnGood @ 0x1405882D0
 * Callers:
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x1402166E0 (MiIsPageInHugePfn.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiHugePfnPartition @ 0x14058727C (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v3; // rdi
  _QWORD *v4; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r13
  struct _KTHREAD *v10; // rdi
  unsigned int SessionId; // esi
  __int64 p_Process; // rbx
  unsigned int v13; // ecx
  int v14; // r8d
  bool v15; // zf
  ULONG_PTR v16; // rbp
  struct _KTHREAD *v17; // r14
  unsigned int v18; // esi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // edx
  int v22; // r8d
  struct _KTHREAD *v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // ecx
  int v26; // r8d
  __int64 v27; // rcx
  unsigned __int64 *v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  signed __int64 *v31; // rcx
  ULONG_PTR v32; // r12
  signed __int64 *v33; // rax
  signed __int64 *v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rcx
  signed __int64 *v37; // rcx
  unsigned __int8 CurrentIrql; // al
  KIRQL v39; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  struct _KTHREAD *v43; // r13
  unsigned int v44; // esi
  unsigned int v45; // ecx
  __int64 v46; // rdi
  unsigned int v47; // r8d
  int v48; // r8d
  struct _KTHREAD *v49; // rdi
  __int64 v50; // rbx
  unsigned int v51; // ecx
  int v52; // r8d
  __int64 v53; // [rsp+30h] [rbp-58h]
  volatile LONG *SpinLock; // [rsp+38h] [rbp-50h]
  KIRQL v55; // [rsp+98h] [rbp+10h]
  unsigned int v56; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *v57; // [rsp+A8h] [rbp+20h]

  if ( KeGetCurrentIrql() > 1u )
    return 3221225485LL;
  v3 = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  v56 = 0;
  v4 = MiSearchNumaNodeTable(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = *((unsigned int *)v4 + 2);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  v8 = MiHugePfnPartition((_QWORD *)(qword_140C52968 + 8 * v3));
  v9 = v8;
  if ( !v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    v10 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C51F08 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    _disable();
    p_Process = (__int64)&v10[1].Process;
    v13 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C51F08 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v13;
      p_Process += 96LL;
      if ( v13 >= 6 )
        goto LABEL_15;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_15:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_140C51F08, SessionId, 0LL);
      _enable();
      goto LABEL_23;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v14 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v10->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, (__int64)&qword_140C51F08, v14);
LABEL_23:
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221226548LL;
  }
  --CurrentThread->SpecialApcDisable;
  v16 = v8 + 192;
  ExAcquirePushLockExclusiveEx(v8 + 192, 0LL);
  if ( (*(_DWORD *)(v9 + 4) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v16);
    v17 = KeGetCurrentThread();
    v18 = -1;
    if ( v16 - qword_140C50630 >= 0x8000000000LL )
      v19 = -1;
    else
      v19 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
    _disable();
    v20 = (__int64)&v17[1].Process;
    v21 = 0;
    while ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) != (v16 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v20 + 18)
         || (*(_DWORD *)v20 & 1) != 0
         || *(_DWORD *)(v20 + 8) != v19 )
    {
      ++v21;
      v20 += 96LL;
      if ( v21 >= 6 )
        goto LABEL_39;
    }
    *(_BYTE *)(v20 + 18) = 0;
    if ( !v20 )
    {
LABEL_39:
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, v19, 0LL);
      _enable();
      goto LABEL_47;
    }
    if ( *(__int64 *)v20 < 0 )
    {
      *(_BYTE *)v20 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v20);
      _disable();
    }
    v22 = *(_DWORD *)(v20 + 88);
    *(_DWORD *)(v20 + 88) = 0;
    *(_BYTE *)(v20 + 17) = 0;
    *(_QWORD *)v20 = 0LL;
    v17->AbEntrySummary |= 1 << *(_BYTE *)(v20 + 16);
    _enable();
    if ( v22 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v17, v16, v22);
LABEL_47:
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    v23 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C51F08 - qword_140C50630 < 0x8000000000LL )
      v18 = MmGetSessionIdEx((__int64)v23->ApcState.Process);
    _disable();
    v24 = (__int64)&v23[1].Process;
    v25 = 0;
    while ( (*(_QWORD *)v24 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C51F08 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v24 + 18)
         || (*(_DWORD *)v24 & 1) != 0
         || *(_DWORD *)(v24 + 8) != v18 )
    {
      ++v25;
      v24 += 96LL;
      if ( v25 >= 6 )
        goto LABEL_60;
    }
    *(_BYTE *)(v24 + 18) = 0;
    if ( !v24 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&qword_140C51F08, v18, 0LL);
      _enable();
      goto LABEL_68;
    }
    if ( *(__int64 *)v24 < 0 )
    {
      *(_BYTE *)v24 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v24);
      _disable();
    }
    v26 = *(_DWORD *)(v24 + 88);
    *(_DWORD *)(v24 + 88) = 0;
    *(_BYTE *)(v24 + 17) = 0;
    *(_QWORD *)v24 = 0LL;
    v23->AbEntrySummary |= 1 << *(_BYTE *)(v24 + 16);
    _enable();
    if ( v26 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v23, (__int64)&qword_140C51F08, v26);
LABEL_68:
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    return 3221226548LL;
  }
  v27 = *(_QWORD *)(v9 + 16) + 24512 * v7;
  v28 = (unsigned __int64 *)(v27 + 22640);
  SpinLock = (volatile LONG *)(v27 + 22848);
  v57 = (unsigned __int64 *)(v27 + 22640);
  v55 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v27 + 22848));
  if ( MiIsPageInHugePfn(BugCheckParameter2) )
  {
    v29 = qword_140C52968;
    v53 = qword_140C52968;
    if ( (*(_BYTE *)(qword_140C52968 + 8 * v3 + 6) & 1) != 0 )
    {
      v6 = *v28;
      while ( v6 )
      {
        v30 = *(_QWORD *)(v6 + 24) & 0x3FFFFFLL;
        if ( v3 <= v30 )
        {
          if ( v3 >= v30 )
            break;
          v6 = *(_QWORD *)v6;
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
      v31 = *(signed __int64 **)(v6 + 32);
      v32 = BugCheckParameter2 & 0x3FFFF;
      if ( _bittest64(v31, v32) )
      {
        _bittestandreset64(v31, v32);
        v56 = 274;
        v33 = v31;
        v34 = v31 + 4095;
        while ( v33 != v34 )
        {
          if ( *v33 )
            goto LABEL_95;
          ++v33;
        }
        if ( !*v33 )
        {
          if ( (*(_DWORD *)(v29 + 8 * v3) & 0x1C00000) == 0x1000000LL )
          {
            MiUnlinkHugeRange(v9, v3, 0LL, 0x40000LL);
            v35 = 1;
          }
          else
          {
            v35 = 0;
          }
          RtlAvlRemoveNode(v57, (unsigned __int64 *)v6);
          v36 = *(_QWORD *)(v53 + 8 * v3) & 0xFFFEFFFFFFFFFFFFuLL;
          *(_QWORD *)(v53 + 8 * v3) = v36;
          if ( v35 || (v36 & 0x1C00000) != 0xC00000 && (v36 & 0x1C00000) != 0x1400000 )
            MiInsertHugeRangeInList(0LL, v3, 5);
          goto LABEL_98;
        }
LABEL_95:
        v37 = (signed __int64 *)(*(_QWORD *)(v6 + 32) + 0x8000LL);
        if ( _bittest64(v37, v32) )
          _bittestandreset64(v37, v32);
      }
      v6 = 0LL;
    }
  }
  else
  {
    v56 = -1073740748;
  }
LABEL_98:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v39 = v55;
    if ( v55 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << (v55 + 1));
      v15 = (v42 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v42;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v39 = v55;
  }
  __writecr8(v39);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  v43 = KeGetCurrentThread();
  v44 = -1;
  if ( v16 - qword_140C50630 >= 0x8000000000LL )
    v45 = -1;
  else
    v45 = MmGetSessionIdEx((__int64)v43->ApcState.Process);
  _disable();
  v46 = (__int64)&v43[1].Process;
  v47 = 0;
  while ( (*(_QWORD *)v46 & 0x7FFFFFFFFFFFFFFCLL) != (v16 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v46 + 18)
       || (*(_DWORD *)v46 & 1) != 0
       || *(_DWORD *)(v46 + 8) != v45 )
  {
    ++v47;
    v46 += 96LL;
    if ( v47 >= 6 )
      goto LABEL_117;
  }
  *(_BYTE *)(v46 + 18) = 0;
  if ( !v46 )
  {
LABEL_117:
    if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v43, v16, v45, 0LL);
    _enable();
    goto LABEL_125;
  }
  if ( *(__int64 *)v46 < 0 )
  {
    *(_BYTE *)v46 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v46);
    _disable();
  }
  v48 = *(_DWORD *)(v46 + 88);
  *(_DWORD *)(v46 + 88) = 0;
  *(_BYTE *)(v46 + 17) = 0;
  *(_QWORD *)v46 = 0LL;
  v43->AbEntrySummary |= 1 << *(_BYTE *)(v46 + 16);
  _enable();
  if ( v48 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v43, v16, v48);
LABEL_125:
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51F08);
  v49 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C51F08 - qword_140C50630 < 0x8000000000LL )
    v44 = MmGetSessionIdEx((__int64)v49->ApcState.Process);
  _disable();
  v50 = (__int64)&v49[1].Process;
  v51 = 0;
  while ( (*(_QWORD *)v50 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C51F08 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v50 + 18)
       || (*(_DWORD *)v50 & 1) != 0
       || *(_DWORD *)(v50 + 8) != v44 )
  {
    ++v51;
    v50 += 96LL;
    if ( v51 >= 6 )
      goto LABEL_138;
  }
  *(_BYTE *)(v50 + 18) = 0;
  if ( !v50 )
  {
LABEL_138:
    if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v49, (ULONG_PTR)&qword_140C51F08, v44, 0LL);
    _enable();
    goto LABEL_146;
  }
  if ( *(__int64 *)v50 < 0 )
  {
    *(_BYTE *)v50 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v50);
    _disable();
  }
  v52 = *(_DWORD *)(v50 + 88);
  *(_DWORD *)(v50 + 88) = 0;
  *(_BYTE *)(v50 + 17) = 0;
  *(_QWORD *)v50 = 0LL;
  v49->AbEntrySummary |= 1 << *(_BYTE *)(v50 + 16);
  _enable();
  if ( v52 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v49, (__int64)&qword_140C51F08, v52);
LABEL_146:
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v6 )
  {
    ExFreePoolWithTag(*(PVOID *)(v6 + 32), 0);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return v56;
}
