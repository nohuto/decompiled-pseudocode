/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140301A34
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402CB384 (MiReturnExcessPoolCommit.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B4BB4 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnPoolCharges @ 0x140262F90 (MiReturnPoolCharges.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 *v3; // r13
  __int64 v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _SLIST_HEADER *v9; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int64 *v20; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-41h]
  unsigned __int64 v22; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v24; // [rsp+50h] [rbp-19h] BYREF
  __int128 v25; // [rsp+60h] [rbp-9h]
  __int128 v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+D0h] [rbp+67h]
  int v28; // [rsp+D8h] [rbp+6Fh]
  unsigned int v29; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v30; // [rsp+E8h] [rbp+7Fh]

  v2 = a1;
  v30 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v29 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 2);
  v28 = a2 & 1;
  v27 = a2 & 2;
  do
  {
    v22 = *(_QWORD *)v2;
    v21 = v3;
    v20 = v3;
    v6 = (unsigned __int8)MiLockPageInline(v2);
    if ( !v27 )
    {
      v8 = *(_QWORD *)(v2 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v2 + 32) = 1;
      *(_QWORD *)(v2 + 24) = v8 | 1;
    }
    if ( !v28 && (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    {
      ++v4;
      v3 = (unsigned __int64 *)v2;
      v7 = v2;
      *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 5;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v2 + 32) = 0;
      if ( v20 )
        v3 = v21;
      *(_QWORD *)(v2 + 8) = -8LL;
      *(_QWORD *)v2 = v30;
      v30 = v2;
    }
    else
    {
      *(_WORD *)(v2 + 32) = 0;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(v2 + 0x58000000000LL) / 48, 2);
      v7 = v30;
      *(_QWORD *)&v24 = v24 + 1;
      ++*((_QWORD *)&v25 + 1);
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
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    v2 = v22;
  }
  while ( v22 );
  if ( v4 )
  {
    v9 = &SListHead[11 * v29];
    KeAcquireInStackQueuedSpinLock(&v9[9].Alignment, &LockHandle);
    *v3 = v9[9].Region;
    v9[8].Region += v4;
    v9[9].Region = v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(OldIrql);
  }
  MiReturnPoolCharges((unsigned __int64 *)&v24, 2 * v28);
}
