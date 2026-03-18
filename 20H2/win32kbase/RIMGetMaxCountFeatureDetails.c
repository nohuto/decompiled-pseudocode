/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C015E16C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015B68C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015B768 (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C015E04C (RIMGetFeatureReport.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C01636DC (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        const WCHAR *a6,
        struct _FILE_OBJECT *a7)
{
  unsigned int v9; // r13d
  int SpecificValueCaps; // ebx
  union _LARGE_INTEGER *v11; // rdi
  int v12; // edx
  struct RIMDEV *v13; // r12
  unsigned int i; // ebx
  int v15; // edx
  NTSTATUS v16; // eax
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // r13d
  __int64 v23; // r13
  unsigned int *v24; // r12
  int UsageValue; // eax
  int v26; // edx
  unsigned int v27; // ecx
  __int64 v28; // r14
  struct RIMDEV *v30; // [rsp+50h] [rbp-A1h] BYREF
  __int16 v31; // [rsp+58h] [rbp-99h] BYREF
  struct _DEVICE_OBJECT *v32; // [rsp+60h] [rbp-91h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-89h] BYREF
  __int64 QuadPart; // [rsp+70h] [rbp-81h] BYREF
  __int64 v35; // [rsp+78h] [rbp-79h]
  __int64 v36; // [rsp+80h] [rbp-71h] BYREF
  __int64 v37; // [rsp+88h] [rbp-69h] BYREF
  __int64 v38; // [rsp+90h] [rbp-61h]
  __int64 v39; // [rsp+98h] [rbp-59h]
  char v40[80]; // [rsp+A0h] [rbp-51h] BYREF

  v39 = a2;
  v35 = a3;
  v30 = a1;
  v38 = a4;
  v32 = (struct _DEVICE_OBJECT *)a6;
  memset(v40, 0, 0x48uLL);
  v9 = 1;
  v31 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v40, (__int64)&v31, a4);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v11 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a5[4], 0x69667352u);
  memset(v11, 0, (unsigned __int16)a5[4]);
  if ( !v11 )
  {
    SpecificValueCaps = -1073741668;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SpecificValueCaps;
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 34, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a3 + 24) == 7 )
    v9 = 10;
  v13 = v30;
  QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
  for ( i = 0; i < v9; ++i )
  {
    InputTraceLogging::RIM::GetMaxCount(v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v15,
        1,
        31,
        (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids,
        (char)v13);
    }
    v16 = RIMGetFeatureReport(v11, a5[4], v40[2], v32, a7);
    LODWORD(v30) = v16;
    if ( !v16 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v17, 1, 32, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v16);
    }
    if ( i < v9 - 1 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
    }
  }
  KeQueryPerformanceCounter(0LL);
  v18 = v35;
  if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
  {
    v21 = v19 - QuadPart;
    v22 = (int)v30;
    Interval.QuadPart = i + 1;
    v32 = *(struct _DEVICE_OBJECT **)(v18 + 328);
    v36 = *(int *)(v18 + 904);
    v37 = *(int *)(v18 + 24);
    QuadPart = (unsigned int)(1000 * v21 / gliQpcFreq.QuadPart);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      QuadPart,
      byte_1C02145BF,
      v21,
      v20,
      (__int64)&v37,
      (__int64)&v36,
      (const WCHAR **)&v32,
      (__int64)&QuadPart,
      (__int64)&Interval,
      (__int64)&v30);
  }
  else
  {
    v22 = (int)v30;
  }
  if ( v22 )
    goto LABEL_19;
  v23 = v38;
  v24 = (unsigned int *)(v18 + 720);
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, (__int64)v24, v38, (__int64)v11, (unsigned __int16)a5[4]);
  SpecificValueCaps = UsageValue;
  if ( UsageValue < 0 || (v27 = *v24) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 3;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        v26,
        1,
        33,
        (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids,
        UsageValue);
    }
    SpecificValueCaps = -1073741668;
    goto LABEL_30;
  }
  if ( v27 <= 0x100 )
  {
    if ( *a5 == 5 )
    {
      *v24 = v27 + 1;
    }
    else if ( *(_DWORD *)(v39 + 532) + v27 > 0xA00 )
    {
      goto LABEL_19;
    }
LABEL_30:
    if ( SpecificValueCaps >= 0 && *a5 == 5 )
    {
      v28 = v35;
      LODWORD(v30) = 0;
      *(_DWORD *)(v35 + 904) = 3;
      SpecificValueCaps = rimHidP_GetUsageValue(2, 13, 0, 89, (__int64)&v30, v23, (__int64)v11, (unsigned __int16)a5[4]);
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v28 + 904) = (((unsigned __int8)v30 & 1) != 0) + 1;
    }
    goto LABEL_36;
  }
LABEL_19:
  SpecificValueCaps = -1073741668;
LABEL_36:
  if ( v11 )
    Win32FreePool((__int64)v11);
  return (unsigned int)SpecificValueCaps;
}
