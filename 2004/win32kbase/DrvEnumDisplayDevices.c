/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0094400
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00B4930 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0058C78 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C005FBA0 (DrvpGetDeviceInterfaceName.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     DrvGetDeviceFromName @ 0x1C00A5CD0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00A657C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C00B3A10 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00D057C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00D058C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
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
  unsigned int v31; // r8d
  __int64 v32; // r14
  char *v33; // r12
  void *v34; // rsi
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  size_t v39; // rcx
  void *v40; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  ULONG v44; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int Length; // [rsp+40h] [rbp-1A8h]
  unsigned int Length_4; // [rsp+44h] [rbp-1A4h]
  PVOID v55; // [rsp+48h] [rbp-1A0h] BYREF
  struct _UNICODE_STRING *v56; // [rsp+50h] [rbp-198h]
  void *v57; // [rsp+58h] [rbp-190h]
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *v59; // [rsp+68h] [rbp-180h]
  int v60; // [rsp+70h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+78h] [rbp-170h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v63; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v57 = a4;
  v7 = a3;
  v60 = a3;
  v56 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  Length = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v10 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  LODWORD(v11) = 0;
  v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14);
  v15[3] = a1;
  v63 = (unsigned int)v7;
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
      if ( v55 )
        ObfDereferenceObject(v55);
      v55 = 0LL;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C024C9E8)(
                  *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                  *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                  &v55,
                  &DeviceObject) >= 0 )
        goto LABEL_13;
      v49 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v49);
    }
LABEL_65:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
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
    v37 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v37);
    goto LABEL_65;
  }
  if ( dword_1C024D230
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C024D240
    && (PVOID)PsGetCurrentProcess(65533LL, v16) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm(v47)
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
    v18 = (struct _DEVICE_OBJECT *)qword_1C024D240;
LABEL_12:
    DeviceObject = v18;
    goto LABEL_13;
  }
  v46 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
  if ( v46 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v46, (struct _DEVICE_RELATIONS **)P) >= 0 )
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
    v48 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v48);
  }
LABEL_13:
  v59 = 0LL;
  if ( a6 == 1 )
  {
    v19 = (unsigned int *)v57;
    if ( (unsigned __int64)v57 >= MmUserProbeAddress )
      v19 = (unsigned int *)MmUserProbeAddress;
    Length = *v19;
    v20 = Length;
    if ( Length > 0x348 )
      v20 = 840;
    Length = v20;
    v22 = (char *)PALLOCMEM2(v20, 0x73726447u, 1);
    v59 = v22;
    if ( !v22 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_54;
    }
  }
  else
  {
    v20 = 840;
    if ( *(_DWORD *)v57 < 0x348u )
      v20 = *(_DWORD *)v57;
    Length = v20;
    v22 = (char *)v57;
    v59 = v57;
    memset(v57, 0, v20);
  }
  if ( v20 >= 4 )
    *(_DWORD *)v22 = 4;
  if ( v20 >= 0x44 )
  {
    *(_DWORD *)v22 = 68;
    v23 = DeviceFromName + 32;
    v24 = (wchar_t *)(v22 + 4);
    if ( v56 )
    {
      swprintf_s(v24, 0x20uLL, L"%ws\\Monitor%d", v23, v60);
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
    if ( v56 || v10 )
    {
      if ( DeviceObject )
      {
        v26 = 256;
        v39 = 256LL;
        for ( BufferLength = 256; ; v39 = BufferLength )
        {
          v40 = PALLOCMEM2(v39, 0x64646547u, 0);
          if ( !v40 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_31;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v40,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool(v40);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, (const wchar_t *)v40, 0x7FuLL);
        Win32FreePool(v40);
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
    if ( v56 )
    {
      v21 = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v63) & 0xFFFFFFF;
      *((_DWORD *)v22 + 81) = v21;
    }
    else
    {
      *((_DWORD *)v22 + 81) = v21 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967);
    }
  }
  if ( v20 < 0x248 )
  {
    v32 = -1LL;
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
        v50 = WdLogNewEntry5_WdTrace();
        *(_QWORD *)(v50 + 24) = v11;
        WdLogEvent5_WdTrace(v50);
        goto LABEL_54;
      }
    }
LABEL_102:
    v32 = -1LL;
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
    Win32FreePool(v29);
  }
  if ( v30 )
  {
    Win32FreePool(v29);
LABEL_132:
    v32 = -1LL;
    goto LABEL_48;
  }
  v31 = 0;
  v32 = -1LL;
  if ( v56 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_WORD *)v29 + v42) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v42 + 2) )
      v31 = v42 + 1;
  }
  wcsncpy_s((wchar_t *)v22 + 164, 0x80uLL, (const wchar_t *)v29 + v31, 0x7FuLL);
  Win32FreePool(v29);
LABEL_48:
  if ( v56 )
  {
    *((_WORD *)v22 + 291) = 0;
    v43 = -1LL;
    do
      ++v43;
    while ( *(_WORD *)&v22[2 * v43 + 328] );
    v44 = v43 + 1;
    BufferLength = v44;
    if ( v44 < 0x7E )
    {
      *(_WORD *)&v22[2 * v44 + 326] = 92;
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
    v33 = v22 + 584;
    *((_WORD *)v22 + 292) = 0;
    if ( v56 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v22 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v38 = -1LL;
        do
          ++v38;
        while ( *(_WORD *)&v33[2 * v38] );
        BufferLength = v38;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v38 + 584],
          128LL - (unsigned int)v38,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v38));
        do
          ++v32;
        while ( *(_WORD *)&v33[2 * v32] );
        BufferLength = v32;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v32 + 584],
          128LL - (unsigned int)v32,
          PropertyBuffer,
          (unsigned int)(127 - v32));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v22 + 584, 128, 0LL);
    }
    *((_WORD *)v22 + 419) = 0;
  }
LABEL_54:
  v34 = v57;
  if ( v22 != v57 )
  {
    if ( v22 )
    {
      ProbeForWrite(v57, v20, 4u);
      memmove(v34, v22, v20);
      Win32FreePool(v22);
    }
  }
  v35 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v35 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v35);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
  return (unsigned int)v11;
}
