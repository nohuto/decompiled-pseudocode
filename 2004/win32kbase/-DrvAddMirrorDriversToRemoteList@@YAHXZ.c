/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CB1E0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0023234 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0023320 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00233D4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0056EF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00B2A14 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C01474B0 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int i; // eax
  int v9; // esi
  __int64 v10; // rcx
  char *v11; // rdi
  unsigned int v12; // r9d
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS DeviceObjectPointer; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C8h] BYREF
  PFILE_OBJECT DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int v24; // [rsp+A8h] [rbp-60h]
  __int128 v25; // [rsp+B0h] [rbp-58h]
  __int128 v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  WCHAR SourceString[40]; // [rsp+D8h] [rbp-30h] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  DeviceObjectPointer = 0;
  v18 = gcRemoteNextMirrorDriverDeviceNumber;
  v3 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v3);
  v4 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v5 = WdLogNewEntry5_WdTrace(v4);
    WdLogEvent5_WdTrace(v5);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 67108868;
    QueryTable.EntryContext = &v18;
    v23 = 0LL;
    QueryTable.DefaultData = &v18;
    QueryTable.DefaultLength = 4;
    v27 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    for ( i = gcRemoteNextMirrorDriverDeviceNumber;
          gcRemoteNextMirrorDriverDeviceNumber <= v18;
          i = gcRemoteNextMirrorDriverDeviceNumber )
    {
      v9 = 0;
      DestinationString_8 = 0LL;
      if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", i) < 0 )
        goto LABEL_2;
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString_8, 0, &DestinationString, &DeviceObject);
      if ( DeviceObjectPointer < 0 )
      {
        v16 = WdLogNewEntry5_WdTrace(v10);
        *(_QWORD *)(v16 + 24) = DeviceObjectPointer;
        WdLogEvent5_WdTrace(v16);
        ++gcRemoteNextMirrorDriverDeviceNumber;
      }
      else
      {
        v11 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
        if ( v11 )
        {
          *((_DWORD *)v11 + 54) = 0;
          *((_QWORD *)v11 + 28) = 0LL;
          *((_DWORD *)v11 + 65) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v11 + 17) = DeviceObject;
            *((_QWORD *)v11 + 29) = DestinationString;
          }
          else
          {
            *((_QWORD *)v11 + 17) = 0LL;
            *((_QWORD *)v11 + 29) = 0LL;
          }
          v12 = gcRemoteNextMirrorDriverDeviceNumber;
          *((_WORD *)v11 + 110) = gProtocolType;
          gcRemoteNextMirrorDriverDeviceNumber = v12 + 1;
          swprintf_s((wchar_t *)v11, 0x20uLL, L"\\Device\\Video%d");
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v11,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &DeviceObjectPointer);
          DrvGetDeviceConfigurationInformation((__int64 *)v11, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v14 = (wchar_t *)(v11 + 64);
          if ( (*((_DWORD *)v11 + 40) & 0x200008) == 0x200008 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v14, 0x20uLL, L"\\\\.\\DISPLAYV%d");
            v9 = 1;
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v14, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          if ( DeviceObjectPointer >= 0 && v9 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v11;
            DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v11);
            if ( (*((_DWORD *)v11 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v11 + 248));
          }
          else
          {
            if ( (*((_DWORD *)v11 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v11 + 248));
            DrvCleanupOneGraphicsDevice((__int64)v11);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
    }
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    v15 = WdLogNewEntry5_WdTrace(v7);
    WdLogEvent5_WdTrace(v15);
  }
  return 1LL;
}
