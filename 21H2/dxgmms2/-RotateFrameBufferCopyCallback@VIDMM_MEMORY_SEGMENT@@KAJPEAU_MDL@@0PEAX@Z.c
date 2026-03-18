/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00A7690
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 ByteCount; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  __int64 v10; // rbx
  __int64 LogicalAddress; // rax
  int v12; // eax
  unsigned int v13; // ebx

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1584LL * (*(_DWORD *)(*(_QWORD *)a3 + 68LL) & 0x3F) + *(_QWORD *)(v5 + 40224) + 436) & 4) == 0 )
    return 3221225473LL;
  v6 = 0LL;
  if ( !*(_BYTE *)(v5 + 40179) )
    goto LABEL_3;
  v10 = *((_QWORD *)a3 + 4);
  LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*(_QWORD *)a3 + 520LL));
  v6 = LogicalAddress;
  if ( LogicalAddress )
    v6 = v10 + LogicalAddress;
  v12 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v6, a2, 0);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)a3, v12);
    return v13;
  }
  else
  {
LABEL_3:
    ByteCount = a2->ByteCount;
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((_QWORD *)a3 + 4),
      0LL,
      0LL,
      a2,
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v8 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v8);
    if ( *(_BYTE *)(v5 + 40179) )
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v6, a2, 0);
    return 0LL;
  }
}
