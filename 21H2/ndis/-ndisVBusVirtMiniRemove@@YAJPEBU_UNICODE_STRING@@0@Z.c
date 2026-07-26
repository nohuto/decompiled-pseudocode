/*
 * XREFs of ?ndisVBusVirtMiniRemove@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00AC1E0
 * Callers:
 *     NdisIMVBusDeviceRemove @ 0x1C0066D40 (NdisIMVBusDeviceRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniRemove(const struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  unsigned int v5; // ebx

  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32) )
    return 3221225635LL;
  v5 = ((__int64 (__fastcall *)(const struct _UNICODE_STRING *, const struct _UNICODE_STRING *))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink)(
         a1,
         a2);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  return v5;
}
