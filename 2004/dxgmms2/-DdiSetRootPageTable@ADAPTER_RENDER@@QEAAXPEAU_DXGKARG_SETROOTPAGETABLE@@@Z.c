/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0014478
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E070 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00D3C20 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00D45BC (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00D4B6C (VidSchiEnsureRootPageTableUpdated.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[49])(this, a2);
}
