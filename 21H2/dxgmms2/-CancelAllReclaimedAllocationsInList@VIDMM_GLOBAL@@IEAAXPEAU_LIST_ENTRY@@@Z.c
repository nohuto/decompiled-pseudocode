/*
 * XREFs of ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D5604
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00EC1C0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  struct _LIST_ENTRY *v7; // rsi
  VIDMM_SEGMENT *v8; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v9; // rdx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    p_Blink = &Flink[-22].Blink;
    v7 = Flink;
    v8 = (VIDMM_SEGMENT *)Flink[-14].Flink;
    v9 = (struct _VIDMM_GLOBAL_ALLOC *)&Flink[-22].Blink;
    Flink = Flink->Flink;
    VIDMM_SEGMENT::ReAllocateOldResource(v8, v9, a3);
    v10 = v7->Flink;
    if ( v7->Flink->Blink != v7 || (Blink = v7->Blink, Blink->Flink != v7) )
      __fastfail(3u);
    Blink->Flink = v10;
    v10->Blink = Blink;
    v7->Flink = 0LL;
    p_Blink[44] = 0LL;
  }
}
