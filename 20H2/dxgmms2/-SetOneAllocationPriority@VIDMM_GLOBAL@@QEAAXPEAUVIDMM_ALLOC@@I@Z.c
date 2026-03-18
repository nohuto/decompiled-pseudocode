/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00B4914
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00B4828 (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024774 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00716A4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    v9 = WdLogNewEntry5_WdWarning(v8, v7);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdWarning(v9);
    v6 = -939524097;
  }
  memset(v15, 0, sizeof(v15));
  v10 = *a2;
  LODWORD(v15[0]) = 212;
  v15[2] = a2;
  v11 = *v10;
  LODWORD(v15[4]) = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    (struct VIDMM_PAGING_QUEUE *)(a2[1][9] + 176LL * (*(_DWORD *)(v11 + 76) & 0x3F)),
    (struct _VIDMM_DEFERRED_COMMAND *)v15,
    0,
    0LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v14) = a3;
      McTemplateK0pq_EtwWriteTransfer(v12, &EventSetAllocationPriority, v13, a2, v14);
    }
  }
}
