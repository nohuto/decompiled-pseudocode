/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x14021B214
 * Callers:
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiReturnExcessPoolCommit @ 0x1403165E4 (MiReturnExcessPoolCommit.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B63A4 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnPoolCharges @ 0x140273E90 (MiReturnPoolCharges.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 *v3; // r13
  __int64 v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // rcx
  _SLIST_HEADER *v10; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  unsigned __int64 *v21; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v22; // [rsp+28h] [rbp-41h]
  unsigned __int64 v23; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  __int128 v26; // [rsp+60h] [rbp-9h]
  __int128 v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+D0h] [rbp+67h]
  int v29; // [rsp+D8h] [rbp+6Fh]
  unsigned int v30; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v31; // [rsp+E8h] [rbp+7Fh]

  v2 = a1;
  v31 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v30 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 8);
  v29 = a2 & 1;
  v28 = a2 & 2;
  do
  {
    v23 = *(_QWORD *)v2;
    v22 = v3;
    v21 = v3;
    v6 = (unsigned __int8)MiLockPageInline(v2);
    if ( !v28 )
    {
      v9 = *(_QWORD *)(v2 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v2 + 32) = 1;
      *(_QWORD *)(v2 + 24) = v9 | 1;
    }
    if ( !v29 && (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    {
      ++v4;
      v3 = (unsigned __int64 *)v2;
      v7 = v2;
      *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 5;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v2 + 32) = 0;
      if ( v21 )
        v3 = v22;
      *(_QWORD *)(v2 + 8) = -8LL;
      *(_QWORD *)v2 = v31;
      v31 = v2;
    }
    else
    {
      *(_WORD *)(v2 + 32) = 0;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(v2 + 0x58000000000LL) / 48);
      v7 = v31;
      *(_QWORD *)&v25 = v25 + 1;
      ++*((_QWORD *)&v26 + 1);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    v2 = v23;
  }
  while ( v23 );
  if ( v4 )
  {
    v10 = &SListHead[11 * v30];
    KeAcquireInStackQueuedSpinLock(&v10[9].Alignment, &LockHandle);
    *v3 = v10[9].Region;
    v10[8].Region += v4;
    v10[9].Region = v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v16 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return MiReturnPoolCharges(&v25, (unsigned int)(2 * v29));
}
