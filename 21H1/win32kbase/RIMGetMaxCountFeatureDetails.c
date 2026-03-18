/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C0166A1C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0163F3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0164018 (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C01668FC (RIMGetFeatureReport.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C016BF8C (rimHidP_GetUsageValue.c)
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
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rdx
  __int64 v20; // r12
  __int64 QuadPart; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // r13d
  __int64 v25; // r13
  unsigned int *v26; // r12
  int UsageValue; // eax
  unsigned int v28; // ecx
  __int64 v29; // r14
  struct RIMDEV *v31; // [rsp+50h] [rbp-A1h] BYREF
  __int16 v32; // [rsp+58h] [rbp-99h] BYREF
  struct _DEVICE_OBJECT *v33; // [rsp+60h] [rbp-91h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-89h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-81h] BYREF
  __int64 v36; // [rsp+78h] [rbp-79h]
  __int64 v37; // [rsp+80h] [rbp-71h] BYREF
  __int64 v38; // [rsp+88h] [rbp-69h] BYREF
  __int64 v39; // [rsp+90h] [rbp-61h]
  __int64 v40; // [rsp+98h] [rbp-59h]
  char v41[80]; // [rsp+A0h] [rbp-51h] BYREF

  v40 = a2;
  v36 = a3;
  v31 = a1;
  v39 = a4;
  v33 = (struct _DEVICE_OBJECT *)a6;
  memset(v41, 0, 0x48uLL);
  v9 = 1;
  v32 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v41, (__int64)&v32, a4);
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
  v13 = v31;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
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
    v16 = RIMGetFeatureReport(v11, a5[4], v41[2], v33, a7);
    LODWORD(v31) = v16;
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
  v18 = KeQueryPerformanceCounter(0LL);
  v20 = v36;
  QuadPart = v18.QuadPart;
  if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
  {
    v23 = QuadPart - PerformanceCounter.QuadPart;
    v24 = (int)v31;
    Interval.QuadPart = i + 1;
    v33 = *(struct _DEVICE_OBJECT **)(v20 + 328);
    v37 = *(int *)(v20 + 904);
    v38 = *(int *)(v20 + 24);
    PerformanceCounter.QuadPart = (unsigned int)(1000 * v23 / gliQpcFreq.QuadPart);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      PerformanceCounter.QuadPart,
      byte_1C021BFC6,
      v23,
      v22,
      (__int64)&v38,
      (__int64)&v37,
      (const WCHAR **)&v33,
      (__int64)&PerformanceCounter,
      (__int64)&Interval,
      (__int64)&v31);
  }
  else
  {
    v24 = (int)v31;
  }
  if ( v24 )
    goto LABEL_19;
  v25 = v39;
  v26 = (unsigned int *)(v20 + 720);
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, (__int64)v26, v39, (__int64)v11, (unsigned __int16)a5[4]);
  SpecificValueCaps = UsageValue;
  if ( UsageValue < 0 || (v28 = *v26) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19.LowPart) = 3;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        v19.LowPart,
        1,
        33,
        (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids,
        UsageValue);
    }
    SpecificValueCaps = -1073741668;
    v19.QuadPart = 5LL;
    goto LABEL_30;
  }
  if ( v28 <= 0x100 )
  {
    v19.QuadPart = 5LL;
    if ( *a5 == 5 )
    {
      *v26 = v28 + 1;
    }
    else if ( *(_DWORD *)(v40 + 532) + v28 > 0xA00 )
    {
      goto LABEL_19;
    }
LABEL_30:
    if ( SpecificValueCaps >= 0 && *a5 == 5 )
    {
      v29 = v36;
      LODWORD(v31) = 0;
      *(_DWORD *)(v36 + 904) = 3;
      SpecificValueCaps = rimHidP_GetUsageValue(2, 13, 0, 89, (__int64)&v31, v25, (__int64)v11, (unsigned __int16)a5[4]);
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v29 + 904) = (((unsigned __int8)v31 & 1) != 0) + 1;
    }
    goto LABEL_36;
  }
LABEL_19:
  SpecificValueCaps = -1073741668;
LABEL_36:
  if ( v11 )
    Win32FreePool((__int64)v11, v19.QuadPart, QuadPart);
  return (unsigned int)SpecificValueCaps;
}
