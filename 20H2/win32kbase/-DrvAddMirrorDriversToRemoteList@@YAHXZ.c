/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CA1A0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0013030 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0086924 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0086A10 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0086AC4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B6A58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0144FE0 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int i; // eax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  unsigned int v15; // r9d
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS DeviceObjectPointer; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C8h] BYREF
  PFILE_OBJECT DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-58h]
  __int128 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  WCHAR SourceString[40]; // [rsp+D8h] [rbp-30h] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  DeviceObjectPointer = 0;
  v21 = gcRemoteNextMirrorDriverDeviceNumber;
  v3 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v3);
  v5 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v6 = WdLogNewEntry5_WdTrace(v5, v4);
    WdLogEvent5_WdTrace(v6);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 67108868;
    QueryTable.EntryContext = &v21;
    v26 = 0LL;
    QueryTable.DefaultData = &v21;
    QueryTable.DefaultLength = 4;
    v30 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    for ( i = gcRemoteNextMirrorDriverDeviceNumber;
          gcRemoteNextMirrorDriverDeviceNumber <= v21;
          i = gcRemoteNextMirrorDriverDeviceNumber )
    {
      v11 = 0;
      DestinationString_8 = 0LL;
      if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", i) < 0 )
        goto LABEL_2;
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString_8, 0, &DestinationString, &DeviceObject);
      if ( DeviceObjectPointer < 0 )
      {
        v19 = WdLogNewEntry5_WdTrace(v13, v12);
        *(_QWORD *)(v19 + 24) = DeviceObjectPointer;
        WdLogEvent5_WdTrace(v19);
        ++gcRemoteNextMirrorDriverDeviceNumber;
      }
      else
      {
        v14 = (char *)PALLOCMEM2(0x138uLL, 1986291527LL, 1);
        if ( v14 )
        {
          *((_DWORD *)v14 + 54) = 0;
          *((_QWORD *)v14 + 28) = 0LL;
          *((_DWORD *)v14 + 65) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v14 + 17) = DeviceObject;
            *((_QWORD *)v14 + 29) = DestinationString;
          }
          else
          {
            *((_QWORD *)v14 + 17) = 0LL;
            *((_QWORD *)v14 + 29) = 0LL;
          }
          v15 = gcRemoteNextMirrorDriverDeviceNumber;
          *((_WORD *)v14 + 110) = gProtocolType;
          gcRemoteNextMirrorDriverDeviceNumber = v15 + 1;
          swprintf_s((wchar_t *)v14, 0x20uLL, L"\\Device\\Video%d");
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v14,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &DeviceObjectPointer);
          DrvGetDeviceConfigurationInformation(v14, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v17 = (wchar_t *)(v14 + 64);
          if ( (*((_DWORD *)v14 + 40) & 0x200008) == 0x200008 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v17, 0x20uLL, L"\\\\.\\DISPLAYV%d");
            v11 = 1;
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v17, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          if ( DeviceObjectPointer >= 0 && v11 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v14;
            DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v14);
            if ( (*((_DWORD *)v14 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v14 + 248));
          }
          else
          {
            if ( (*((_DWORD *)v14 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v14 + 248));
            DrvCleanupOneGraphicsDevice((__int64)v14);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
    }
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    v18 = WdLogNewEntry5_WdTrace(v9, v8);
    WdLogEvent5_WdTrace(v18);
  }
  return 1LL;
}
