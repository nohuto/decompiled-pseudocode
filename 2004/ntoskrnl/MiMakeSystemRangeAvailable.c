/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x14033E630
 * Callers:
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlClearBitsEx @ 0x140250FD0 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSystemVaToDynamicBitmap @ 0x14033E878 (MiSystemVaToDynamicBitmap.c)
 *     MiNonPagedPoolToNode @ 0x14033E9B8 (MiNonPagedPoolToNode.c)
 *     MiReleaseSessionVa @ 0x14033F038 (MiReleaseSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v5; // rdi
  _SLIST_HEADER *v8; // rsi
  _SLIST_HEADER *v9; // r12
  ULONG_PTR v10; // rbx
  unsigned __int8 v11; // al
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 Region; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 Alignment; // rax
  bool i; // zf
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  BugCheckParameter4 = (int)a3;
  v5 = BugCheckParameter3 >> 21;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v22 = 0LL;
  if ( (_DWORD)a3 == 1 )
    return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v5);
  if ( (_DWORD)a3 == 5 )
    v8 = &SListHead[11 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 4];
  else
    v8 = (_SLIST_HEADER *)MiSystemVaToDynamicBitmap((unsigned int)a3, BugCheckParameter3, a3, a4);
  v9 = v8;
  v10 = (BugCheckParameter2 - v8[2].Alignment) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    v9 = (_SLIST_HEADER *)&v22;
    Alignment = v8[1].Alignment;
    *((_QWORD *)&v22 + 1) = v8->Region;
    *(_QWORD *)&v22 = Alignment;
  }
  KeAcquireInStackQueuedSpinLock(&v8[4].Alignment, &LockHandle);
  if ( v10 >= v9->Alignment )
    goto LABEL_38;
  if ( v5 > 1 )
  {
    if ( v9->Alignment - v10 >= v5 )
    {
      Region = v9->Region;
      v15 = (__int64 *)(Region + 8 * (v10 >> 6));
      v16 = *v15;
      v17 = (__int64 *)(Region + 8 * ((v10 + v5 - 1) >> 6));
      if ( v15 != v17 )
      {
        for ( i = ((-1LL << v10) & v16) == -1LL << v10; ; i = *v15 == -1 )
        {
          if ( !i )
            goto LABEL_38;
          if ( ++v15 == v17 )
            break;
        }
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1)) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1) )
          goto LABEL_11;
        v11 = 0;
        goto LABEL_10;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10 )
        goto LABEL_11;
    }
LABEL_38:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v5 != 1 )
    goto LABEL_38;
  v11 = _bittest64((const signed __int64 *)v9->Region, v10);
LABEL_10:
  if ( !v11 )
    goto LABEL_38;
LABEL_11:
  RtlClearBitsEx((__int64)v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < v8[3].Alignment )
      v8[3].Alignment = v10;
  }
  else if ( v10 < v8[1].Region )
  {
    v8[1].Region = v10;
  }
  _InterlockedExchangeAdd64(&qword_140C4F748[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140C4DE48 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        i = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( i )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
