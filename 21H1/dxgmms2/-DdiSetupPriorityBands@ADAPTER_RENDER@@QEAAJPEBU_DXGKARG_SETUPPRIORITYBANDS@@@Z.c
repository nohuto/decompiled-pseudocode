/*
 * XREFs of ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C0022320
 * Callers:
 *     VidSchiInitializeNode @ 0x1C008E238 (VidSchiInitializeNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetupPriorityBands(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETUPPRIORITYBANDS *))DxgCoreInterface[21])(
           this,
           a2);
}
