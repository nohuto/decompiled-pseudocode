/*
 * XREFs of MiCheckProtoPtePageState @ 0x1402DFAC0
 * Callers:
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x1402F9660 (MiAnyProtosAreMapped.c)
 *     MiIsSubsectionClean @ 0x140529E74 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541FB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rdi
  char v14; // al
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // edx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  _QWORD v36[9]; // [rsp+20h] [rbp-48h] BYREF
  int i; // [rsp+80h] [rbp+18h] BYREF
  int v38; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_BYTE *)a2;
  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v5 = *v4;
          v36[0] = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_21;
          if ( (unsigned int)MiInvalidPteConforms(v5, a2) )
          {
            if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
              v5 &= ~qword_140C4DF80;
            goto LABEL_6;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_21;
        if ( (unsigned int)MiPteInShadowRange(v36)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v17 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v36 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v5 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v5 |= 0x42uLL;
          }
          else
          {
            v5 = v36[0];
          }
        }
        v6 = 2LL;
        v7 = 0xFFFFFA8000000000uLL;
LABEL_6:
        v8 = (v5 >> 12) & 0xFFFFFFFFFLL;
        a2 = 6 * v8;
      }
      while ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v9 = v7 + 48 * v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
      }
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v11 = *v4;
      *v3 = CurrentIrql;
      if ( v11 == v36[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)a2;
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (v11 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v9 + 34) & 7u) < 6 )
      goto LABEL_31;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_31:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(CurrentIrql);
LABEL_21:
    result = 0LL;
    *v3 = 17;
    return result;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v9) || (unsigned int)MiChargeForLockedPage(v9, 1LL) )
    ++*(_WORD *)(v9 + 32);
  v12 = (unsigned __int8)*v3;
  v13 = (_BYTE *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
  v14 = *(_BYTE *)(v9 + 34);
  for ( i = 0; (v14 & 0x20) != 0; v14 = *(_BYTE *)(v9 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v12 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v23 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v12);
    }
    i = 0;
    while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&i);
    MiLockPageInline(v9);
  }
  *(_BYTE *)(v9 + 34) = v14 | 0x20;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (*v13 & 0x20) == 0 )
    MiWriteValidPteVolatile(v13, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
