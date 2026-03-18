/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0055B20
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00532A0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C000C9F0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C00137F0 (UpdateMonitorDevices.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00521C8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00B8938 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00BFF00 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00D01D4 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00D01E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // rdi
  wchar_t *DeviceFromName; // rsi
  int v10; // r14d
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG v15; // eax
  struct _DEVICE_OBJECT *v16; // rax
  unsigned int *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rdx
  PDEVICE_OBJECT v20; // rcx
  char *v21; // rdi
  _OWORD *v22; // r9
  const wchar_t *v23; // r8
  ULONG v24; // r14d
  int PruneFlag; // eax
  char v26; // r8
  void *v27; // r12
  NTSTATUS v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // r14
  char *v31; // r12
  void *v32; // rsi
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  size_t v40; // rcx
  void *v41; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  ULONG v45; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int Length; // [rsp+40h] [rbp-1A8h]
  unsigned int Length_4; // [rsp+44h] [rbp-1A4h]
  PVOID v56; // [rsp+48h] [rbp-1A0h] BYREF
  struct _UNICODE_STRING *v57; // [rsp+50h] [rbp-198h]
  void *v58; // [rsp+58h] [rbp-190h]
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *v60; // [rsp+68h] [rbp-180h]
  int v61; // [rsp+70h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+78h] [rbp-170h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v64; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v58 = a4;
  v7 = a3;
  v61 = a3;
  v57 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  Length = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v10 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v56);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  LODWORD(v11) = 0;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v12[3] = a1;
  v64 = (unsigned int)v7;
  v12[4] = (unsigned int)v7;
  v12[5] = a4;
  Length_4 = a5;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    UpdateMonitorDevices();
    if ( a6 == 1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = (wchar_t *)DrvGetDeviceFromName(String1);
      if ( String1 )
        Win32FreePool(String1);
    }
    else
    {
      DeviceFromName = (wchar_t *)DrvGetDeviceFromName(a1);
    }
    if ( DeviceFromName && (unsigned int)v7 < *((_DWORD *)DeviceFromName + 54) )
    {
      if ( v56 )
        ObfDereferenceObject(v56);
      v56 = 0LL;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C024A9E8)(
                  *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                  *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                  &v56,
                  &DeviceObject) >= 0 )
        goto LABEL_13;
      v49 = WdLogNewEntry5_WdError(v37, v36, v38);
      WdLogEvent5_WdError(v49, v50);
    }
LABEL_65:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v56);
    return 3221225473LL;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_64;
  v15 = BufferLength;
  do
  {
    if ( a6
      && ((v13 = *((unsigned int *)DeviceFromName + 40), (v13 & 0x2000000) != 0)
       || (v14 = (unsigned __int16)gProtocolType, gProtocolType)
       && DeviceFromName[110] != gProtocolType
       && (v13 & 0x4000008) == 0) )
    {
      BufferLength = --v15;
    }
    else if ( v15 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v15;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_64:
    v35 = WdLogNewEntry5_WdTrace(v14, v13);
    WdLogEvent5_WdTrace(v35);
    goto LABEL_65;
  }
  if ( dword_1C024B240
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm()
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  P[0] = 0LL;
  v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( v16 && *((_QWORD *)DeviceFromName + 29) )
    goto LABEL_12;
  if ( v10 )
  {
    v16 = (struct _DEVICE_OBJECT *)::Object;
LABEL_12:
    DeviceObject = v16;
    goto LABEL_13;
  }
  v47 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
  if ( v47 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v47, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
      if ( Object )
        ObfDereferenceObject(Object);
      Object = DeviceObject;
    }
  }
  else
  {
    v48 = WdLogNewEntry5_WdTrace(0LL, v13);
    WdLogEvent5_WdTrace(v48);
  }
LABEL_13:
  v60 = 0LL;
  if ( a6 == 1 )
  {
    v17 = (unsigned int *)v58;
    if ( (unsigned __int64)v58 >= MmUserProbeAddress )
      v17 = (unsigned int *)MmUserProbeAddress;
    Length = *v17;
    v18 = Length;
    if ( Length > 0x348 )
      v18 = 840;
    Length = v18;
    v21 = (char *)PALLOCMEM2(v18, 1936876615LL, 1);
    v60 = v21;
    if ( !v21 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_54;
    }
  }
  else
  {
    v18 = 840;
    if ( *(_DWORD *)v58 < 0x348u )
      v18 = *(_DWORD *)v58;
    Length = v18;
    v21 = (char *)v58;
    v60 = v58;
    memset(v58, 0, v18);
  }
  if ( v18 >= 4 )
    *(_DWORD *)v21 = 4;
  if ( v18 >= 0x44 )
  {
    *(_DWORD *)v21 = 68;
    v22 = DeviceFromName + 32;
    v20 = (PDEVICE_OBJECT)(v21 + 4);
    if ( v57 )
    {
      swprintf_s((wchar_t *)v20, 0x20uLL, L"%ws\\Monitor%d", v22, v61);
    }
    else
    {
      *(_OWORD *)&v20->Type = *v22;
      *(_OWORD *)(v21 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v21 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v21 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v21 + 33) = 0;
  }
  if ( v18 >= 0x144 )
  {
    *(_DWORD *)v21 = 324;
    *((_WORD *)v21 + 34) = 0;
    if ( v57 || v10 )
    {
      if ( DeviceObject )
      {
        v24 = 256;
        v40 = 256LL;
        for ( BufferLength = 256; ; v40 = BufferLength )
        {
          v41 = PALLOCMEM2(v40, 1684301127LL, 0);
          if ( !v41 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_31;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v41,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool(v41);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, (const wchar_t *)v41, 0x7FuLL);
        Win32FreePool(v41);
        goto LABEL_31;
      }
    }
    else
    {
      v23 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v23 )
        wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, v23, 0x7FuLL);
    }
    v24 = 256;
LABEL_31:
    *((_WORD *)v21 + 161) = 0;
    goto LABEL_32;
  }
  v24 = 256;
LABEL_32:
  if ( v18 < 0x148 )
  {
    v26 = Length_4;
  }
  else
  {
    *(_DWORD *)v21 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v19 = *((unsigned int *)DeviceFromName + 40);
    if ( PruneFlag )
      LODWORD(v19) = v19 & 0xFFF7FFFF;
    else
      LODWORD(v19) = v19 | 0x80000;
    *((_DWORD *)DeviceFromName + 40) = v19;
    v26 = Length_4;
    if ( v57 )
    {
      v20 = (PDEVICE_OBJECT)(5 * v64);
      v19 = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v64) & 0xFFFFFFF;
      *((_DWORD *)v21 + 81) = v19;
    }
    else
    {
      v20 = (PDEVICE_OBJECT)((unsigned int)v19 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967));
      *((_DWORD *)v21 + 81) = (_DWORD)v20;
    }
  }
  if ( v18 < 0x248 )
  {
    v30 = -1LL;
    goto LABEL_50;
  }
  *(_DWORD *)v21 = 584;
  *((_WORD *)v21 + 164) = 0;
  if ( (v26 & 1) != 0 )
  {
    v20 = DeviceObject;
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v11 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        v51 = WdLogNewEntry5_WdTrace(v20, v19);
        *(_QWORD *)(v51 + 24) = v11;
        WdLogEvent5_WdTrace(v51);
        goto LABEL_54;
      }
    }
