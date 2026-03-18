/*
 * XREFs of MiCheckProtoPtePageState @ 0x1402855A0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiAnyProtosAreMapped @ 0x1402D0104 (MiAnyProtosAreMapped.c)
 *     MiIsSubsectionClean @ 0x140524134 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C254 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rdi
  char v16; // al
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
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
          if ( MiInvalidPteConforms(v5) )
          {
            if ( qword_140C4DE80 && (v5 & 0x10) == 0 )
              v5 &= ~qword_140C4DE80;
            goto LABEL_6;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_21;
        if ( (unsigned int)MiPteInShadowRange(v36, a2)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v36 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v5 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
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
        v6 = 2LL;
        v7 = 0xFFFFFA8000000000uLL;
      }
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v38, a2, v6, v7);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      *v3 = CurrentIrql;
      if ( *v4 == v36[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)a2;
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
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
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v27);
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
          v25 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v25 )
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
  v14 = (unsigned __int8)*v3;
  v15 = (_BYTE *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
  v16 = *(_BYTE *)(v9 + 34);
  for ( i = 0; (v16 & 0x20) != 0; v16 = *(_BYTE *)(v9 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v14 != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v13 = (__int64)v31->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v25 = ((unsigned int)v11 & *(_DWORD *)(v13 + 20)) == 0;
            v12 = (unsigned int)v11 & *(_DWORD *)(v13 + 20);
            *(_DWORD *)(v13 + 20) = v12;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v14);
    }
    i = 0;
    while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&i, v11, v12, v13);
    MiLockPageInline(v9, v11, v12);
  }
  *(_BYTE *)(v9 + 34) = v16 | 0x20;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (*v15 & 0x20) == 0 )
    MiWriteValidPteVolatile(v15, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
