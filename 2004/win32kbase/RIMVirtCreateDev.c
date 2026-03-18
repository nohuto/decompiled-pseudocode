/*
 * XREFs of RIMVirtCreateDev @ 0x1C0153148
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C000BD2C (RIMGetDeviceParent.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
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
 *     RIMMarkSiblingMouseDevice @ 0x1C016433C (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01B6F44 (FindRimDevByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        const UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  int v6; // r12d
  char v8; // si
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  struct _KEVENT *v15; // rax
  int v16; // edx
  int v17; // r9d
  __int64 HidDesc; // rax
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // rsi
  char *v27; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v29; // rcx
  int v30; // edx
  CDeviceIdentity *v31; // rcx
  CDeviceIdentity *v32; // rax
  __int64 v33; // r9
  CDeviceIdentity *v34; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID Objecta[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v8 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((__int64)Object, a2, (__int64)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v11 = Win32AllocPool(a3->MaximumLength, 0x70707352u);
    Dev[13].Buffer = (PWSTR)v11;
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)gRimLog,
          2u,
          1u,
          0x17u,
          (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids,
          a3->Buffer);
      goto LABEL_55;
    }
    Dev[13].MaximumLength = a3->MaximumLength;
    RtlCopyUnicodeString(Dev + 13, a3);
  }
  v14 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v14;
  if ( v6 )
  {
    LODWORD(Dev[11].Buffer) = v14 | 0x2020;
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1272);
    HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1276);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1280);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(a5 + 1284);
    *(_QWORD *)&Dev[83].Length = FindRimDevByName((PCUNICODE_STRING)(a5 + 1288));
    v15 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v15;
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 24;
LABEL_54:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
  }
  else
  {
    v15 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v15;
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 25;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
  }
  KeInitializeEvent(v15, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 26;
        goto LABEL_54;
      }
LABEL_55:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v12, v13);
      rimDereferenceDev((__int64)Dev, v37, v38, v39);
      return 3221225495LL;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    Dev[29].Length = *(_WORD *)(a5 + 72);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 76);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 80);
    LODWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 84);
    LOWORD(Dev[55].Buffer) = *(_WORD *)(a5 + 88);
    WORD1(Dev[55].Buffer) = *(_WORD *)(a5 + 92);
    WORD2(Dev[55].Buffer) = *(_WORD *)(a5 + 96);
    if ( v6 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v12)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 27, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta, v20, v21) )
      {
        v26 = Objecta[0];
        if ( Objecta[0] )
          v27 = (char *)Objecta[0] + 88;
        else
          v27 = 0LL;
        if ( v27[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24, v25);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v27 + 58) + 40LL));
        ObfDereferenceObject(v26);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v23);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v29);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v30, 1, 28, (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids);
        }
      }
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 )
  {
    LOBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 72);
    HIBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 76);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 80);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 84);
    *(&Dev[29].MaximumLength + 2) = *(_WORD *)(a5 + 88);
    LOWORD(Dev[29].Buffer) = *(_WORD *)(a5 + 92);
    HIDWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 96);
    Dev[30].Length = *(_WORD *)(a5 + 100);
    Dev[30].MaximumLength = *(_WORD *)(a5 + 104);
    *(&Dev[30].MaximumLength + 1) = *(_WORD *)(a5 + 108);
    *(&Dev[30].MaximumLength + 2) = *(_WORD *)(a5 + 112);
    LOWORD(Dev[30].Buffer) = *(_WORD *)(a5 + 116);
    WORD1(Dev[30].Buffer) = *(_WORD *)(a5 + 120);
    HIDWORD(Dev[30].Buffer) = *(_DWORD *)(a5 + 124);
    *(_DWORD *)&Dev[31].Length = *(_DWORD *)(a5 + 128);
    *(_DWORD *)(&Dev[31].MaximumLength + 1) ^= (*(_DWORD *)(&Dev[31].MaximumLength + 1) ^ *(_DWORD *)(a5 + 132)) & 1;
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_55;
  *(_QWORD *)&Dev[21].Length = Object;
  v32 = Object[53];
  if ( v32 )
  {
    do
    {
      v31 = v32;
      v32 = (CDeviceIdentity *)*((_QWORD *)v32 + 5);
    }
    while ( v32 );
    *((_QWORD *)v31 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v31, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v12, v13);
  v34 = Object[80];
  if ( !v34 || *((_DWORD *)Object + 216) || v6 == 0 )
  {
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL, v33);
    v34 = Object[80];
  }
  if ( !v34 && !*((_DWORD *)Object + 216) && v6 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL, v33);
  *a6 = Dev;
  return 0LL;
}
