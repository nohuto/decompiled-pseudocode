/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00C5890
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006802C (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C008BE38 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 ByteCount; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v13; // rdx

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1584LL * (*(_DWORD *)(*(_QWORD *)a3 + 76LL) & 0x3F) + *(_QWORD *)(v5 + 40216) + 436) & 4) == 0 )
    return 3221225473LL;
  if ( *(_BYTE *)(v5 + 40171)
    && (v7 = DpiMapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 216LL), a2, 0LL, 7LL, a2), v10 = v7, v7 < 0) )
  {
    v11 = WdLogNewEntry5_WdWarning(v9, v8);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)a3;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  else
  {
    ByteCount = a2->ByteCount;
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((void **)a3 + 4),
      0LL,
      0LL,
      a2,
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v13 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v13);
    if ( *(_BYTE *)(v5 + 40171) )
      DpiUnmapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 216LL), a2, 0LL, 7LL, a2);
    return 0LL;
  }
}
