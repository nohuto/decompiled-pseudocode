/*
 * XREFs of ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C0021D08
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00D48B8 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *))DxgCoreInterface[41])(
           this,
           a2);
}
