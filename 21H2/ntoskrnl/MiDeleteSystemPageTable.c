/*
 * XREFs of MiDeleteSystemPageTable @ 0x140228CD0
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiAddSystemPageTableToList @ 0x14022900C (MiAddSystemPageTableToList.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  char v9; // bl
  int v10; // r13d
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 LeafVa; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // r8d
  char v37; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v41; // eax
  __int64 v42; // [rsp+20h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v44; // [rsp+80h] [rbp+40h]
  int v45; // [rsp+90h] [rbp+50h]
  __int64 v46; // [rsp+98h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = *(_QWORD *)(v3 + 16);
  v42 = v7;
  if ( a3 == 3 && *(_DWORD *)v3 == 1 )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 784;
    v44 = (_QWORD *)v8;
  }
  else
  {
    v44 = 0LL;
    v8 = a2;
  }
  v46 = MI_READ_PTE_LOCK_FREE(v8);
  v9 = v46;
  if ( (v46 & 1) != 0 )
  {
    v10 = 0;
    v45 = 0;
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v46) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 >= 0 )
    {
      v12 = 48 * v11 - 0x220000000000LL;
      v13 = 1LL;
      if ( a3 == 3 && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 184LL) & 7) == 1 )
      {
        v13 = 2LL;
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
          return 0LL;
      }
      if ( a3 <= ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
      {
        v15 = 0LL;
      }
      else
      {
        if ( *(_WORD *)(v12 + 32) != 1
          || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v13
          || RtlCompareMemoryUlong((PVOID)(a2 << 25 >> 16), 0x1000uLL, 0) != 4096 )
        {
          return 0LL;
        }
        v15 = 1LL;
      }
      if ( a3 >= 1 )
      {
        if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 24), a2, ZeroPte, v15) )
          return 0LL;
        v45 = 1;
      }
      MiAddSystemPageTableToList(v3 + 8, v12, v13, v15);
      v7 = v42;
      v10 = v45;
    }
    if ( v44 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(a2);
      v9 = v19;
      v46 = v19;
    }
    if ( (v9 & 1) != 0 && a3 >= 1 && v9 < 0 )
    {
      MiInsertLargeTbFlushEntry(v7, a3, a2);
    }
    else
    {
      MiInsertTbFlushEntry(v7, a2 << 25 >> 16, 1LL, 0LL);
      if ( a3 == 1 )
      {
        LeafVa = MiGetLeafVa(a2);
        MiInsertTbFlushEntry(v7, LeafVa, 512LL, 0LL);
      }
    }
    if ( v10 )
    {
LABEL_23:
      if ( !v44 )
      {
LABEL_24:
        if ( a3 == 3 )
        {
          v18 = MiGetLeafVa(a2);
          MiReplicatePteChange(
            ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        }
        return 0LL;
      }
      v20 = MiSwizzleInvalidPte(768LL, v16);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v21 = 0;
      if ( !(unsigned int)MiPteInShadowRange(v44) )
      {
LABEL_35:
        *v44 = v20;
        if ( v21 )
          MiWritePteShadow(v44, v20);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v41 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v41;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        goto LABEL_24;
      }
      if ( (unsigned int)MiPteHasShadow(v23, v22) )
      {
        v21 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_35;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_35;
      }
      if ( (v20 & 1) != 0 )
        v20 |= 0x8000000000000000uLL;
      goto LABEL_35;
    }
    v26 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v28 = ZeroPte;
      v29 = 0;
      if ( v26 )
      {
        if ( (unsigned int)MiPteHasShadow(v27, ZeroPte) )
        {
          v29 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_44;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_44:
          if ( (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v28;
      if ( v29 )
        MiWritePteShadow(a2, v28);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v30 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v16 = -1LL << (LockHandle.OldIrql + 1);
            v34 = ~(unsigned __int16)v16;
            v35 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
      }
      __writecr8(v30);
      goto LABEL_23;
    }
    v16 = ZeroPte;
    v36 = 0;
    if ( v26 )
    {
      if ( (unsigned int)MiPteHasShadow(v25, ZeroPte) )
      {
        v37 = ++v36;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_65;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_65;
        v37 = 1;
      }
      if ( ((unsigned __int8)v16 & (unsigned __int8)v37) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_65:
    *(_QWORD *)a2 = v16;
    if ( v36 )
      MiWritePteShadow(a2, v16);
    goto LABEL_23;
  }
  return 0LL;
}
