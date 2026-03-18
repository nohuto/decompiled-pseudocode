/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00A9CA0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00A9C5C (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE.c)
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00D8D08 (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00A9DBC (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA07C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        struct VIDMM_PAGING_QUEUE *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  int v6; // esi
  struct VIDMM_PAGING_QUEUE *v7; // rdi
  VIDMM_DEVICE *v10; // rcx
  __int64 result; // rax
  VIDMM_DEVICE *v12; // rax
  __int64 v13; // rdx
  char v14; // r9
  int v15; // edi
  _QWORD v16[10]; // [rsp+30h] [rbp-58h] BYREF
  bool v17; // [rsp+98h] [rbp+10h] BYREF

  v6 = a4;
  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v10 = a2[1];
  v17 = 0;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(v10, (struct VIDMM_ALLOC *)a2, &v17);
  if ( (int)result >= 0 && !v17 )
  {
    memset(v16, 0, sizeof(v16));
    v16[5] = a5;
    v12 = *a2;
    LODWORD(v16[0]) = 203;
    v16[2] = a2;
    HIDWORD(v16[4]) = v6;
    v13 = *(_QWORD *)v12;
    v14 = 0;
    LODWORD(v16[4]) = (**(_DWORD **)(*(_QWORD *)v12 + 528LL) & 0x20000) != 0 ? 5 : 0;
    if ( !v7 )
    {
      v14 = 1;
      v7 = (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2[1] + 10) + 176LL * (*(_DWORD *)(v13 + 68) & 0x3F));
    }
    v15 = VIDMM_GLOBAL::QueueDeferredCommand(this, v7, (struct _VIDMM_DEFERRED_COMMAND *)v16, v14, a6);
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      VIDMM_DEVICE::UnreferencePinnedAllocation(a2[1], (struct VIDMM_ALLOC *)a2, 1);
    }
    return (unsigned int)v15;
  }
  return result;
}
