/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C001B144
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C001B538 (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C001B854 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C0074134 (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C007B874 (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 result; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONG v7; // r8d
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  void *v11; // [rsp+40h] [rbp-28h]
  unsigned __int8 v12; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v2 = *(_QWORD *)(a1 + 24);
  v12 = BYTE2(v1);
  Handle = 0LL;
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(v2 + 8LL * (unsigned __int8)v1 + 2224),
             1LL,
             &Handle,
             L"Target Id %d",
             BYTE1(v1));
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F) + 16);
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v6 + 2 * v10) );
    PortMapBuildLunEntry((int)Handle, v12, v9, a1 + 112, v8, v7, v6, v10, v11);
    ZwClose(Handle);
    if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
    {
      v5 = RaidUnitAddAclToVmDevices(a1);
      if ( v5 >= 0 )
        v5 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 8),
               &GUID_DEVINTERFACE_VMLUN,
               0LL,
               (PUNICODE_STRING)(a1 + 1832));
    }
    if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0xD )
    {
      v5 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_SES,
             0LL,
             (PUNICODE_STRING)(a1 + 1952));
      if ( v5 >= 0 )
      {
        v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1952), 1u);
        if ( v5 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1952));
      }
    }
    return (unsigned int)v5;
  }
  return result;
}
