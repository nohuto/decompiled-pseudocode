/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18009DA88
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18009D478 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x18009D658 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800BB300 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801295E4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1801298F4 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180129A6C (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // r14
  GazeHidParser *v3; // rsi
  int CalibratedRegion; // eax
  int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  int PropertyValue; // eax
  unsigned int *v10; // r9
  int AdapterAndTargetFromEdid; // eax
  int v12; // eax
  char *v14; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+Fh] BYREF
  int v16; // [rsp+64h] [rbp+13h] BYREF
  char **v17; // [rsp+68h] [rbp+17h]
  char v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h] BYREF
  __int16 v20; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14 = 0LL;
  v15 = 0;
  v17 = &v14;
  v18 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 1552));
  v5 = CalibratedRegion;
  if ( CalibratedRegion >= 0 )
  {
    v5 = GazeHidParser::CreateReportForProperty(v3, 3LL, &v14, &v15);
    if ( v5 >= 0 )
    {
      v16 = 0;
      v7 = v15;
      v8 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v14, v15, &v16, 0);
      if ( v8 >= 0 )
      {
        v19 = 0LL;
        v20 = 0;
        PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, v14, v7, 2, &v19, 10);
        if ( PropertyValue < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            219LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)PropertyValue);
        AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                                     (DisplayEdidHelpers *)&v19,
                                     (const struct EdidIdentificationBlock *)(v2 + 1572),
                                     (struct _LUID *)(v2 + 1580),
                                     v10);
        if ( AdapterAndTargetFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            223LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)AdapterAndTargetFromEdid);
        v12 = GazeHidParser::GetCalibratedRegion(v3, v14, v7, (struct tagRECT *)(v2 + 1552));
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            230LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)v12);
        v5 = 0;
      }
      else
      {
        v5 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xD1,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v8);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
  }
  if ( v14 )
    operator delete(v14, v6);
  return (unsigned int)v5;
}
