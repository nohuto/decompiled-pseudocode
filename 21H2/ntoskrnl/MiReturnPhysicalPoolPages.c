/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140296934
 * Callers:
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiReturnExcessPoolCommit @ 0x14030B894 (MiReturnExcessPoolCommit.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B6234 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnPoolCharges @ 0x140296DB0 (MiReturnPoolCharges.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 *v3; // r13
  __int64 v4; // r12
  __int64 v6; // r8
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // rcx
  union _SLIST_HEADER *v11; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int64 *v22; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-41h]
  unsigned __int64 v24; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v26; // [rsp+50h] [rbp-19h] BYREF
  __int128 v27; // [rsp+60h] [rbp-9h]
  __int128 v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+67h]
  int v30; // [rsp+D8h] [rbp+6Fh]
  unsigned int v31; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v32; // [rsp+E8h] [rbp+7Fh]

  v2 = a1;
  v32 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v31 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 8);
  v30 = a2 & 1;
  v29 = a2 & 2;
  do
  {
    v24 = *(_QWORD *)v2;
    v23 = v3;
    v22 = v3;
    v7 = (unsigned __int8)MiLockPageInline(
                            v2,
                            (unsigned __int128)((__int64)(v2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                            v6);
    if ( !v29 )
    {
      v10 = *(_QWORD *)(v2 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v2 + 32) = 1;
      *(_QWORD *)(v2 + 24) = v10 | 1;
    }
    if ( !v30 && (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    {
      ++v4;
      v3 = (unsigned __int64 *)v2;
      v8 = v2;
      *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 5;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v2 + 32) = 0;
      if ( v22 )
        v3 = v23;
      *(_QWORD *)(v2 + 8) = -8LL;
      *(_QWORD *)v2 = v32;
      v32 = v2;
    }
    else
    {
      *(_WORD *)(v2 + 32) = 0;
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(v2 + 0x58000000000LL) / 48, 2);
      v8 = v32;
      *(_QWORD *)&v26 = v26 + 1;
      ++*((_QWORD *)&v27 + 1);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          v6 = (unsigned int)v16 & SchedulerAssist[5];
          SchedulerAssist[5] = v6;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    v2 = v24;
  }
  while ( v24 );
  if ( v4 )
  {
    v11 = &SListHead[11 * v31];
    KeAcquireInStackQueuedSpinLock(&v11[9].Alignment, &LockHandle);
    *v3 = v11[9].Region;
    v11[8].Region += v4;
    v11[9].Region = v8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return MiReturnPoolCharges(&v26, (unsigned int)(2 * v30));
}
