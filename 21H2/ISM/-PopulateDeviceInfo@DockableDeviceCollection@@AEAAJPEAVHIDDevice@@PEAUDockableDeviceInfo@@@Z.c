/*
 * XREFs of ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x18009C828
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C580 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180090C60 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x18009C4A4 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CEFC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall DockableDeviceCollection::PopulateDeviceInfo(
        DockableDeviceCollection *this,
        struct HIDDevice *a2,
        struct DockableDeviceInfo *a3)
{
  __int64 v3; // r12
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  NTSTATUS HIDCapabilities; // ebx
  __int64 v13; // rdx
  ULONG ReportLength; // r15d
  CHAR *Report; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  const struct std::nothrow_t *v20; // rdx
  NTSTATUS UsageValueArray; // eax
  __int64 v22; // rdx
  ULONG v23; // [rsp+50h] [rbp-89h] BYREF
  USHORT ValueCapsLength; // [rsp+54h] [rbp-85h] BYREF
  PCHAR v25; // [rsp+58h] [rbp-81h] BYREF
  int v26; // [rsp+60h] [rbp-79h] BYREF
  CHAR UsageValue[8]; // [rsp+68h] [rbp-71h] BYREF
  __int128 v28; // [rsp+70h] [rbp-69h] BYREF
  __int128 v29; // [rsp+80h] [rbp-59h]
  __int64 v30; // [rsp+90h] [rbp-49h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v3 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)this + 10);
  v28 = 0LL;
  LODWORD(v28) = 4;
  v29 = 0LL;
  v30 = 0LL;
  v8 = RIMGetDeviceProperties(v7, v3, &v28);
  if ( v8 >= 0 )
  {
    if ( DWORD2(v28) <= 0x104 )
    {
      *((_DWORD *)a3 + 18) = DWORD2(v28);
      v9 = *((_QWORD *)this + 10);
      *(_QWORD *)&v29 = (char *)a3 + 76;
      v10 = RIMGetDeviceProperties(v9, v3, &v28);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          153LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v8);
  }
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v25 = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, (struct _HIDP_CAPS **)&v25);
  if ( HIDCapabilities < 0 )
  {
    v13 = 163LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  HIDCapabilities = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, &ValueCapsLength, PreparsedData);
  if ( HIDCapabilities < 0 )
  {
    v13 = 175LL;
    goto LABEL_8;
  }
  ReportLength = *((unsigned __int16 *)v25 + 4);
  std::make_unique<unsigned char [0],0>(&v25, *((unsigned __int16 *)v25 + 4));
  Report = v25;
  *v25 = ValueCaps.ReportID;
  v17 = *((_QWORD *)this + 10);
  v26 = 0;
  v18 = NtRIMDeviceIoControl(v17, v3, 721298LL, 0LL, 0, Report, ReportLength, &v26, 0);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(
                        HidP_Feature,
                        1u,
                        0,
                        0xD0u,
                        UsageValue,
                        8u,
                        PreparsedData,
                        Report,
                        ReportLength);
    if ( UsageValueArray >= 0 )
    {
      v23 = 0;
      *((_QWORD *)a3 + 194) = *(_QWORD *)UsageValue;
      UsageValueArray = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD1u, &v23, PreparsedData, Report, ReportLength);
      if ( UsageValueArray >= 0 )
      {
        *((_WORD *)a3 + 780) = v23;
        UsageValueArray = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD2u, &v23, PreparsedData, Report, ReportLength);
        if ( UsageValueArray >= 0 )
        {
          *((_WORD *)a3 + 784) = v23;
          UsageValueArray = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD3u, &v23, PreparsedData, Report, ReportLength);
          if ( UsageValueArray >= 0 )
          {
            v19 = 0;
            *((_WORD *)a3 + 785) = v23;
            goto LABEL_23;
          }
          v22 = 245LL;
        }
        else
        {
          v22 = 233LL;
        }
      }
      else
      {
        v22 = 221LL;
      }
    }
    else
    {
      v22 = 208LL;
    }
    v19 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v22,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
            (const char *)(unsigned int)UsageValueArray);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v18);
  }
LABEL_23:
  operator delete(Report, v20);
  return v19;
}
