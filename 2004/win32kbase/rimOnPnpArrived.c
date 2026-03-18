/*
 * XREFs of rimOnPnpArrived @ 0x1C0016384
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C00168C8 (RIMCloseDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0016958 (RIMDeliverDeviceResetRequest.c)
 *     RIMOpenDev @ 0x1C0016A94 (RIMOpenDev.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C00176A0 (RawInputManagerDeviceObjectReference.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C001772C (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMQueryDev @ 0x1C00179F8 (RIMQueryDev.c)
 *     RIMHidTLCActive @ 0x1C0019CAC (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C001A768 (WPP_RECORDER_SF_qqS.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00AEE94 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C016E020 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C016E1FC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_dqqS @ 0x1C016F57C (WPP_RECORDER_SF_dqqS.c)
 *     RIMIsTestSigningOn @ 0x1C0181C74 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // rdi
  const union _LARGE_INTEGER *v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // r15d
  __int64 v14; // rdx
  int v15; // edx
  unsigned int v16; // eax
  bool v17; // zf
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  int v28; // ecx
  NTSTATUS v29; // ebx
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID v34; // r15
  __int64 v35; // rdx
  NTSTATUS v36; // eax
  int v37; // r9d
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  void *v43; // rcx
  int v44; // edx
  void *v45; // rcx
  NTSTATUS v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // [rsp+20h] [rbp-69h]
  int v55; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v57; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v58[6]; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  int v60; // [rsp+98h] [rbp+Fh]

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
        v58[0] = 48LL;
        v8 = 2;
        v58[2] = v5 + 208;
        v58[3] = 512LL;
        v58[5] = &Handle;
        v9 = 1048577;
        v60 = 257;
        v58[1] = 0LL;
        v58[4] = 0LL;
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
            v21 = *(_QWORD *)(v5 + 480);
            if ( !v21 || *(_DWORD *)(v21 + 24) == 6 )
            {
              v8 = 3;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqS((_DWORD)v7, 512, (_DWORD)a3, 20, v54, a1, v5, *(_QWORD *)(v5 + 216));
            }
          }
        }
        v13 = RIMOpenDev(v5, v58, v9, v8);
      }
      else
      {
        Handle = 0LL;
        v13 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v5 + 232) = Handle;
        if ( v13 < 0 )
          goto LABEL_67;
        *(_DWORD *)(v5 + 184) |= 0x10000u;
        *(_QWORD *)(v5 + 224) = a3;
      }
      if ( v13 < 0 )
        goto LABEL_67;
      if ( *(_BYTE *)(v5 + 48) != 2 )
        v13 = RIMQueryDev(a1, v5);
      if ( v13 < 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v5 + 184) & 0x20) == 0 && !*(_QWORD *)(v5 + 248) )
      {
        v14 = *(_QWORD *)(a1 + 120);
        if ( !v14 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, 0LL, v11, v12);
          v14 = *(_QWORD *)(a1 + 120);
        }
        v54 = v5 + 248;
        v13 = RIMRegisterForDeviceChangeNotifications(v5, v14, v11, v5);
        if ( v13 < 0 )
          goto LABEL_67;
        v13 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v5 + 32));
      }
      if ( v13 >= 0 )
      {
        RIMDeliverDeviceResetRequest((PVOID)v5);
        v16 = *(_DWORD *)(v5 + 184) & 0xFFFFFBFF;
        v17 = *(_BYTE *)(v5 + 48) == 2;
        *(_DWORD *)(v5 + 184) = v16;
        if ( !v17
          || (v22 = *(_DWORD *)(v5 + 200), (v22 & 0x80u) != 0)
          || (v22 & 0x100) != 0
          || (v22 & 0x200) != 0
          || (v16 & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v5 + 472)) )
        {
          if ( !*(_QWORD *)(a1 + 640) )
          {
            RIMLockExclusive(a1 + 568);
            RIMStartDeviceSpecificRead((HANDLE *)a1, v5, v18, v19);
            *(_QWORD *)(a1 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqS(v23, v15, v24, 21, v54, a1, v5, *(_QWORD *)(v5 + 216));
          RIMCloseDev(v5);
          if ( (unsigned int)dword_1C0245250 > 5
            && *(_QWORD *)(v5 + 248)
            && (unsigned __int8)tlgKeywordOn(&dword_1C0245250, 0x400000000000LL, v25, v26) )
          {
            v44 = *(unsigned __int8 *)(v5 + 48);
            Handle = *(HANDLE *)(v5 + 216);
            LODWORD(Object) = RimDeviceTypeToRimInputType(v5, v44);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              (int)&dword_1C0245250,
              (int)&dword_1C0216B53,
              (__int64)&Object,
              (__int64)&Handle);
          }
        }
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v15,
            1,
            22,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            a1,
            v5,
            v13);
        }
        return (unsigned int)v13;
      }
LABEL_67:
      v45 = *(void **)(v5 + 248);
      v46 = v13;
      if ( v45 )
      {
        v13 = IoUnregisterPlugPlayNotification(v45);
        if ( v13 < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
        v51 = *(void **)(v5 + 32);
        *(_QWORD *)(v5 + 248) = 0LL;
        ObfDereferenceObject(v51);
      }
      if ( (unsigned int)dword_1C0245250 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C0245250, 0x400000000000LL, v11, v12) )
      {
        v52 = RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48));
        v57 = *(PVOID *)(v5 + 216);
        LODWORD(Object) = v46;
        Handle = (HANDLE)v52;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v53,
          &unk_1C0216B9F);
      }
      RIMCloseDev(v5);
      RIMFreeDev(a1, v5);
      LOBYTE(v5) = 0;
      goto LABEL_24;
    }
    v57 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v29 = RIMGetDeviceObjectPointer(
            (int)v5 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v57,
            (__int64)&Object);
    if ( v29 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v37 = 19;
    }
    else
    {
      ObfReferenceObject(Object);
      v34 = v57;
      *(_QWORD *)(v5 + 232) = v57;
      v35 = *(_QWORD *)(a1 + 120);
      if ( !v35 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, 0LL, v32, v33);
        v35 = *(_QWORD *)(a1 + 120);
      }
      v55 = v5 + 248;
      v36 = RIMRegisterForDeviceChangeNotifications(v5, v35, v32, v5);
      *(_QWORD *)(v5 + 232) = 0LL;
      v29 = v36;
      ObfDereferenceObject(v34);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v29 >= 0 )
      {
        v29 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v5 + 32));
LABEL_54:
        if ( v29 < 0 )
        {
          v38 = *(void **)(v5 + 248);
          if ( v38 )
          {
            v29 = IoUnregisterPlugPlayNotification(v38);
            if ( v29 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            v43 = *(void **)(v5 + 32);
            *(_QWORD *)(v5 + 248) = 0LL;
            ObfDereferenceObject(v43);
          }
          RIMCloseDev(v5);
          RIMFreeDev(a1, v5);
        }
        return (unsigned int)v29;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v37 = 18;
    }
    WPP_RECORDER_SF_dqqS(v28, v27, v30, v37, v55, v29, a1, v5, *(_QWORD *)(v5 + 216));
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
