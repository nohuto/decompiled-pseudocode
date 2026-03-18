/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088C7C
 * Callers:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C0088A3C (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL ***this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL **v4; // rdx
  VIDMM_GLOBAL *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(v6);
    v7[3] = *((_QWORD *)a2 + 32);
    v7[4] = *((unsigned int *)a2 + 62);
    v7[5] = *((int *)a2 + 63);
  }
  v4 = this[472];
  v5 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 224);
  if ( *v4 != (VIDMM_GLOBAL *)(this + 471) )
    __fastfail(3u);
  *(_QWORD *)v5 = this + 471;
  *((_QWORD *)a2 + 29) = v4;
  *v4 = v5;
  this[472] = (VIDMM_GLOBAL **)v5;
}
