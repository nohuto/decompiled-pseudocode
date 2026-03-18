/*
 * XREFs of MiCheckProtoPtePageState @ 0x1402C9A90
 * Callers:
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x140315148 (MiAnyProtosAreMapped.c)
 *     MiIsSubsectionClean @ 0x140528154 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140540274 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v11; // rsi
  volatile signed __int64 *v12; // rdi
  char v13; // al
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // edx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD v35[9]; // [rsp+20h] [rbp-48h] BYREF
  int i; // [rsp+80h] [rbp+18h] BYREF
  int v37; // [rsp+88h] [rbp+20h] BYREF

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
          v35[0] = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_21;
          if ( (unsigned int)MiInvalidPteConforms(v5, a2) )
          {
            if ( qword_140C4DDC0 && (v5 & 0x10) == 0 )
              v5 &= ~qword_140C4DDC0;
            goto LABEL_6;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_21;
        if ( MiPteInShadowRange((unsigned __int64)v35)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v35 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              v5 |= 0x20uLL;
            if ( (v16 & 0x42) != 0 )
              v5 |= 0x42uLL;
          }
          else
          {
            v5 = v35[0];
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
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      *v3 = CurrentIrql;
      if ( *v4 == v35[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            v20 = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)a2;
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*v4 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v9 + 34) & 7u) < 6 )
      goto LABEL_31;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
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
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
LABEL_21:
    result = 0LL;
    *v3 = 17;
    return result;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v9) || (unsigned int)MiChargeForLockedPage(v9, 1) )
    ++*(_WORD *)(v9 + 32);
  v11 = (unsigned __int8)*v3;
  v12 = (volatile signed __int64 *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
  v13 = *(_BYTE *)(v9 + 34);
  for ( i = 0; (v13 & 0x20) != 0; v13 = *(_BYTE *)(v9 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v11 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v22 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v11);
    }
    i = 0;
    while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&i);
    MiLockPageInline(v9);
  }
  *(_BYTE *)(v9 + 34) = v13 | 0x20;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v12 & 0x20) == 0 )
    MiWriteValidPteVolatile(v12, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
