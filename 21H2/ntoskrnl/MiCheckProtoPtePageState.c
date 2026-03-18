/*
 * XREFs of MiCheckProtoPtePageState @ 0x140337B00
 * Callers:
 *     MiAnyProtosAreMapped @ 0x14023C8A4 (MiAnyProtosAreMapped.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiIsSubsectionClean @ 0x14058B40C (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14028DC40 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140337F0C (MiIsPfnCommitNotCharged.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  __int64 *v4; // r14
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 SchedulerAssist; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  char v20; // si
  ULONG_PTR *v21; // rbx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  unsigned __int64 v24; // rsi
  _BYTE *v25; // rbx
  char i; // al
  __int64 result; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  int v43; // [rsp+60h] [rbp+8h] BYREF
  int v44; // [rsp+70h] [rbp+18h] BYREF

  v4 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 2 )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    v6 = 0xFFFFDE0000000000uLL;
    while ( 2 )
    {
      v7 = 0x40000000000000LL;
      SchedulerAssist = 2LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = *v4;
          if ( (*v4 & 1) != 0 )
            break;
          if ( (*v4 & 0xC00) != 0x800 )
            goto LABEL_33;
          if ( MiInvalidPteConforms(*v4) )
          {
            v10 = v9;
            if ( qword_140C50780 && (v9 & 0x10) == 0 )
              v10 = v9 & ~qword_140C50780;
            goto LABEL_7;
          }
        }
        if ( (v9 & 0x200) != 0 )
          goto LABEL_33;
        v10 = *v4;
LABEL_7:
        v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C50840 )
        {
          v12 = 6 * v11;
          if ( (v7 & *(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL)) != 0 )
            break;
        }
      }
      v13 = v6 + 48 * v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(SchedulerAssist);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
        v7 = (unsigned int)v12 | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v7;
      }
      v43 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v43, v12, v7, SchedulerAssist);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        v6 = 0xFFFFDE0000000000uLL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v15 = *v4;
      *a2 = CurrentIrql;
      if ( v15 != v9 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v30 = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v32 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v5 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v6 = 0xFFFFDE0000000000uLL;
            }
          }
        }
        __writecr8(CurrentIrql);
        continue;
      }
      break;
    }
    if ( (v15 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v13 + 34) & 7u) >= 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
        }
        __writecr8(CurrentIrql);
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
LABEL_35:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v5);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(CurrentIrql);
LABEL_33:
      result = 0LL;
      *a2 = 17;
      return result;
    }
    break;
  }
  if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    goto LABEL_35;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v13, v12, v7, SchedulerAssist) )
    goto LABEL_23;
  v19 = *(_QWORD *)(v13 + 40);
  if ( v19 < 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 || (unsigned int)MiIsPfnCommitNotCharged(v13, v16) )
  {
    v20 = 1;
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
    if ( (unsigned int)MiChargeCommit((__int64)v21, 1uLL, 4u) )
      goto LABEL_18;
  }
  else
  {
    v20 = 0;
    v21 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
LABEL_18:
    if ( v21 == &MiSystemPartition )
    {
      v16 = (__int64)KeGetCurrentPrcb();
      v22 = *(_DWORD *)(v16 + 34460);
      if ( v22 )
      {
        v17 = 0xFFFFFFFFLL;
        do
        {
          if ( v22 == -1 )
            break;
          v23 = v22;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 34460), v22 - 1, v22);
          if ( v23 == v22 )
            goto LABEL_23;
        }
        while ( v22 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v21, 1uLL, 0xFFFFFFFFLL) )
    {
      if ( v20 )
        MiReturnCommit((__int64)v21, 1LL);
      goto LABEL_24;
    }
LABEL_23:
    ++*(_WORD *)(v13 + 32);
  }
LABEL_24:
  v24 = *a2;
  v25 = (_BYTE *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(v13 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v13 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v24 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v18 = (__int64)v38->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v32 = ((unsigned int)v16 & *(_DWORD *)(v18 + 20)) == 0;
            v17 = (unsigned int)v16 & *(_DWORD *)(v18 + 20);
            *(_DWORD *)(v18 + 20) = v17;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v24);
    }
    v44 = 0;
    while ( (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&v44, v16, v17, v18);
    MiLockPageInline(v13);
  }
  *(_BYTE *)(v13 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) == 0 && (*v25 & 0x20) == 0 )
    MiWriteValidPteVolatile(v25, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
