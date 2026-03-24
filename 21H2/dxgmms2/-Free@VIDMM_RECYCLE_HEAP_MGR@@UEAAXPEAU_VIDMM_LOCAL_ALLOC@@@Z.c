/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005F68 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C00159B8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00607B0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0077220 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0077F2C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0077FD4 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007E0D8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F750 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C17D8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  VIDMM_RECYCLE_BLOCK *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  DXGFASTMUTEX *v26; // rbx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  DXGFASTMUTEX *v31; // [rsp+20h] [rbp-18h] BYREF
  char v32; // [rsp+28h] [rbp-10h]

  v32 = 0;
  v31 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-1328LL, a2, a3);
    *(_QWORD *)(v5 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v5);
    if ( v32 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
      v8[5] = &v31;
      v8[3] = 275LL;
      v8[4] = 4LL;
      v8[6] = 0LL;
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
  DXGFASTMUTEX::Acquire(v31);
  v9 = *((_QWORD *)a2 + 3);
  v10 = *((_QWORD *)this + 1);
  v32 = 1;
  *(_QWORD *)(v10 + 136) += *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 40);
  for ( i = *(struct VIDMM_RECYCLE_RANGE **)(v9 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v12 = *((int *)i + 16);
    if ( *((_DWORD *)i + 16) == 1 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)i + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v17 - 3) <= 3 || (unsigned int)(*(_DWORD *)v17 - 9) <= 1 )
      {
        v16 = 0LL;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v17 + 8), i);
        v16 = 5LL;
      }
    }
    else
    {
      if ( *((_DWORD *)i + 16) != 3 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(*((_DWORD *)i + 16) - 1), v10);
        v13[3] = 270LL;
        v13[4] = 52LL;
        v13[5] = 1LL;
        v13[6] = v12;
        v13[7] = 0LL;
        WdLogEvent5_WdCriticalError(v13);
        goto LABEL_14;
      }
      v14 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)i + 9) + 32LL);
      v15 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v14 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v14, i);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v15, i);
      v16 = 4LL;
    }
    VIDMM_RECYCLE_RANGE::Transition(i, v16);
LABEL_14:
    if ( i == *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) )
      break;
  }
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
    *(VIDMM_RECYCLE_HEAP **)(*(_QWORD *)(v9 + 80) + 32LL),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v9);
  v18 = *(_QWORD *)(v9 + 80);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8LL);
  if ( *(_QWORD *)(v9 + 96) )
  {
    ExFreePoolWithTag(*(PVOID *)(v9 + 96), 0);
    v18 = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(v9 + 96) = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v18, 1, v9);
  v22 = *(VIDMM_RECYCLE_BLOCK **)(v9 + 80);
  v23 = *((_QWORD *)v22 + 1) - 1LL;
  *((_QWORD *)v22 + 1) = v23;
  if ( !*(_QWORD *)v22 && !v23 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v22);
  *(_BYTE *)(v9 + 232) = 1;
  *(_QWORD *)(v9 + 224) = 0LL;
  v24 = *(unsigned int *)(v19 + 1612);
  v25 = *(_QWORD *)(v19 + 1320);
  if ( (unsigned int)v24 >= 4 )
  {
    ++*(_DWORD *)(v25 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v25) < *(_WORD *)(v25 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v25, (PSLIST_ENTRY)v9);
    }
    else
    {
      ++*(_DWORD *)(v25 + 32);
      (*(void (__fastcall **)(__int64, __int64))(v25 + 56))(v9, v25);
    }
  }
  else
  {
    *(_QWORD *)(v19 + 8 * v24 + 1648) = v9;
    ++*(_DWORD *)(v19 + 1612);
  }
  --*(_DWORD *)(v19 + 1680);
  if ( v32 )
  {
    v26 = v31;
    v32 = 0;
    if ( *((struct _KTHREAD **)v31 + 2) != KeGetCurrentThread() )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v20);
      v27[3] = 275LL;
      v27[4] = 4LL;
      v27[5] = v26;
      v27[6] = 0LL;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    v28 = *((_DWORD *)v26 + 6);
    if ( v28 <= 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v22, v20, v21);
      *(_QWORD *)(v29 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v29);
      v28 = *((_DWORD *)v26 + 6);
    }
    v30 = v28 - 1;
    *((_DWORD *)v26 + 6) = v30;
    if ( !v30 )
    {
      *((_QWORD *)v26 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v26, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00503F0 << 20)
    || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00503F4 << 20) )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  }
}
