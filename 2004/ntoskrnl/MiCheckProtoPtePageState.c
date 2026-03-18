/*
 * XREFs of MiCheckProtoPtePageState @ 0x14022C550
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiAnyProtosAreMapped @ 0x1403208C0 (MiAnyProtosAreMapped.c)
 *     MiIsSubsectionClean @ 0x140524784 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rdi
  char v15; // al
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  _QWORD v36[9]; // [rsp+20h] [rbp-48h] BYREF
  int i; // [rsp+80h] [rbp+18h] BYREF
  int v38; // [rsp+88h] [rbp+20h] BYREF

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
          if ( MiInvalidPteConforms(v5) )
          {
            if ( qword_140C4DD40 && (v5 & 0x10) == 0 )
              v5 &= ~qword_140C4DD40;
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
            v18 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v36 >> 3) & 0x1FF));
            if ( (v18 & 0x20) != 0 )
              v5 |= 0x20uLL;
            if ( (v18 & 0x42) != 0 )
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
        v9 = 6 * v8;
      }
      while ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v10 = v7 + 48 * v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v9;
        v6 = 2LL;
        v7 = 0xFFFFFA8000000000uLL;
      }
      v38 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v38, v9);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
        v6 = 2LL;
        v7 = 0xFFFFFA8000000000uLL;
      }
      *a2 = CurrentIrql;
      if ( *v4 == v36[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*v4 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v10 + 34) & 7u) < 6 )
      goto LABEL_31;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_31:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          v24 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(CurrentIrql);
LABEL_21:
    result = 0LL;
    *a2 = 17;
    return result;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v10, v9, v6, v7) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v10 + 32);
  v13 = *a2;
  v14 = (_BYTE *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
  v15 = *(_BYTE *)(v10 + 34);
  for ( i = 0; (v15 & 0x20) != 0; v15 = *(_BYTE *)(v10 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v13 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v24 = ((unsigned int)v12 & v31[5]) == 0;
            v31[5] &= v12;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(v13);
    }
    i = 0;
    while ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&i, v12);
    MiLockPageInline(v10);
  }
  *(_BYTE *)(v10 + 34) = v15 | 0x20;
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 && (*v14 & 0x20) == 0 )
    MiWriteValidPteVolatile(v14, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v10;
}
