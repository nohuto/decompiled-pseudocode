/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x1407C8B50
 * Callers:
 *     IoWMISuggestInstanceName @ 0x140933C80 (IoWMISuggestInstanceName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x14063D9C4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14063F78C (PnpUnicodeStringToWstr.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406C82EC (IopApplyMutableTagToRegistryKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406EAB84 (_CmOpenDeviceInterfaceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  __int16 *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v6 = PnpUnicodeStringToWstr(&v10, 0LL, &SymbolicLinkName->Length);
    if ( v6 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v6 = CmOpenDeviceInterfaceRegKey(
             *(__int64 *)&PiPnpRtlCtx,
             (__int64)v10,
             0x32u,
             v8,
             DesiredAccess,
             1,
             (__int64)DeviceInterfaceRegKey,
             0LL);
      if ( v6 >= 0 && DeviceInterfaceRegKey )
        IopApplyMutableTagToRegistryKey(*DeviceInterfaceRegKey);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v6 = -1073741811;
  }
  PnpUnicodeStringToWstrFree(v10, (__int64)SymbolicLinkName);
  return v6;
}
