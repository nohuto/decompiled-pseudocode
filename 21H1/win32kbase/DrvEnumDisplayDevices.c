/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0091330
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0093220 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C002B5D0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C004AF88 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C0052060 (DrvpGetDeviceInterfaceName.c)
 *     DrvGetDeviceFromName @ 0x1C006A270 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00CFB7C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00CFB8C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  ULONG v17; // eax
  struct _DEVICE_OBJECT *v18; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // rdx
  char *v22; // rdi
  _OWORD *v23; // r9
  wchar_t *v24; // rcx
  const wchar_t *v25; // r8
  ULONG v26; // r14d
  int PruneFlag; // eax
  __int64 v28; // r8
  void *v29; // r12
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // r8d
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  char *v37; // r12
  void *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  size_t v47; // rcx
  void *v48; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rax
  ULONG v54; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int Length; // [rsp+40h] [rbp-1A8h]
  unsigned int Length_4; // [rsp+44h] [rbp-1A4h]
  PVOID v66; // [rsp+48h] [rbp-1A0h] BYREF
  struct _UNICODE_STRING *v67; // [rsp+50h] [rbp-198h]
  void *v68; // [rsp+58h] [rbp-190h]
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *v70; // [rsp+68h] [rbp-180h]
  int v71; // [rsp+70h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+78h] [rbp-170h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v74; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v68 = a4;
  v7 = a3;
  v71 = a3;
  v67 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  Length = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v10 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v66);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  LODWORD(v11) = 0;
  v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14);
  v15[3] = a1;
  v74 = (unsigned int)v7;
  v15[4] = (unsigned int)v7;
  v15[5] = a4;
  Length_4 = a5;
  v15[6] = a5;
  WdLogEvent5_WdEvent(v15);
  if ( a1 )
  {
    UpdateMonitorDevices();
    if ( a6 == 1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = DrvGetDeviceFromName(String1);
      if ( String1 )
        Win32FreePool((__int64)String1, v44, v45);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( DeviceFromName && (unsigned int)v7 < *((_DWORD *)DeviceFromName + 54) )
    {
      if ( v66 )
        ObfDereferenceObject(v66);
      v66 = 0LL;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0252A08)(
                  *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                  *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                  &v66,
                  &DeviceObject) >= 0 )
        goto LABEL_13;
      v60 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v60);
    }
LABEL_65:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v66);
    return 3221225473LL;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_64;
  v17 = BufferLength;
  do
  {
    if ( a6
      && ((v16 = *((unsigned int *)DeviceFromName + 40), (v16 & 0x2000000) != 0)
       || gProtocolType && DeviceFromName[110] != gProtocolType && (v16 & 0x4000008) == 0) )
    {
      BufferLength = --v17;
    }
    else if ( v17 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v17;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_64:
    v43 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v43);
    goto LABEL_65;
  }
  if ( dword_1C0253240
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C0253250
    && (PVOID)PsGetCurrentProcess(65533LL, v16) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v58, v57)
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  P[0] = 0LL;
  v18 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( v18 && *((_QWORD *)DeviceFromName + 29) )
    goto LABEL_12;
  if ( v10 )
  {
    v18 = (struct _DEVICE_OBJECT *)qword_1C0253250;
LABEL_12:
    DeviceObject = v18;
    goto LABEL_13;
  }
  v56 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
  if ( v56 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v56, (struct _DEVICE_RELATIONS **)P) >= 0 )
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
    v59 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v59);
  }
LABEL_13:
  v70 = 0LL;
  if ( a6 == 1 )
  {
    v19 = (unsigned int *)v68;
    if ( (unsigned __int64)v68 >= MmUserProbeAddress )
      v19 = (unsigned int *)MmUserProbeAddress;
    Length = *v19;
    v20 = Length;
    if ( Length > 0x348 )
      v20 = 840;
    Length = v20;
    v22 = (char *)PALLOCMEM2(v20, 0x73726447u, 1);
    v70 = v22;
    if ( !v22 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_54;
    }
  }
  else
  {
    v20 = 840;
    if ( *(_DWORD *)v68 < 0x348u )
      v20 = *(_DWORD *)v68;
    Length = v20;
    v22 = (char *)v68;
    v70 = v68;
    memset(v68, 0, v20);
  }
  if ( v20 >= 4 )
    *(_DWORD *)v22 = 4;
  if ( v20 >= 0x44 )
  {
    *(_DWORD *)v22 = 68;
    v23 = DeviceFromName + 32;
    v24 = (wchar_t *)(v22 + 4);
    if ( v67 )
    {
      swprintf_s(v24, 0x20uLL, L"%ws\\Monitor%d", v23, v71);
    }
    else
    {
      *(_OWORD *)v24 = *v23;
      *(_OWORD *)(v22 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v22 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v22 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v22 + 33) = 0;
  }
  if ( v20 >= 0x144 )
  {
    *(_DWORD *)v22 = 324;
    *((_WORD *)v22 + 34) = 0;
    if ( v67 || v10 )
    {
      if ( DeviceObject )
      {
        v26 = 256;
        v47 = 256LL;
        for ( BufferLength = 256; ; v47 = BufferLength )
        {
          v48 = PALLOCMEM2(v47, 0x64646547u, 0);
          if ( !v48 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_31;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v48,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool((__int64)v48, v50, v51);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, (const wchar_t *)v48, 0x7FuLL);
        Win32FreePool((__int64)v48, v50, v51);
        goto LABEL_31;
      }
    }
    else
    {
      v25 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v25 )
        wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, v25, 0x7FuLL);
    }
    v26 = 256;
LABEL_31:
    *((_WORD *)v22 + 161) = 0;
    goto LABEL_32;
  }
  v26 = 256;
