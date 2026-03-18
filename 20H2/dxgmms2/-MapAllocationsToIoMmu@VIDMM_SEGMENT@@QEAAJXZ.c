/*
 * XREFs of ?MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C83B0
 * Callers:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B0008 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B18EC (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MapAllocationsToIoMmu(VIDMM_SEGMENT *this)
{
  char *v1; // rsi
  char *i; // rbx
  char *v4; // r14
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  VIDMM_SEGMENT *j; // rbx
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax

  v1 = (char *)this + 160;
  for ( i = (char *)*((_QWORD *)this + 20); i != v1; i = *(char **)i )
  {
    v4 = i - 376;
    v5 = VIDMM_GLOBAL::IoMmuMapAllocation(*((VIDMM_GLOBAL **)this + 1), (struct _VIDMM_GLOBAL_ALLOC *)(i - 376));
    v8 = v5;
    if ( v5 < 0 )
    {
LABEL_6:
      v10 = WdLogNewEntry5_WdWarning(v7, v6);
      *(_QWORD *)(v10 + 24) = v4;
      *(_QWORD *)(v10 + 32) = v8;
      WdLogEvent5_WdWarning(v10);
      return (unsigned int)v8;
    }
  }
  for ( j = (VIDMM_SEGMENT *)*((_QWORD *)this + 22); j != (VIDMM_SEGMENT *)((char *)this + 176); j = *(VIDMM_SEGMENT **)j )
  {
    v4 = (char *)j - 376;
    v12 = VIDMM_GLOBAL::IoMmuMapAllocation(*((VIDMM_GLOBAL **)this + 1), (VIDMM_SEGMENT *)((char *)j - 376));
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_6;
  }
  v13 = DpiMapIommuIdentityRange(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 216LL),
          *(_QWORD *)(*((_QWORD *)this + 33) + 8LL),
          0LL,
          6LL,
          (char *)this + 264);
  v16 = v13;
  if ( v13 >= 0 )
    return 0LL;
  v17 = WdLogNewEntry5_WdWarning(v15, v14);
  *(_QWORD *)(v17 + 24) = this;
  *(_QWORD *)(v17 + 32) = v16;
  WdLogEvent5_WdWarning(v17);
  return (unsigned int)v16;
}
