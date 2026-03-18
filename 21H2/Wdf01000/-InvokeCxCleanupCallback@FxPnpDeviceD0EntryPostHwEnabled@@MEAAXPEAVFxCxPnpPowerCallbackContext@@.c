/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C0086190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpDeviceD0EntryPostHwEnabled::InvokeCxCleanupCallback(
        FxPnpDeviceD0EntryPostHwEnabled *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
