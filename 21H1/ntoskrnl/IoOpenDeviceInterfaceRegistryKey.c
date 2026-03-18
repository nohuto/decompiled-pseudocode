/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x1407B7150
 * Callers:
 *     IoWMISuggestInstanceName @ 0x14092CBA0 (IoWMISuggestInstanceName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406A7714 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406A94DC (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406AB970 (_CmOpenDeviceInterfaceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406D259C (IopApplyMutableTagToRegistryKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  WCHAR *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v6 = PnpUnicodeStringToWstr((__int16 **)&v13, 0LL, &SymbolicLinkName->Length);
    if ( v6 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v6 = CmOpenDeviceInterfaceRegKey(
             *(__int64 *)&PiPnpRtlCtx,
             v13,
             0x32u,
             v8,
             DesiredAccess,
             1,
             (__int64)DeviceInterfaceRegKey,
             0LL);
      if ( v6 >= 0 && DeviceInterfaceRegKey )
        IopApplyMutableTagToRegistryKey(*DeviceInterfaceRegKey);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
    }
  }
  else
  {
    v6 = -1073741811;
  }
  PnpUnicodeStringToWstrFree(v13, (__int64)SymbolicLinkName);
  return v6;
}
