/*
 * XREFs of ?ndisVBusVirtMiniAdd@@YAJPEBU_UNICODE_STRING@@00@Z @ 0x1C00AC160
 * Callers:
 *     NdisIMVBusDeviceAdd @ 0x1C0066C50 (NdisIMVBusDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniAdd(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned int v7; // ebx

  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32) )
    return 3221225635LL;
  v7 = ((__int64 (__fastcall *)(const struct _UNICODE_STRING *, const struct _UNICODE_STRING *, const struct _UNICODE_STRING *))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink)(
         a1,
         a2,
         a3);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  return v7;
}
