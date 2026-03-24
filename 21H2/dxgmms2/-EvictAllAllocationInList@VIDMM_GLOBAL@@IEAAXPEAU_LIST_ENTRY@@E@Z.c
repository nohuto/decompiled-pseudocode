/*
 * XREFs of ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C008996C
 * Callers:
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008992C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008C940 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023FCC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v5; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v7; // rbx
  __int64 v8; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Blink; // rcx
  int v11; // [rsp+20h] [rbp-28h]

  for ( i = a2->Flink; i != a2; v5[20].Blink = 0LL )
  {
    v5 = i - 20;
    Flink = i[-12].Flink;
    v7 = i;
    i = i->Flink;
    LOBYTE(a3) = 1;
    LOBYTE(v11) = 0;
    ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, __int64, _QWORD, int, _QWORD))Flink->Flink[3].Flink)(
      Flink,
      v5,
      a3,
      0LL,
      v11,
      0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v8, &EventEvictAllocation, a3, v5);
    v9 = v7->Flink;
    if ( v7->Flink->Blink != v7 || (Blink = v7->Blink, Blink->Flink != v7) )
      __fastfail(3u);
    Blink->Flink = v9;
    v9->Blink = Blink;
    v7->Flink = 0LL;
  }
}
