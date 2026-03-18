/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00633FC
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0060D3C (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0061E80 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00011CC (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00634BC (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064CA0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C270C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(VIDMM_RECYCLE_BLOCK *a1, __int64 a2)
{
  __int64 v3; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v5; // r12
  char v6; // r15
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rbp
  unsigned __int64 v12; // rcx
  bool v13; // r14
  bool v14; // al
  struct VIDMM_RECYCLE_RANGE *v16; // r10
  struct VIDMM_RECYCLE_RANGE *v17; // r11
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v19; // r9
  void *v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rbp
  _QWORD *v23; // rax
  unsigned int v24; // ebp
  VIDMM_RECYCLE_RANGE *v25; // rsi
  VIDMM_RECYCLE_RANGE *v26; // r14
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  char v29; // di
  struct VIDMM_RECYCLE_RANGE *v30; // rax
  __int64 v31; // r8
  struct VIDMM_RECYCLE_RANGE *v32; // rbx
  unsigned int v33; // edi
  _QWORD *v34; // rax
  _QWORD *v35; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v5 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)a1 + 4) + 8LL);
  if ( VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(a1, (struct VIDMM_RECYCLE_RANGE *)a2) )
    return 2LL;
  v6 = 1;
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)**((unsigned int **)a1 + 4);
  if ( (unsigned int)((_DWORD)v7 - 1) > 1 )
    return 0LL;
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v7,
                               (unsigned int)((_DWORD)v7 - 5) <= 1);
  v10 = *((_QWORD *)a1 + 6);
  v11 = (void *)*((_QWORD *)a1 + 5);
  v12 = v10 - (_QWORD)v11;
  v13 = v3 && v12 > SmallAllocationBlockSize && *(_QWORD *)(v3 + 40) == v10;
  v14 = !v3 && *(_QWORD *)(a2 + 40) == v10 && v12 > SmallAllocationBlockSize;
  if ( !v13 && !v14 )
    return 0LL;
  BaseAddress = 0LL;
  if ( v13 )
  {
    v16 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 64);
    v17 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 72);
    NextRange = v16;
    while ( !*((_DWORD *)NextRange + 16) )
    {
      if ( NextRange == v17 )
        v19 = 1;
      else
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      if ( v19 )
      {
        v20 = (void *)*((_QWORD *)v16 + 4);
        goto LABEL_26;
      }
    }
    return 0LL;
  }
  v20 = *(void **)(a2 + 32);
LABEL_26:
  BaseAddress = v20;
  RegionSize = v10 - (_QWORD)v20;
  if ( v20 != v11 )
  {
    v6 = 0;
    v21 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v22 = v21;
    if ( v21 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v9);
      v23[3] = BaseAddress;
      v23[4] = a1;
      v23[5] = v22;
      v23[6] = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v23);
      return 0LL;
    }
    *((_QWORD *)a1 + 6) = BaseAddress;
  }
  if ( v13 )
  {
    v24 = *(_DWORD *)(v3 + 88);
    v25 = *(VIDMM_RECYCLE_RANGE **)(v3 + 64);
    v26 = *(VIDMM_RECYCLE_RANGE **)(v3 + 72);
    if ( v24 != 2 && g_IsInternalRelease )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v9);
      v27[5] = 0LL;
      v27[6] = 0LL;
      v27[7] = 0LL;
      v27[3] = 270LL;
      v27[4] = 9LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*((_QWORD *)a1 + 4), v24, v3);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v5, (struct _SLIST_ENTRY *)v3);
    v28 = (_QWORD *)*((_QWORD *)v25 + 16);
    v29 = 0;
    *v28 = (char *)a1 + 72;
    *((_QWORD *)a1 + 10) = v28;
    do
    {
      v30 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
      if ( v25 == v26 )
        v29 = 1;
      v32 = v30;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, v25, v31);
      if ( v29 )
        v32 = v25;
      v25 = v32;
    }
    while ( !v29 );
  }
  else
  {
    v33 = *(_DWORD *)(a2 + 88);
    if ( v33 != 2 && g_IsInternalRelease )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v9);
      v34[5] = 0LL;
      v34[6] = 0LL;
      v34[7] = 0LL;
      v34[3] = 270LL;
      v34[4] = 9LL;
      WdLogEvent5_WdCriticalError(v34);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*((_QWORD *)a1 + 4), v33, a2);
    v35 = *(_QWORD **)(a2 + 128);
    *v35 = (char *)a1 + 72;
    *((_QWORD *)a1 + 10) = v35;
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, (struct VIDMM_RECYCLE_RANGE *)a2, (__int64)v35);
  }
  if ( v6 )
    return 2LL;
  else
    return 1LL;
}
