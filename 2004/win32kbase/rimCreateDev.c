/*
 * XREFs of RIMCreateDev @ 0x1C00AE678
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0174880 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C000AB4C (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMGetDeviceParent @ 0x1C000BD2C (RIMGetDeviceParent.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0025D88 (ApiSetIsMouseDeviceOnIgnoreList.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00559F0 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C005B2FC (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C005B9F0 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C005C3B8 (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C005F640 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C005F660 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     rimCreateDev @ 0x1C00AB24C (rimCreateDev.c)
 *     rimDereferenceDev @ 0x1C00ABCF8 (rimDereferenceDev.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0164000 (RIMFindInputDeviceForConfig.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016433C (RIMMarkSiblingMouseDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01CD4E8 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        const UNICODE_STRING *a3,
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _KEVENT *v21; // rax
  __int64 v22; // rdx
  int v23; // r9d
  __int64 v24; // rax
  char Length; // al
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  PVOID v33; // rsi
  char *v34; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v36; // rcx
  int v37; // edx
  CDeviceIdentity *v38; // rcx
  CDeviceIdentity *v39; // rax
  __int64 v40; // r9
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  PVOID Objecta[2]; // [rsp+30h] [rbp-38h] BYREF
  int v52; // [rsp+78h] [rbp+10h] BYREF
  int v53; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4;
  v9 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  v11 = a5;
  if ( (v7 || a5) && v7 == a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((__int64)Object, a2, (__int64)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v17 = Win32AllocPool(a3->MaximumLength, 0x70707352u);
    Dev[13].Buffer = (PWSTR)v17;
    if ( !v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)gRimLog,
          2u,
          1u,
          0xBu,
          (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids,
          a3->Buffer);
      goto LABEL_71;
    }
    Dev[13].MaximumLength = a3->MaximumLength;
    RtlCopyUnicodeString(Dev + 13, a3);
  }
  LOBYTE(Dev[3].Length) = v9;
  if ( v7 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  v20 = a6;
  if ( v11 )
  {
    if ( !a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15, v16);
    LODWORD(Dev[11].Buffer) |= 0x2000u;
    Dev[24].Buffer = *(PWSTR *)(v20 + 116);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v20 + 124);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(v20 + 132);
    *(_QWORD *)&Dev[83].Length = *(_QWORD *)(v20 + 136);
    v21 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v21;
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 12;
LABEL_70:
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, v23, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
        goto LABEL_71;
      }
      goto LABEL_71;
    }
  }
  else
  {
    v21 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v21;
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 13;
        goto LABEL_70;
      }
      goto LABEL_71;
    }
  }
  KeInitializeEvent(v21, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x8000u;
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v24 = RIMCreateHidDesc((__int64)Object, (__int64)Dev, v20);
    *(_QWORD *)&Dev[29].Length = v24;
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 14;
        goto LABEL_70;
      }
LABEL_71:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v18, v19);
      rimDereferenceDev((__int64)Dev, v48, v49, v50);
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
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v18)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 15, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta, v27, v28) )
      {
        v33 = Objecta[0];
        if ( Objecta[0] )
          v34 = (char *)Objecta[0] + 88;
        else
          v34 = 0LL;
        if ( v34[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v34 + 58) + 40LL));
        ObfDereferenceObject(v33);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v30);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v36);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v37) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v37, 1, 16, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
        }
      }
    }
    ApiSetIsMouseDeviceOnIgnoreList((__int64)Dev);
    Length = Dev[3].Length;
  }
  if ( Length == 1 && !v11 )
    RIMPopulateExtendedKeyboardDeviceProperties((__int64)Dev, v22, v18, v19);
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_71;
  *(_QWORD *)&Dev[21].Length = Object;
  v39 = Object[53];
  if ( v39 )
  {
    do
    {
      v38 = v39;
      v39 = (CDeviceIdentity *)*((_QWORD *)v39 + 5);
    }
    while ( v39 );
    *((_QWORD *)v38 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v38, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v18, v19);
  if ( !Object[80] || *((_DWORD *)Object + 216) || v11 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL, v40);
  if ( ((__int64)Dev[11].Buffer & 0x1000) != 0 )
  {
    v42 = *(_QWORD *)&Dev[29].Length;
    v53 = 0;
    v52 = 0;
    Objecta[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         v42,
                         (_DWORD)Object,
                         (_DWORD)Dev,
                         (unsigned int)&v53,
                         (__int64)&v52,
                         (__int64)Objecta) )
    {
      if ( !v52 )
      {
        v46 = Objecta[0];
        if ( *(_DWORD *)(*((_QWORD *)Objecta[0] + 60) + 24LL) != 7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v40);
        ApiSetSetUserPTPEnabledPreference(v46, v46[58], Object);
      }
    }
  }
  if ( !Object[80] && !*((_DWORD *)Object + 216) && v11 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL, v40);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(Dev[12].Buffer, 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
