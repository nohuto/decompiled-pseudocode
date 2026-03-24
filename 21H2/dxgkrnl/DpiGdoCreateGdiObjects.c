/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C01897B4
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C018AE58 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C0189AC4 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C018A5BC (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C018AD9C (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  const WCHAR *v7; // rcx
  PVOID DeviceExtension; // rdi
  char v9; // r13
  char v10; // r12
  bool v11; // zf
  ULONG v12; // edx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  PDEVICE_OBJECT v22; // rax
  NTSTATUS v23; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  PVOID *v28; // rcx
  BOOLEAN v29; // [rsp+30h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-19h] BYREF
  PRKMUTEX Mutex; // [rsp+60h] [rbp-11h]
  struct _UNICODE_STRING DeviceName; // [rsp+68h] [rbp-9h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp+7h] BYREF
  char v37; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  Mutex = (PRKMUTEX)(v3 + 3584);
  KeWaitForSingleObject((PVOID)(v3 + 3584), Executive, 0, 0, 0LL);
  v6 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      DeviceObject = 0LL;
      v7 = L"\\Device\\RemoteVideo";
      v37 = 0;
      DeviceExtension = 0LL;
      v9 = 0;
      v10 = 0;
      v11 = *(_BYTE *)(v3 + 2743) == 0;
      DeviceName = 0LL;
      if ( v11 )
        v7 = L"\\Device\\Video";
      v12 = *(_DWORD *)(a3 + 4 * v6);
      SymbolicLinkName = 0LL;
      LODWORD(v5) = DpiAppendNumberToString(v7, v12, &DeviceName);
      if ( (int)v5 < 0 )
        goto LABEL_29;
      v13 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v29,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v5 = v13;
      if ( v13 < 0 )
        goto LABEL_21;
      if ( !*(_BYTE *)(v3 + 2743) )
      {
        LODWORD(v5) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(a3 + 4 * v6) + 1, &SymbolicLinkName);
        if ( (int)v5 < 0 )
          goto LABEL_29;
        v16 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        v5 = v16;
        if ( v16 < 0 )
          goto LABEL_21;
        v37 = 1;
      }
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 6;
      *((_QWORD *)DeviceExtension + 3) = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = a1;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
      *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 15) = &DpiGdoDispatchIoctl;
      *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v6);
      *((_DWORD *)DeviceExtension + 39) = v6;
      if ( (unsigned int)v6 >= 0x10 )
      {
        v26 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v26 + 24) = (unsigned int)v6;
        WdLogEvent5_WdError(v26);
      }
      v19 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)DeviceExtension + 10);
      v5 = v19;
      if ( v19 >= 0 )
      {
        LODWORD(v5) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v6);
        if ( (int)v5 < 0 )
          goto LABEL_26;
        v20 = *(_QWORD *)(v3 + 3896);
        *((_DWORD *)DeviceExtension + 48) = -1;
        *((_QWORD *)DeviceExtension + 22) = v20;
        v21 = *(_QWORD **)(v3 + 3576);
        if ( *v21 != v3 + 3568 )
          goto LABEL_35;
        *((_QWORD *)DeviceExtension + 1) = v21;
        v9 = 1;
        *(_QWORD *)DeviceExtension = v3 + 3568;
        *v21 = DeviceExtension;
        *(_QWORD *)(v3 + 3576) = DeviceExtension;
        v22 = DeviceObject;
        ++*(_DWORD *)(v3 + 3640);
        v22->Flags |= 4u;
        DeviceObject->Flags &= ~0x80u;
        v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
        v5 = v23;
        if ( v23 >= 0 )
        {
          v10 = 1;
          goto LABEL_17;
        }
      }
LABEL_21:
      v25 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v25 + 24) = v5;
      WdLogEvent5_WdError(v25);
LABEL_17:
      if ( (int)v5 < 0 )
      {
        if ( v10 == 1 && DeviceExtension )
          IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 0);
        if ( v9 == 1 )
LABEL_26:
          RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
        if ( v37 == 1 )
          IoDeleteSymbolicLink(&SymbolicLinkName);
LABEL_29:
        if ( DeviceObject )
        {
          IoDeleteDevice(DeviceObject);
          DeviceObject = 0LL;
        }
        if ( v9 == 1 )
        {
          v27 = *(_QWORD **)DeviceExtension;
          if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
            || (v28 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v28 != DeviceExtension) )
          {
LABEL_35:
            __fastfail(3u);
          }
          *v28 = v27;
          v27[1] = v28;
          --*(_DWORD *)(v3 + 3640);
        }
      }
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v5 >= 0 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 < a2 )
          continue;
      }
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v5;
}
