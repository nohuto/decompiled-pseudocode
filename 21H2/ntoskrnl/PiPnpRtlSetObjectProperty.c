/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x14074594C
 * Callers:
 *     PiDqIrpPropertySet @ 0x14072682C (PiDqIrpPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140746D9C (PnpSetDevicePropertyData.c)
 *     PiCMSetObjectProperty @ 0x140747578 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x140748518 (PiSwPropertySet.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077E068 (PnpSetDeviceInterfacePropertyData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x1407AFE78 (_CmSplitDevicePanelId.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1408B5764 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x1408B57A8 (PiAuditDeviceOperation.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979000 (_CmUpdateDevicePanelInterface.c)
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
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rax
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  __int64 v54; // r9
  __int64 v55; // r8
  char v56; // [rsp+60h] [rbp-81h]
  int v57; // [rsp+64h] [rbp-7Dh] BYREF
  int v58; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v59; // [rsp+6Ch] [rbp-75h] BYREF
  int v60; // [rsp+70h] [rbp-71h] BYREF
  int v61; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v62; // [rsp+78h] [rbp-69h]
  __int64 v63; // [rsp+80h] [rbp-61h]
  int v64; // [rsp+88h] [rbp-59h]
  int v65; // [rsp+8Ch] [rbp-55h]
  __int64 v66; // [rsp+90h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-39h]
  __int128 v69; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v66 = a1;
  v63 = a4;
  v68 = a5;
  v65 = 0;
  v13 = 0;
  v64 = 0;
  v57 = 0;
  v61 = 0;
  v59 = 0;
  v62 = 0;
  v58 = 0;
  v60 = 0;
  v56 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v69 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v49 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v49 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        v50 = v49 == 0;
LABEL_95:
        if ( v50 )
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
          v45 = *(_QWORD *)a6 - *v32;
          if ( *(_QWORD *)a6 == *v32 )
            v45 = *(_QWORD *)(a6 + 8) - v32[1];
          if ( !v45 )
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
        v50 = CmIsRootEnumeratedDevice(a2) == 0;
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
                    v63,
                    0LL,
                    (__int64)&DEVPKEY_Device_ContainerId,
                    (__int64)&v58,
                    (__int64)&v69,
                    16,
                    (__int64)&v57,
                    0) < 0
          || v58 != 13
          || v57 != 16 )
        {
          return (unsigned int)-1073741811;
        }
        v51 = v69 - *(_QWORD *)&Guid.Data1;
        if ( (_QWORD)v69 == *(_QWORD *)&Guid.Data1 )
          v51 = *((_QWORD *)&v69 + 1) - *(_QWORD *)Guid.Data4;
        v34 = v51 == 0;
LABEL_43:
        if ( !v34 )
          return (unsigned int)-1073741811;
      }
    }
    goto LABEL_9;
  }
  v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v46 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
    v46 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  if ( !v46 && (!pszSrc || a9 != 4) )
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
          v56 = 1;
        }
        break;
      case 12:
        v47 = *(_QWORD *)a6 - v19;
        if ( *(_QWORD *)a6 == v19 )
          v47 = *(_QWORD *)(a6 + 8) - v18;
        if ( !v47 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        {
          v57 = 4;
          DeviceRegProp = CmGetDeviceRegProp(v66, (__int64)a2, v63, 11, (__int64)&v61, (__int64)&v59, (__int64)&v57, 0);
          if ( DeviceRegProp < 0 || v57 != 4 || v61 != 4 )
            v59 = 0;
          v62 = *(_DWORD *)pszSrc;
        }
        break;
      case 5:
        v39 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
        if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
          v39 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
        if ( !v39 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        {
          v57 = 4;
          ObjectProperty = PnpGetObjectProperty(
                             v66,
                             (__int64)a2,
                             1LL,
                             v63,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstallError,
                             (__int64)&v58,
                             (__int64)&v60,
                             4,
                             (__int64)&v57,
                             0);
          if ( ObjectProperty < 0 || v57 != 4 || v58 != 23 )
            v60 = 0;
          if ( a9 == 4 && a7 == 23 )
            v13 = *(_DWORD *)pszSrc;
        }
        break;
    }
  }
  v22 = v66;
  v23 = PnpSetObjectProperty(v66, (_DWORD)a2, a3, v68, a6, a7, (__int64)pszSrc, a9, a10);
  v24 = a3 - 1;
  if ( v24 )
  {
    if ( v24 == 2 && v23 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
    {
      v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
        v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
      if ( !v27 )
        CmUpdateDevicePanelInterface(v22, a2, v63);
    }
    goto LABEL_17;
  }
  v25 = *(_DWORD *)(a6 + 16);
  if ( v25 == 12 )
  {
    v48 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v48 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v48 && SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      LOBYTE(v54) = v23 >= 0;
      PiAuditDeviceEnableDisableRequest(&DestinationString, v59, v62, v54);
    }
    goto LABEL_17;
  }
  if ( v25 == 5 )
  {
    v40 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
      v40 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
    if ( !v40 && SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      if ( v60 == -536870328 )
      {
        if ( v13 == -536870328 )
          goto LABEL_17;
        v20 = 6;
      }
      else if ( v13 != -536870328 )
      {
        goto LABEL_17;
      }
      LOBYTE(v55) = v23 >= 0;
      PiAuditDeviceOperation(&DestinationString, v20, v55);
    }
  }
LABEL_17:
  if ( v56 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  return (unsigned int)v23;
}
