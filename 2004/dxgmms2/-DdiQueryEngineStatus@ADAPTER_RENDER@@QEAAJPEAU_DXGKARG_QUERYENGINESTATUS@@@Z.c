/*
 * XREFs of ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C00221EC
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C007F3E0 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryEngineStatus(ADAPTER_RENDER *this, struct _DXGKARG_QUERYENGINESTATUS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_QUERYENGINESTATUS *))DxgCoreInterface[36])(this, a2);
}
