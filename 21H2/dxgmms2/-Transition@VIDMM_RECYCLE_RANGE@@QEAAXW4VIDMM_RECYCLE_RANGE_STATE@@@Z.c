/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F760
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C007C924 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007E050 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C007E358 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007F0F4 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007F5A4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EB8C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

int __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  LODWORD(v4) = WdLogSingleEntry3(4LL, a1, *(int *)(a1 + 64), a2);
  if ( (byte_1C006E942 & 2) != 0 )
  {
    v13 = a2;
    v12 = *(_DWORD *)(a1 + 64);
    LODWORD(v4) = McTemplateK0pqq_EtwWriteTransfer(v5, &EventRecycleRangeTransition, v6, a1, v12, v13);
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD **)(v7 + 136);
  if ( v8 )
  {
    v9 = *v8 + 144LL * v8[1];
    *(_DWORD *)v9 = 2;
    *(_QWORD *)(v9 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v9 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL);
    v10 = *(_QWORD *)(v7 + 136);
    v4 = *(_QWORD *)(v10 + 48);
    if ( *(_QWORD *)(v10 + 8) == v4 )
    {
      *(_QWORD *)(v10 + 8) = 0LL;
      v4 = *(_QWORD *)(v7 + 136);
      *(_BYTE *)(v4 + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = a2;
  return v4;
}
