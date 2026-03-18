/*
 * XREFs of rimOnPnpArrived @ 0x1C00240B8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0020F88 (RIMRegisterForDeviceChangeNotifications.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0021BF0 (RawInputManagerDeviceObjectReference.c)
 *     RIMOpenDev @ 0x1C0022754 (RIMOpenDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0022964 (RIMDeliverDeviceResetRequest.c)
 *     RIMCloseDev @ 0x1C0022AA0 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     RIMHidTLCActive @ 0x1C0028A94 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006EE58 (RIMGetDeviceObjectPointer.c)
 *     RIMQueryDev @ 0x1C0075350 (RIMQueryDev.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C00BCC70 (WPP_RECORDER_SF_qqS.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C016BBEC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C016BDC8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_dqqS @ 0x1C016D14C (WPP_RECORDER_SF_dqqS.c)
 *     RIMIsTestSigningOn @ 0x1C017F844 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // rdi
  const union _LARGE_INTEGER *v7; // rcx
  ULONG v8; // ebx
  ACCESS_MASK v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r15d
  struct _DRIVER_OBJECT *v15; // rdx
  int v16; // edx
  unsigned int v17; // eax
  bool v18; // zf
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  int v29; // ecx
  int v30; // ebx
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  PVOID v35; // r15
  struct _DRIVER_OBJECT *v36; // rdx
  int v37; // eax
  int v38; // r9d
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rcx
  __int64 v45; // rdx
  void *v46; // rcx
  int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rcx
  NTSTATUS v55; // [rsp+20h] [rbp-69h]
  int v56; // [rsp+20h] [rbp-69h]
  int v57; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v59; // [rsp+58h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES v60; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  int v62; // [rsp+98h] [rbp+Fh]

  v5 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 16, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    v7 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  }
  *(_DWORD *)(v5 + 184) &= ~1u;
  if ( (*(_DWORD *)(v5 + 184) & 0x40) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 48);
    if ( (_BYTE)v7 != 3 )
    {
      if ( a3 == (void *)-1LL )
      {
        *(_QWORD *)&v60.Length = 48LL;
        v8 = 2;
        v60.ObjectName = (PUNICODE_STRING)(v5 + 208);
        *(_QWORD *)&v60.Attributes = 512LL;
        v60.SecurityQualityOfService = &Handle;
        v9 = 1048577;
        v62 = 257;
        v60.RootDirectory = 0LL;
        v60.SecurityDescriptor = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v7 == 2 )
        {
          v9 = 1048579;
          if ( (*(_DWORD *)(v5 + 200) & 0x200) != 0 )
          {
            v8 = (unsigned int)RIMIsTestSigningOn(v7, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v22 = *(_QWORD *)(v5 + 480);
            if ( !v22 || *(_DWORD *)(v22 + 24) == 6 )
            {
              v8 = 3;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqS((_DWORD)v7, 512, (_DWORD)a3, 20, v55, a1, v5, *(_QWORD *)(v5 + 216));
            }
          }
        }
        v14 = RIMOpenDev(v5, &v60, v9, v8, v55);
      }
      else
      {
        Handle = 0LL;
        v14 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v5 + 232) = Handle;
        if ( v14 < 0 )
          goto LABEL_67;
        *(_DWORD *)(v5 + 184) |= 0x10000u;
        *(_QWORD *)(v5 + 224) = a3;
      }
      if ( v14 < 0 )
        goto LABEL_67;
      if ( *(_BYTE *)(v5 + 48) != 2 )
        v14 = RIMQueryDev(a1, v5);
      if ( v14 < 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v5 + 184) & 0x20) == 0 && !*(_QWORD *)(v5 + 248) )
      {
        v15 = *(struct _DRIVER_OBJECT **)(a1 + 120);
        if ( !v15 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, 0LL, v12, v13);
          v15 = *(struct _DRIVER_OBJECT **)(a1 + 120);
        }
        v14 = RIMRegisterForDeviceChangeNotifications(v5, v15, v12, (void *)v5, (PVOID *)(v5 + 248));
        if ( v14 < 0 )
          goto LABEL_67;
        v14 = RawInputManagerDeviceObjectReference(*(void **)(v5 + 32));
      }
      if ( v14 >= 0 )
      {
        RIMDeliverDeviceResetRequest((char *)v5, v10, v12, v13);
        v17 = *(_DWORD *)(v5 + 184) & 0xFFFFFBFF;
        v18 = *(_BYTE *)(v5 + 48) == 2;
        *(_DWORD *)(v5 + 184) = v17;
        if ( !v18
          || (v23 = *(_DWORD *)(v5 + 200), (v23 & 0x80u) != 0)
          || (v23 & 0x100) != 0
          || (v23 & 0x200) != 0
          || (v17 & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v5 + 472)) )
        {
          if ( !*(_QWORD *)(a1 + 640) )
          {
            RIMLockExclusive(a1 + 568);
            RIMStartDeviceSpecificRead((HANDLE *)a1, v5, v19, v20);
            *(_QWORD *)(a1 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqS(v24, v16, v25, 21, v56, a1, v5, *(_QWORD *)(v5 + 216));
          RIMCloseDev(v5);
          if ( (unsigned int)dword_1C0243250 > 5
            && *(_QWORD *)(v5 + 248)
            && (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x400000000000LL, v26, v27) )
          {
            v45 = *(unsigned __int8 *)(v5 + 48);
            Handle = *(HANDLE *)(v5 + 216);
            LODWORD(Object) = RimDeviceTypeToRimInputType(v5, v45);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              (int)&dword_1C0243250,
              (int)&dword_1C0214CE4,
              (__int64)&Object,
              (__int64)&Handle);
          }
        }
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v16,
            1,
            22,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            a1,
            v5,
            v14);
        }
        return (unsigned int)v14;
      }
LABEL_67:
      v46 = *(void **)(v5 + 248);
      v47 = v14;
      if ( v46 )
      {
        v14 = IoUnregisterPlugPlayNotification(v46);
        if ( v14 < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
        v52 = *(void **)(v5 + 32);
        *(_QWORD *)(v5 + 248) = 0LL;
        ObfDereferenceObject(v52);
      }
      if ( (unsigned int)dword_1C0243250 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x400000000000LL, v12, v13) )
      {
        v53 = RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48));
        v59 = *(PVOID *)(v5 + 216);
        LODWORD(Object) = v47;
        Handle = (HANDLE)v53;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v54,
          &unk_1C0214D30);
      }
      RIMCloseDev(v5);
      RIMFreeDev(a1, v5);
      LOBYTE(v5) = 0;
      goto LABEL_24;
    }
    v59 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v30 = RIMGetDeviceObjectPointer(
            (int)v5 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v59,
            (__int64)&Object);
    if ( v30 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v38 = 19;
    }
    else
    {
      ObfReferenceObject(Object);
      v35 = v59;
      *(_QWORD *)(v5 + 232) = v59;
      v36 = *(struct _DRIVER_OBJECT **)(a1 + 120);
      if ( !v36 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, 0LL, v33, v34);
        v36 = *(struct _DRIVER_OBJECT **)(a1 + 120);
      }
      v37 = RIMRegisterForDeviceChangeNotifications(v5, v36, v33, (void *)v5, (PVOID *)(v5 + 248));
      *(_QWORD *)(v5 + 232) = 0LL;
      v30 = v37;
      ObfDereferenceObject(v35);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v30 >= 0 )
      {
        v30 = RawInputManagerDeviceObjectReference(*(void **)(v5 + 32));
LABEL_54:
        if ( v30 < 0 )
        {
          v39 = *(void **)(v5 + 248);
          if ( v39 )
          {
            v30 = IoUnregisterPlugPlayNotification(v39);
            if ( v30 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
            v44 = *(void **)(v5 + 32);
            *(_QWORD *)(v5 + 248) = 0LL;
            ObfDereferenceObject(v44);
          }
          RIMCloseDev(v5);
          RIMFreeDev(a1, v5);
        }
        return (unsigned int)v30;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v38 = 18;
    }
    WPP_RECORDER_SF_dqqS(v29, v28, v31, v38, v57, v30, a1, v5, *(_QWORD *)(v5 + 216));
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
      v5,
      0);
  }
  return 0LL;
}
