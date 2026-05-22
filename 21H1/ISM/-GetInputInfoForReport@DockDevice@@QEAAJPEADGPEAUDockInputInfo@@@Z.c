/*
 * XREFs of ?GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z @ 0x18009E294
 * Callers:
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009C080 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800894A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DockDevice::GetInputInfoForReport(
        DockDevice *this,
        char *a2,
        unsigned __int16 a3,
        LARGE_INTEGER *a4)
{
  ULONG ReportLength; // r12d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  __int64 v9; // rbx
  NTSTATUS UsageValueArray; // eax
  __int64 v11; // rdx
  LARGE_INTEGER v13; // rax
  signed int v14; // ecx
  signed int v15; // ecx
  signed int v16; // edx
  signed int v17; // ecx
  signed int v18; // edx
  signed int v19; // ecx
  ULONG UsageLength; // [rsp+50h] [rbp-20h] BYREF
  CHAR UsageValue[8]; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  USHORT UsageList; // [rsp+B0h] [rbp+40h] BYREF
  ULONG v25; // [rsp+C8h] [rbp+58h] BYREF

  a4->HighPart = *((_DWORD *)this + 10);
  a4->LowPart = 0x100000;
  a4[3].LowPart = 80;
  ReportLength = a3;
  a4[1].LowPart = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  a4[2] = PerformanceCount;
  a4[4].LowPart = a4->HighPart;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v9 = *((_QWORD *)this + 4);
  v25 = 0;
  if ( *(_BYTE *)(v9 + 1662) )
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(HidP_Input, 1u, 0, 0xD0u, UsageValue, 8u, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 246LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v13 = *(LARGE_INTEGER *)UsageValue;
  }
  else
  {
    UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD0u, &v25, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 260LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v13.QuadPart = v25;
  }
  a4[5] = v13;
  UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD1u, &v25, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 273LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOWORD(a4[6].LowPart) = v25;
  UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD2u, &v25, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 285LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOWORD(a4[7].LowPart) = v25;
  UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD3u, &v25, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 297LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  HIWORD(a4[7].u.LowPart) = v25;
  UsageList = 0;
  UsageLength = 1;
  UsageValueArray = HidP_GetUsages(HidP_Input, 1u, 0, &UsageList, &UsageLength, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 311LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  BYTE4(a4[7].QuadPart) = UsageList == 212;
  if ( *(_BYTE *)(v9 + 1663) )
  {
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v9 + 1664),
                        0x30u,
                        &v25,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 327LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v14 = *(_DWORD *)(v9 + 1676);
    if ( v14 >= (int)v25 )
    {
      v14 = v25;
      if ( (signed int)v25 < *(_DWORD *)(v9 + 1668) )
        v14 = *(_DWORD *)(v9 + 1668);
    }
    a4[8].LowPart = v14;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v9 + 1664),
                        0x31u,
                        &v25,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 342LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v15 = *(_DWORD *)(v9 + 1680);
    if ( v15 >= (int)v25 )
    {
      v15 = v25;
      if ( (signed int)v25 < *(_DWORD *)(v9 + 1672) )
        v15 = *(_DWORD *)(v9 + 1672);
    }
    a4[8].HighPart = v15;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v9 + 1664),
                        0x48u,
                        &v25,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 357LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v16 = v25 + a4[8].LowPart;
    v17 = *(_DWORD *)(v9 + 1676);
    if ( v17 >= v16 )
    {
      v17 = v25 + a4[8].LowPart;
      if ( v16 < *(_DWORD *)(v9 + 1668) )
        v17 = *(_DWORD *)(v9 + 1668);
    }
    a4[9].LowPart = v17;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v9 + 1664),
                        0x49u,
                        &v25,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 372LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v18 = v25 + a4[8].HighPart;
    v19 = *(_DWORD *)(v9 + 1680);
    if ( v19 >= v18 )
    {
      v19 = v25 + a4[8].HighPart;
      if ( v18 < *(_DWORD *)(v9 + 1672) )
        v19 = *(_DWORD *)(v9 + 1672);
    }
    a4[9].HighPart = v19;
  }
  return 0LL;
}
