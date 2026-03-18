/*
 * XREFs of RIMCreateDev @ 0x1C0027880
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0172450 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C0008D70 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0022288 (ApiSetIsMouseDeviceOnIgnoreList.c)
 *     rimCreateDev @ 0x1C0022F90 (rimCreateDev.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C006F364 (RIMFindSiblingPointerDeviceForMouse.c)
 *     rimDereferenceDev @ 0x1C0075E48 (rimDereferenceDev.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00B5ABC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00BB3A4 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C00BC868 (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C00BF980 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C00BF9A0 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00C2D7C (RIMFreeSpecificDevWorker.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C00D1014 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0161AA0 (RIMFindInputDeviceForConfig.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161DDC (RIMMarkSiblingMouseDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01CB168 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        struct _UNICODE_STRING **a7)
{
  int v7; // esi
  char v9; // r14
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rbx
  struct _KEVENT *v20; // rax
  __int64 v21; // rdx
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  char Length; // al
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID v32; // rsi
  char *v33; // rbx
  int IsLegacyTouchPadDevice; // ebx
  int v35; // edx
  CDeviceIdentity *v36; // rcx
  CDeviceIdentity *v37; // rax
  __int64 v38; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rbx
  PVOID Objecta[2]; // [rsp+30h] [rbp-38h] BYREF
  int v47; // [rsp+78h] [rbp+10h] BYREF
  int v48; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4;
  v9 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  v11 = a5;
  if ( (v7 || a5) && v7 == a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v17 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 1886417746LL);
    Dev[13].Buffer = (PWSTR)v17;
    if ( !v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v18,
          1,
          11,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          *(_QWORD *)(a3 + 8));
      }
      goto LABEL_71;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  LOBYTE(Dev[3].Length) = v9;
  if ( v7 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  v19 = a6;
  if ( v11 )
  {
    if ( !a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15, v16);
    LODWORD(Dev[11].Buffer) |= 0x2000u;
    Dev[24].Buffer = *(PWSTR *)(v19 + 116);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v19 + 124);
    *(_DWORD *)(&Dev[83].MaximumLength + 1) = *(_DWORD *)(v19 + 132);
    Dev[83].Buffer = *(PWSTR *)(v19 + 136);
    v20 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    Dev[23].Buffer = (PWSTR)v20;
    if ( !v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 12;
LABEL_70:
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, v22, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
        goto LABEL_71;
      }
      goto LABEL_71;
    }
  }
  else
  {
    v20 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    *(_QWORD *)&Dev[22].Length = v20;
    if ( !v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 13;
        goto LABEL_70;
      }
      goto LABEL_71;
    }
  }
  KeInitializeEvent(v20, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x8000u;
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v25 = RIMCreateHidDesc(Object, Dev, v19);
    *(_QWORD *)&Dev[29].Length = v25;
    if ( !v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 14;
        goto LABEL_70;
      }
LABEL_71:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker(Object, Dev);
      rimDereferenceDev(Dev);
      return 3221225495LL;
    }
  }
  Length = Dev[3].Length;
  if ( !Length )
  {
    if ( v11 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v23)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v27, 1, 15, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse(Dev, Objecta) )
      {
        v32 = Objecta[0];
        if ( Objecta[0] )
          v33 = (char *)Objecta[0] + 88;
        else
          v33 = 0LL;
        if ( v33[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v33 + 58) + 40LL));
        ObfDereferenceObject(v32);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart();
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice(Dev);
        EtwTraceLegacyTouchPadDetectionStop();
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v35) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v35, 1, 16, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
        }
      }
    }
    ApiSetIsMouseDeviceOnIgnoreList((__int64)Dev);
    RIMPopulateExtendedMouseDeviceProperties((struct RIMDEV *)Dev);
    Length = Dev[3].Length;
  }
  if ( Length == 1 && !v11 )
    RIMPopulateExtendedKeyboardDeviceProperties((__int64)Dev, v21, v23, v24);
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_71;
  *(_QWORD *)&Dev[21].Length = Object;
  v37 = Object[53];
  if ( v37 )
  {
    do
    {
      v36 = v37;
      v37 = (CDeviceIdentity *)*((_QWORD *)v37 + 5);
    }
    while ( v37 );
    *((_QWORD *)v36 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v36, *(struct RawInputManagerDeviceObject **)&Dev[2].Length);
  if ( !Object[80] || *((_DWORD *)Object + 216) || v11 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL, v38);
  if ( ((__int64)Dev[11].Buffer & 0x1000) != 0 )
  {
    v40 = *(_QWORD *)&Dev[29].Length;
    v48 = 0;
    v47 = 0;
    Objecta[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         v40,
                         (_DWORD)Object,
                         (_DWORD)Dev,
                         (unsigned int)&v48,
                         (__int64)&v47,
                         (__int64)Objecta) )
    {
      if ( !v47 )
      {
        v44 = Objecta[0];
        if ( *(_DWORD *)(*((_QWORD *)Objecta[0] + 60) + 24LL) != 7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v38);
        ApiSetSetUserPTPEnabledPreference(v44, v44[58], Object);
      }
    }
  }
  if ( !Object[80] && !*((_DWORD *)Object + 216) && v11 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL, v38);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(Dev[12].Buffer, 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
