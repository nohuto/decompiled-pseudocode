/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A79C0
 * Callers:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00A7814 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL ***this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL **v6; // rdx
  VIDMM_GLOBAL *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v12[3] = *((_QWORD *)a2 + 30);
    v12[4] = *((unsigned int *)a2 + 58);
    v12[5] = *((int *)a2 + 59);
  }
  v6 = this[472];
  v7 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 208);
  if ( *v6 != (VIDMM_GLOBAL *)(this + 471) )
    __fastfail(3u);
  *(_QWORD *)v7 = this + 471;
  *((_QWORD *)a2 + 27) = v6;
  *v6 = v7;
  this[472] = (VIDMM_GLOBAL **)v7;
}