LABEL_32:
  if ( v20 < 0x148 )
  {
    v28 = Length_4;
  }
  else
  {
    *(_DWORD *)v22 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v21 = *((unsigned int *)DeviceFromName + 40);
    if ( PruneFlag )
      LODWORD(v21) = v21 & 0xFFF7FFFF;
    else
      LODWORD(v21) = v21 | 0x80000;
    *((_DWORD *)DeviceFromName + 40) = v21;
    v28 = Length_4;
    if ( v67 )
    {
      v21 = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v74) & 0xFFFFFFF;
      *((_DWORD *)v22 + 81) = v21;
    }
    else
    {
      *((_DWORD *)v22 + 81) = v21 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967);
    }
  }
  if ( v20 < 0x248 )
  {
    v34 = -1LL;
    goto LABEL_50;
  }
  *(_DWORD *)v22 = 584;
  *((_WORD *)v22 + 164) = 0;
  if ( (v28 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject, v21, v28, (wchar_t *)v22 + 164);
      v11 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        v61 = WdLogNewEntry5_WdTrace();
        *(_QWORD *)(v61 + 24) = v11;
        WdLogEvent5_WdTrace(v61);
        goto LABEL_54;
      }
    }
LABEL_102:
    v34 = -1LL;
    goto LABEL_49;
  }
  if ( !DeviceObject )
    goto LABEL_102;
  for ( BufferLength = 256; ; v26 = BufferLength )
  {
    v29 = 0LL;
    if ( v26 )
    {
      v29 = (void *)Win32AllocPool(v26, 0x64646547u);
      v26 = BufferLength;
    }
    if ( !v29 )
    {
      LODWORD(v11) = -1073741670;
      goto LABEL_132;
    }
    v30 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v26, v29, &BufferLength);
    if ( v30 != -1073741789 )
      break;
    Win32FreePool((__int64)v29, v31, v32);
  }
  if ( v30 )
  {
    Win32FreePool((__int64)v29, v31, v32);
LABEL_132:
    v34 = -1LL;
    goto LABEL_48;
  }
  v33 = 0;
  v34 = -1LL;
  if ( v67 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *((_WORD *)v29 + v52) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v52 + 2) )
      v33 = v52 + 1;
  }
  wcsncpy_s((wchar_t *)v22 + 164, 0x80uLL, (const wchar_t *)v29 + v33, 0x7FuLL);
  Win32FreePool((__int64)v29, v35, v36);
LABEL_48:
  if ( v67 )
  {
    *((_WORD *)v22 + 291) = 0;
    v53 = -1LL;
    do
      ++v53;
    while ( *(_WORD *)&v22[2 * v53 + 328] );
    v54 = v53 + 1;
    BufferLength = v54;
    if ( v54 < 0x7E )
    {
      *(_WORD *)&v22[2 * v54 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v22[2 * BufferLength + 328],
        &BufferLength);
    }
  }
LABEL_49:
  *((_WORD *)v22 + 291) = 0;
LABEL_50:
  if ( v20 >= 0x348 )
  {
    *(_DWORD *)v22 = 840;
    v37 = v22 + 584;
    *((_WORD *)v22 + 292) = 0;
    if ( v67 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v22 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v46 = -1LL;
        do
          ++v46;
        while ( *(_WORD *)&v37[2 * v46] );
        BufferLength = v46;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v46 + 584],
          128LL - (unsigned int)v46,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v46));
        do
          ++v34;
        while ( *(_WORD *)&v37[2 * v34] );
        BufferLength = v34;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v34 + 584],
          128LL - (unsigned int)v34,
          PropertyBuffer,
          (unsigned int)(127 - v34));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3, 0LL, (wchar_t *)v22 + 292, 0x80u, 0LL);
    }
    *((_WORD *)v22 + 419) = 0;
  }
LABEL_54:
  v38 = v68;
  if ( v22 != v68 )
  {
    if ( v22 )
    {
      ProbeForWrite(v68, v20, 4u);
      memmove(v38, v22, v20);
      Win32FreePool((__int64)v22, v39, v40);
    }
  }
  v41 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v41 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v41);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v66);
  return (unsigned int)v11;
}
