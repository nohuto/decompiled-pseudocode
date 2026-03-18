/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A8A4
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x1C0014E90 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00689A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     VidSchRemoveContextAllocation @ 0x1C008A928 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CONTEXT_ALLOC *a2,
        __int64 a3)
{
  struct _KEVENT *v4; // rbx
  struct VIDMM_DEVICE *Flink; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  __int64 v8; // rax

  if ( a2 )
  {
    v4 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
    Flink = (struct VIDMM_DEVICE *)v4->Header.WaitListHead.Flink;
    v6 = **(struct _VIDMM_GLOBAL_ALLOC ***)&v4->Header.Lock;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v4, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(this, Flink, v6, 0);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL, a3);
    *(_QWORD *)(v8 + 24) = 2262LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
