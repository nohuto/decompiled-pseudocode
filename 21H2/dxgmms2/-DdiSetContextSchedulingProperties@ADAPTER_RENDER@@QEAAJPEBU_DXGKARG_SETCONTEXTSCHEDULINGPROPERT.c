/*
 * XREFs of ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C002CB44
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00F63D0 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *))DxgCoreInterface[42])(
           this,
           a2);
}
