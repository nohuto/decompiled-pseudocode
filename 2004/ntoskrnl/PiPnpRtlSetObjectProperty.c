/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140725C5C
 * Callers:
 *     PiDqIrpPropertySet @ 0x140714030 (PiDqIrpPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1407257BC (PiDevCfgSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140728EF0 (PnpSetDevicePropertyData.c)
 *     PiCMSetObjectProperty @ 0x1407570E8 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x140759D5C (PiSwPropertySet.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14076B308 (PnpSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A6080 (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x140797BF8 (_CmSplitDevicePanelId.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1408B2504 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x1408B2548 (PiAuditDeviceOperation.c)
 *     _CmUpdateDevicePanelInterface @ 0x140975930 (_CmUpdateDevicePanelInterface.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        const wchar_t *pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v13; // r12d
  int v14; // ecx
  char *v15; // r9
  unsigned int i; // r10d
  _QWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // r13
  int v23; // ebx
  int v24; // r14d
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r10d
  __int64 (**v30)[3]; // r8
  unsigned int v31; // r9d
  __int64 *v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  bool v47; // zf
  __int64 v48; // rax
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  __int64 v51; // r9
  __int64 v52; // r8
  char v53; // [rsp+60h] [rbp-81h]
  int v54; // [rsp+64h] [rbp-7Dh] BYREF
  int v55; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-75h] BYREF
  int v57; // [rsp+70h] [rbp-71h] BYREF
  int v58; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v59; // [rsp+78h] [rbp-69h]
  __int64 v60; // [rsp+80h] [rbp-61h]
  int v61; // [rsp+88h] [rbp-59h]
  int v62; // [rsp+8Ch] [rbp-55h]
  __int64 v63; // [rsp+90h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-39h]
  __int128 v66; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v63 = a1;
  v60 = a4;
  v65 = a5;
  v62 = 0;
  v13 = 0;
  v61 = 0;
  v54 = 0;
  v58 = 0;
  v56 = 0;
  v59 = 0;
  v55 = 0;
  v57 = 0;
  v53 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v66 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v46 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v46 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        v47 = v46 == 0;
LABEL_95:
        if ( v47 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v29 = *(_DWORD *)(a6 + 16);
      v30 = PiPnpRtlContainerReadOnlyProps;
      v31 = 0;
      while ( 1 )
      {
        v32 = (__int64 *)*v30;
        if ( v29 == LODWORD((**v30)[2]) )
        {
          v42 = *(_QWORD *)a6 - *v32;
          if ( *(_QWORD *)a6 == *v32 )
            v42 = *(_QWORD *)(a6 + 8) - v32[1];
          if ( !v42 )
            return (unsigned int)-1073741790;
        }
        ++v31;
        ++v30;
        if ( v31 >= 2 )
        {
          if ( v29 == 105 )
          {
            v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
              v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
            if ( !v33 )
            {
              v34 = a7 == 7;
              goto LABEL_43;
            }
          }
          break;
        }
      }
    }
LABEL_9:
    v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = (char *)&PiPnpRtlDeviceReadOnlyProps;
  for ( i = 0; i < 0xD; ++i )
  {
    v17 = *(_QWORD **)v15;
    if ( v14 == *(_DWORD *)(*(_QWORD *)v15 + 16LL) )
    {
      v28 = *(_QWORD *)a6 - *v17;
      if ( *(_QWORD *)a6 == *v17 )
        v28 = *(_QWORD *)(a6 + 8) - v17[1];
      if ( !v28 )
        return (unsigned int)-1073741790;
    }
    v15 += 8;
  }
  if ( v14 != 12 )
  {
    if ( v14 == 3 )
    {
      v36 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v36 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v36 )
        goto LABEL_94;
    }
    if ( v14 == 4 )
    {
      v41 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v41 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v41 )
      {
LABEL_94:
        v47 = CmIsRootEnumeratedDevice(a2) == 0;
        goto LABEL_95;
      }
    }
    else if ( v14 == 2 )
    {
      v35 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
        v35 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
      if ( !v35 )
      {
        if ( !pszSrc
          || a9 < 2
          || a7 != 18
          || pszSrc[((unsigned __int64)a9 >> 1) - 1]
          || (int)CmSplitDevicePanelId(pszSrc, &Guid) < 0
          || (int)PnpGetObjectProperty(
                    a1,
                    (__int64)a2,
                    1LL,
                    v60,
                    0LL,
                    (__int64)&DEVPKEY_Device_ContainerId,
                    (__int64)&v55,
                    (__int64)&v66,
                    16,
                    (__int64)&v54,
                    0) < 0
          || v55 != 13
          || v54 != 16 )
        {
          return (unsigned int)-1073741811;
        }
        v48 = v66 - *(_QWORD *)&Guid.Data1;
        if ( (_QWORD)v66 == *(_QWORD *)&Guid.Data1 )
          v48 = *((_QWORD *)&v66 + 1) - *(_QWORD *)Guid.Data4;
        v34 = v48 == 0;
LABEL_43:
        if ( !v34 )
          return (unsigned int)-1073741811;
      }
    }
    goto LABEL_9;
  }
  v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v43 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
    v43 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  if ( !v43 && (!pszSrc || a9 != 4) )
    return (unsigned int)-1073741811;
LABEL_10:
  v20 = 5;
  if ( a3 == 1 )
  {
    v21 = *(_DWORD *)(a6 + 16);
    switch ( v21 )
    {
      case 10:
        v37 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
          v37 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
        if ( !v37 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          v53 = 1;
        }
        break;
      case 12:
        v44 = *(_QWORD *)a6 - v19;
        if ( *(_QWORD *)a6 == v19 )
          v44 = *(_QWORD *)(a6 + 8) - v18;
        if ( !v44 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v54 = 4;
          DeviceRegProp = CmGetDeviceRegProp(v63, (__int64)a2, v60, 11, (__int64)&v58, (__int64)&v56, (__int64)&v54, 0);
          if ( DeviceRegProp < 0 || v54 != 4 || v58 != 4 )
            v56 = 0;
          v59 = *(_DWORD *)pszSrc;
        }
        break;
      case 5:
        v39 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
        if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
          v39 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
        if ( !v39 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v54 = 4;
          ObjectProperty = PnpGetObjectProperty(
                             v63,
                             (__int64)a2,
                             1LL,
                             v60,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstallError,
                             (__int64)&v55,
                             (__int64)&v57,
                             4,
                             (__int64)&v54,
                             0);
          if ( ObjectProperty < 0 || v54 != 4 || v55 != 23 )
            v57 = 0;
          if ( a9 == 4 && a7 == 23 )
            v13 = *(_DWORD *)pszSrc;
        }
        break;
    }
  }
  v22 = v63;
  v23 = PnpSetObjectProperty(v63, (_DWORD)a2, a3, v65, a6, a7, (__int64)pszSrc, a9, a10);
  v24 = a3 - 1;
  if ( v24 )
  {
    if ( v24 == 2 && v23 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
    {
      v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
        v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
      if ( !v27 )
        CmUpdateDevicePanelInterface(v22, a2, v60);
    }
    goto LABEL_17;
  }
  v25 = *(_DWORD *)(a6 + 16);
  if ( v25 == 12 )
  {
    v45 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v45 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v45 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      LOBYTE(v51) = v23 >= 0;
      PiAuditDeviceEnableDisableRequest(&DestinationString, v56, v59, v51);
    }
    goto LABEL_17;
  }
  if ( v25 == 5 )
  {
    v40 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
      v40 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
    if ( !v40 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      if ( v57 == -536870328 )
      {
        if ( v13 == -536870328 )
          goto LABEL_17;
        v20 = 6;
      }
      else if ( v13 != -536870328 )
      {
        goto LABEL_17;
      }
      LOBYTE(v52) = v23 >= 0;
      PiAuditDeviceOperation(&DestinationString, v20, v52);
    }
  }
LABEL_17:
  if ( v53 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v23;
}
