/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B21E0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00788B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00B2178 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE.c)
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00B21B8 (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z.c)
 * Callees:
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0067994 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00B838C (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B86B8 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  VIDMM_DEVICE *v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  char v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  _QWORD v19[10]; // [rsp+30h] [rbp-58h] BYREF
  bool v20; // [rsp+98h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v10 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v20 = 0;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(v10, a2, &v20);
  if ( (int)result >= 0 && !v20 )
  {
    memset(v19, 0, sizeof(v19));
    v19[5] = a5;
    v12 = *(__int64 **)a2;
    LODWORD(v19[0]) = 203;
    v19[2] = a2;
    HIDWORD(v19[4]) = a4;
    v13 = *v12;
    v14 = 0;
    LODWORD(v19[4]) = (**(_DWORD **)(*v12 + 512) & 0x20000) != 0 ? 5 : 0;
    if ( !a3 )
    {
      v14 = 1;
      a3 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL) + 176LL
                                                                                 * (*(_DWORD *)(v13 + 76) & 0x3F));
    }
    v17 = VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v19, v14, a6);
    if ( v17 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15);
      *(_QWORD *)(v18 + 24) = a2;
      WdLogEvent5_WdWarning(v18);
      VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)a2 + 1), a2, 1);
    }
    return (unsigned int)v17;
  }
  return result;
}
