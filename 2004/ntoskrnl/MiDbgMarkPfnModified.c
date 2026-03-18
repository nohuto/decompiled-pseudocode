/*
 * XREFs of MiDbgMarkPfnModified @ 0x14054081C
 * Callers:
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  BOOL v4; // eax
  int v5; // r11d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  signed __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  char v19; // di
  __int64 v20; // r14
  unsigned __int8 v21; // r10
  __int64 v22; // r14
  __int64 v23; // rbp
  int v24; // eax
  int SystemRegionType; // eax
  char v26; // di
  int PagingFileOffset; // eax
  __int64 v28; // r8
  __int64 v29; // rdi
  signed __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // edx
  unsigned __int64 v36; // [rsp+58h] [rbp+10h] BYREF

  v36 = a2;
  v3 = a2;
  v4 = MiPteInShadowRange((unsigned __int64)&v36);
  v5 = 1;
  if ( v4
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v36 >> 3) & 0x1FF));
      if ( (v7 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v7 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
    else
    {
      v3 = v36;
    }
  }
  v8 = (v3 >> 12) & 0xFFFFFFFFFLL;
  if ( (MiFlags & 0x8000000) == 0 )
    return 1LL;
  if ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    return 1LL;
  v9 = 48 * v8 - 0x58000000000LL;
  if ( (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
    return 1LL;
  v10 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v19 = *(_BYTE *)(v9 + 34);
  v20 = *(_QWORD *)(v9 + 16);
  if ( (v20 & 0x400) == 0 )
  {
    if ( (v19 & 8) == 0 )
    {
      PagingFileOffset = MiGetPagingFileOffset(v9 + 16);
      v5 = 1;
      if ( PagingFileOffset )
      {
        v29 = 0LL;
        do
        {
          v30 = _InterlockedCompareExchange64(&MiState[v29 + 1019], v9, 0LL);
          if ( !v30 )
            break;
          if ( (v30 | 1) == (v9 | 1) )
            goto LABEL_58;
          v29 = (unsigned int)(v29 + 1);
        }
        while ( (unsigned int)v29 < 0x20 );
        if ( (_DWORD)v29 == 32 )
          goto LABEL_62;
        v31 = 5LL;
        if ( CurrentIrql != 17 )
          v31 = 1LL;
        MiAddLockedPageCharge(v9, v31, v28);
        v5 = 1;
        _InterlockedAdd64(&MiState[v29 + 1019], 1uLL);
        _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
        goto LABEL_58;
      }
    }
    v26 = v19 | 0x10;
    goto LABEL_60;
  }
  if ( (v19 & 0x10) != 0 )
  {
LABEL_58:
    v10 = v5;
LABEL_62:
    v21 = 2;
    goto LABEL_63;
  }
  if ( !MiIsPfnFileOnly(v9) )
  {
    if ( qword_140C4DD40 && (v20 & 0x10) == 0 )
      v20 &= ~qword_140C4DD40;
    v22 = v20 >> 16;
    v23 = *(_QWORD *)v22;
    v24 = *(_DWORD *)(*(_QWORD *)v22 + 56LL);
    if ( (v24 & 0x20) != 0 )
    {
      if ( (v24 & 0x40000) == 0 && *(_QWORD *)(*(_QWORD *)(v23 + 96) + 32LL) )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v23 + 72)) )
        {
          LOBYTE(v5) = 1;
          goto LABEL_62;
        }
        *(_DWORD *)(v23 + 56) |= 0x40000u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
        v19 = *(_BYTE *)(v9 + 34);
        v5 = 1;
      }
      if ( (*(_BYTE *)(v22 + 32) & 0x3Eu) < 8 )
      {
        SystemRegionType = MiGetSystemRegionType(a1);
        v5 = 1;
        if ( SystemRegionType == 1 )
          byte_140C4CB88 = 1;
      }
      byte_140C4E681 = v5;
    }
    v26 = v19 | 0x10;
LABEL_60:
    *(_BYTE *)(v9 + 34) = v26;
    goto LABEL_58;
  }
LABEL_63:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= v21 )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
          v17 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v33);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v10;
}
