/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C002CB20
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008E60C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *))DxgCoreInterface[62])(
           this,
           a2);
}