LABEL_102:
    v30 = -1LL;
    goto LABEL_49;
  }
  if ( !DeviceObject )
    goto LABEL_102;
  for ( BufferLength = 256; ; v24 = BufferLength )
  {
    v27 = 0LL;
    if ( v24 )
    {
      v27 = (void *)Win32AllocPool(v24, 0x64646547u);
      v24 = BufferLength;
    }
    if ( !v27 )
    {
      LODWORD(v11) = -1073741670;
      goto LABEL_132;
    }
    v28 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v24, v27, &BufferLength);
    if ( v28 != -1073741789 )
      break;
    Win32FreePool(v27);
  }
  if ( v28 )
  {
    Win32FreePool(v27);
LABEL_132:
    v30 = -1LL;
    goto LABEL_48;
  }
  v29 = 0;
  v30 = -1LL;
  if ( v57 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_WORD *)v27 + v43) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v43 + 2) )
      v29 = v43 + 1;
  }
  wcsncpy_s((wchar_t *)v21 + 164, 0x80uLL, (const wchar_t *)v27 + v29, 0x7FuLL);
  Win32FreePool(v27);
LABEL_48:
  if ( v57 )
  {
    *((_WORD *)v21 + 291) = 0;
    v44 = -1LL;
    do
      ++v44;
    while ( *(_WORD *)&v21[2 * v44 + 328] );
    v45 = v44 + 1;
    BufferLength = v45;
    if ( v45 < 0x7E )
    {
      *(_WORD *)&v21[2 * v45 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v21[2 * BufferLength + 328],
        &BufferLength);
    }
  }
LABEL_49:
  *((_WORD *)v21 + 291) = 0;
LABEL_50:
  if ( v18 >= 0x348 )
  {
    *(_DWORD *)v21 = 840;
    v31 = v21 + 584;
    *((_WORD *)v21 + 292) = 0;
    if ( v57 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v21 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v39 = -1LL;
        do
          ++v39;
        while ( *(_WORD *)&v31[2 * v39] );
        BufferLength = v39;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v39 + 584],
          128LL - (unsigned int)v39,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v39));
        do
          ++v30;
        while ( *(_WORD *)&v31[2 * v30] );
        BufferLength = v30;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v30 + 584],
          128LL - (unsigned int)v30,
          PropertyBuffer,
          (unsigned int)(127 - v30));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v21 + 584, 128, 0LL);
    }
    *((_WORD *)v21 + 419) = 0;
  }
LABEL_54:
  v32 = v58;
  if ( v21 != v58 )
  {
    if ( v21 )
    {
      ProbeForWrite(v58, v18, 4u);
      memmove(v32, v21, v18);
      Win32FreePool(v21);
    }
  }
  v33 = WdLogNewEntry5_WdTrace(v20, v19);
  *(_QWORD *)(v33 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v33);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v56);
  return (unsigned int)v11;
}
