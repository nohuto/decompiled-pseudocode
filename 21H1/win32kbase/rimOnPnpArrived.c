/*
 * XREFs of rimOnPnpArrived @ 0x1C0059E98
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C015E340 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_qqS @ 0x1C0056ADC (WPP_RECORDER_SF_qqS.c)
 *     RIMQueryDev @ 0x1C0059780 (RIMQueryDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0059E2C (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C005A3DC (RIMCloseDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C005A46C (RIMDeliverDeviceResetRequest.c)
 *     RIMOpenDev @ 0x1C005A5A8 (RIMOpenDev.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     RIMHidTLCActive @ 0x1C00A307C (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0174348 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C0174524 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_dqqS @ 0x1C01758AC (WPP_RECORDER_SF_dqqS.c)
 *     RIMIsTestSigningOn @ 0x1C0187974 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  const union _LARGE_INTEGER *v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r15d
  struct _DRIVER_OBJECT *v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // eax
  bool v16; // zf
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx
  int v25; // ecx
  NTSTATUS v26; // ebx
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r8
  PVOID v30; // r15
  struct _DRIVER_OBJECT *v31; // rdx
  NTSTATUS v32; // eax
  int v33; // r9d
  void *v34; // rcx
  __int64 v35; // rcx
  void *v36; // rcx
  __int64 v37; // rdx
  void *v38; // rcx
  int v39; // ebx
  __int64 v40; // rcx
  void *v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-69h]
  int v45; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v47; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v48[6]; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  int v50; // [rsp+98h] [rbp+Fh]

  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 16, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    v6 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  }
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) == 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(v4 + 48);
    if ( (_BYTE)v6 != 3 )
    {
      if ( a3 == (void *)-1LL )
      {
        v48[0] = 48LL;
        v7 = 2;
        v48[2] = v4 + 208;
        v48[3] = 512LL;
        v48[5] = &Handle;
        v8 = 1048577;
        v50 = 257;
        v48[1] = 0LL;
        v48[4] = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v6 == 2 )
        {
          v8 = 1048579;
          if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
          {
            v7 = (unsigned int)RIMIsTestSigningOn(v6, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v18 = *(_QWORD *)(v4 + 480);
            if ( !v18 || *(_DWORD *)(v18 + 24) == 6 )
            {
              v7 = 3;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqS((__int64)v6, 512LL, (__int64)a3, 0x14u, v44, a1, v4, *(const wchar_t **)(v4 + 216));
            }
          }
        }
        v12 = RIMOpenDev(v4, v48, v8, v7);
      }
      else
      {
        Handle = 0LL;
        v12 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v4 + 232) = Handle;
        if ( v12 < 0 )
          goto LABEL_67;
        *(_DWORD *)(v4 + 184) |= 0x10000u;
        *(_QWORD *)(v4 + 224) = a3;
      }
      if ( v12 < 0 )
        goto LABEL_67;
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v12 = RIMQueryDev(a1, v4);
      if ( v12 < 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
      {
        v13 = *(struct _DRIVER_OBJECT **)(a1 + 120);
        if ( !v13 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
          v13 = *(struct _DRIVER_OBJECT **)(a1 + 120);
        }
        v12 = RIMRegisterForDeviceChangeNotifications(v4, v13, v10, (void *)v4, (PVOID *)(v4 + 248));
        if ( v12 < 0 )
          goto LABEL_67;
        v12 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v12 >= 0 )
      {
        RIMDeliverDeviceResetRequest((PVOID)v4);
        v15 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
        v16 = *(_BYTE *)(v4 + 48) == 2;
        *(_DWORD *)(v4 + 184) = v15;
        if ( !v16
          || (v19 = *(_DWORD *)(v4 + 200), (v19 & 0x80u) != 0)
          || (v19 & 0x100) != 0
          || (v19 & 0x200) != 0
          || (v15 & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 472)) )
        {
          if ( !*(_QWORD *)(a1 + 640) )
          {
            RIMLockExclusive(a1 + 568);
            RIMStartDeviceSpecificRead((HANDLE *)a1, v4);
            *(_QWORD *)(a1 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqS(v20, v14, v21, 0x15u, v44, a1, v4, *(const wchar_t **)(v4 + 216));
          RIMCloseDev(v4);
          if ( (unsigned int)dword_1C024B250 > 5
            && *(_QWORD *)(v4 + 248)
            && (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x400000000000LL, v22, v23) )
          {
            v37 = *(unsigned __int8 *)(v4 + 48);
            Handle = *(HANDLE *)(v4 + 216);
            LODWORD(Object) = RimDeviceTypeToRimInputType(v4, v37);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              (int)&dword_1C024B250,
              (int)&dword_1C021C6C3,
              (__int64)&Object,
              (__int64)&Handle);
          }
        }
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v14,
            1,
            22,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            a1,
            v4,
            v12);
        }
        return (unsigned int)v12;
      }
LABEL_67:
      v38 = *(void **)(v4 + 248);
      v39 = v12;
      if ( v38 )
      {
        v12 = IoUnregisterPlugPlayNotification(v38);
        if ( v12 < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
        v41 = *(void **)(v4 + 32);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v41);
      }
      if ( (unsigned int)dword_1C024B250 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x400000000000LL, v10, v11) )
      {
        v42 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
        v47 = *(PVOID *)(v4 + 216);
        LODWORD(Object) = v39;
        Handle = (HANDLE)v42;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v43,
          &unk_1C021C70F);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
      goto LABEL_24;
    }
    v47 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v26 = RIMGetDeviceObjectPointer(
            (int)v4 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v47,
            (__int64)&Object);
    if ( v26 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v33 = 19;
    }
    else
    {
      ObfReferenceObject(Object);
      v30 = v47;
      *(_QWORD *)(v4 + 232) = v47;
      v31 = *(struct _DRIVER_OBJECT **)(a1 + 120);
      if ( !v31 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
        v31 = *(struct _DRIVER_OBJECT **)(a1 + 120);
      }
      v32 = RIMRegisterForDeviceChangeNotifications(v4, v31, v29, (void *)v4, (PVOID *)(v4 + 248));
      *(_QWORD *)(v4 + 232) = 0LL;
      v26 = v32;
      ObfDereferenceObject(v30);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v26 >= 0 )
      {
        v26 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
LABEL_54:
        if ( v26 < 0 )
        {
          v34 = *(void **)(v4 + 248);
          if ( v34 )
          {
            v26 = IoUnregisterPlugPlayNotification(v34);
            if ( v26 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
            v36 = *(void **)(v4 + 32);
            *(_QWORD *)(v4 + 248) = 0LL;
            ObfDereferenceObject(v36);
          }
          RIMCloseDev(v4);
          RIMFreeDev(a1, v4);
        }
        return (unsigned int)v26;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v33 = 18;
    }
    WPP_RECORDER_SF_dqqS(v25, v24, v27, v33, v45, v26, a1, v4, *(_QWORD *)(v4 + 216));
    goto LABEL_54;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gRimLog,
      a2,
      1,
      17,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
