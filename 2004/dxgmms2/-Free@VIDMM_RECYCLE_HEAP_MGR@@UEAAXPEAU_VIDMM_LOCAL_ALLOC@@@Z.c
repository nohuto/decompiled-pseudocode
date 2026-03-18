/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A758 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A860 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A96C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C53C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007CC6C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007CCF0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C2B88 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  DXGFASTMUTEX *v19; // rbx
  int v20; // eax
  int v21; // eax
  VIDMM_RECYCLE_HEAP_MGR *v22; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  DXGFASTMUTEX *v32; // [rsp+20h] [rbp-18h] BYREF
  char v33; // [rsp+28h] [rbp-10h]

  v33 = 0;
  v32 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v24 = WdLogNewEntry5_WdAssertion(-1328LL, a2, a3);
    *(_QWORD *)(v24 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v24);
    if ( v33 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25);
      v27[5] = &v32;
      v27[3] = 275LL;
      v27[4] = 4LL;
      v27[6] = 0LL;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
    }
  }
  DXGFASTMUTEX::Acquire(v32);
  v5 = *((_QWORD *)a2 + 3);
  v6 = *((_QWORD *)this + 1);
  v33 = 1;
  *(_QWORD *)(v6 + 136) += *(_QWORD *)(v5 + 32) - *(_QWORD *)(v5 + 40);
  for ( i = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v8 = *((int *)i + 16);
    if ( *((_DWORD *)i + 16) == 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)i + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v9 - 3) > 3 && (unsigned int)(*(_DWORD *)v9 - 9) > 1 )
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v9 + 8), i);
        v10 = 5LL;
      }
      else
      {
        v10 = 0LL;
      }
      goto LABEL_7;
    }
    if ( *((_DWORD *)i + 16) == 3 )
    {
      v22 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)i + 9) + 32LL);
      v23 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v22 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v22, i);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v23, i);
      v10 = 4LL;
LABEL_7:
      VIDMM_RECYCLE_RANGE::Transition(i, v10);
      goto LABEL_8;
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(*((_DWORD *)i + 16) - 1), v6);
    v28[3] = 270LL;
    v28[4] = 52LL;
    v28[5] = 1LL;
    v28[6] = v8;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
LABEL_8:
    if ( i == *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72) )
      break;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
          *(VIDMM_RECYCLE_HEAP **)(*(_QWORD *)(v5 + 80) + 32LL),
          (struct VIDMM_RECYCLE_MULTIRANGE *)v5) )
  {
    v14 = *(_QWORD *)(v5 + 80);
    v12 = *(_QWORD **)(v5 + 96);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v14 = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    --*(_QWORD *)(v14 + 8);
    v16 = *(_QWORD *)(v5 + 80);
    *(_BYTE *)(v5 + 232) = 1;
    *(_QWORD *)(v5 + 224) = 0LL;
    v11 = *(_QWORD *)(v16 + 136);
    if ( v11 )
    {
      v29 = *(_QWORD *)(v11 + 24) + 144LL * *(_QWORD *)(v11 + 32);
      *(_DWORD *)v29 = 1;
      *(_QWORD *)(v29 + 8) = v5;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v29 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v16 + 136) + 32LL);
      v12 = *(_QWORD **)(v16 + 136);
      if ( v12[4] == v12[6] )
      {
        v12[4] = 0LL;
        *(_BYTE *)(*(_QWORD *)(v16 + 136) + 40LL) = 1;
      }
    }
    v17 = *(unsigned int *)(v15 + 1612);
    v18 = *(_QWORD *)(v15 + 1320);
    if ( (unsigned int)v17 >= 4 )
    {
      ++*(_DWORD *)(v18 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v18) < *(_WORD *)(v18 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v18, (PSLIST_ENTRY)v5);
      }
      else
      {
        ++*(_DWORD *)(v18 + 32);
        (*(void (__fastcall **)(__int64, __int64))(v18 + 56))(v5, v18);
      }
    }
    else
    {
      *(_QWORD *)(v15 + 8 * v17 + 1648) = v5;
      ++*(_DWORD *)(v15 + 1612);
    }
  }
  if ( v33 )
  {
    v19 = v32;
    v33 = 0;
    if ( *((struct _KTHREAD **)v32 + 2) != KeGetCurrentThread() )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v30[3] = 275LL;
      v30[4] = 4LL;
      v30[5] = v19;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    v20 = *((_DWORD *)v19 + 6);
    if ( v20 <= 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
      *(_QWORD *)(v31 + 24) = 703LL;
      WdLogEvent5_WdAssertion(v31);
      v20 = *((_DWORD *)v19 + 6);
    }
    v21 = v20 - 1;
    *((_DWORD *)v19 + 6) = v21;
    if ( !v21 )
    {
      *((_QWORD *)v19 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00513F0 << 20)
    || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00513F4 << 20) )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
  }
}
