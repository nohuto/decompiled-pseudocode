/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007CC8C
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C005E5FC (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0077E38 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0078170 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00798F0 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007A938 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C007AC64 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007CA70 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00C2490 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024AB8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

char __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+28h] [rbp-10h]

  v2 = (int)a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = *(int *)(a1 + 64);
  v4[5] = v2;
  WdLogEvent5_WdEvent(v4);
  LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v14 = v2;
    v13 = *(_DWORD *)(a1 + 64);
    LOBYTE(v7) = McTemplateK0pqq_EtwWriteTransfer(v5, &EventRecycleRangeTransition, v6, a1, v13, v14);
  }
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(_QWORD **)(v8 + 136);
  if ( v9 )
  {
    v10 = *v9 + 144LL * v9[1];
    *(_DWORD *)v10 = 2;
    *(_QWORD *)(v10 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v10 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL);
    v11 = *(_QWORD *)(v8 + 136);
    v7 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v11 + 8) == v7 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      v7 = *(_QWORD *)(v8 + 136);
      *(_BYTE *)(v7 + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = v2;
  return v7;
}
