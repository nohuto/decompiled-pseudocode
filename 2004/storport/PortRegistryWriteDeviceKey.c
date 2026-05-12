/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C00728C4
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x1C00184C8 (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001A6DC (RaidUnitGetInitialTimestamp.c)
 *     RaidAdapterHack @ 0x1C002BD1C (RaidAdapterHack.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0037178 (StorAdapterDeviceRegistryKeyProxy.c)
 *     ShimGetMsftId @ 0x1C0057740 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C0078078 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C0072960 (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
