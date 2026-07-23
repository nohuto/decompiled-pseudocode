/*
 * XREFs of HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaTranslationEntryToIndex @ 0x1403BC0E8 (HalpDmaTranslationEntryToIndex.c)
 *     HalpDmaGetTranslationEntries @ 0x1403BC150 (HalpDmaGetTranslationEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpDmaCommitContiguousMapBuffers(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int64 *v10; // r14
  __int64 *v11; // rdx
  unsigned __int64 *v12; // rsi
  char v13; // r13
  unsigned __int64 *v14; // rdi
  ULONG v15; // r14d
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  bool v20; // zf
  unsigned __int64 OldIrql; // rbx
  __int64 *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  char v27; // [rsp+20h] [rbp-78h]
  ULONG StartingIndex; // [rsp+24h] [rbp-74h]
  __int64 *v29; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v33; // [rsp+A0h] [rbp+8h]

  v4 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 40);
  v29 = 0LL;
  v8 = a4;
  if ( v6 && (*(_QWORD *)(a1 + 56) != v6 || *(_DWORD *)(a1 + 64)) )
  {
    v8 = a4 + 1;
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  if ( !*(_BYTE *)(a1 + 145) )
    v8 = (unsigned int)((((unsigned __int64)a4 << 12) + a3 - 1) >> 16) - (unsigned int)(a3 >> 16) + (unsigned int)v8;
  result = HalpDmaGetTranslationEntries(a1, 0LL, v8);
  v31 = result;
  v10 = (unsigned __int64 *)result;
  if ( result )
  {
    StartingIndex = HalpDmaTranslationEntryToIndex(a1, result, &v29);
    if ( (unsigned int)(((__int64)v10 - v29[2]) / 72) )
    {
      v12 = v10 - 9;
    }
    else
    {
      v11 = *(__int64 **)(a1 + 40);
      if ( v11 == v29 )
      {
        v12 = 0LL;
      }
      else
      {
        if ( v11 )
        {
          do
          {
            v22 = (__int64 *)*v11;
            if ( (__int64 *)*v11 == v29 )
              break;
            v11 = (__int64 *)*v11;
          }
          while ( v22 );
        }
        v12 = (unsigned __int64 *)(v11[2] + 72LL * (unsigned int)(*((_DWORD *)v11 + 2) - 1));
      }
    }
    v13 = *(_BYTE *)(a1 + 144);
    v14 = v10;
    v27 = *(_BYTE *)(a1 + 145);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 120), &LockHandle);
    if ( (_DWORD)v4 )
    {
      v15 = StartingIndex;
      v16 = v13 & 1;
      v30 = v4;
      v17 = a2;
      v18 = 4 * v16;
      do
      {
        if ( v12 )
        {
          if ( *v12 + 4096 != a3 || !v27 && ((a3 ^ *v12) & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            v14 = (unsigned __int64 *)v14[1];
            ++v15;
          }
          v18 = 4 * v16;
        }
        *v14 = a3;
        if ( v17 )
        {
          v19 = v17 | v14[6] & 0xFFF;
          v17 += 4096LL;
        }
        else
        {
          v19 = v14[6];
        }
        v14[6] = v19 & 0xFFFFFFFFFFFFFFF0uLL | v13 & 1 | v18 & 0xFFFFFFFFFFFFFFF7uLL;
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 16), v15, 1u);
        a3 += 4096LL;
        v18 = 4 * v16;
        ++v15;
        v12 = v14;
        v20 = v30-- == 1;
        v14 = (unsigned __int64 *)v14[1];
      }
      while ( !v20 );
      LODWORD(v4) = a4;
      v10 = (unsigned __int64 *)v31;
    }
    if ( v33 && v14 )
    {
      --*(_DWORD *)(a1 + 64);
      memset(v14, 0, 0x48uLL);
    }
    if ( v13 )
      *(_DWORD *)(a1 + 200) += v4;
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return (__int64)v10;
  }
  return result;
}
