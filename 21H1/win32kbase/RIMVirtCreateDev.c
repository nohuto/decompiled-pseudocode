/*
 * XREFs of RIMVirtCreateDev @ 0x1C0159498
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C004D88C (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C004E030 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C004E980 (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C0051B10 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C0051B30 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     rimDereferenceDev @ 0x1C009F3E4 (rimDereferenceDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     rimCreateDev @ 0x1C00A3D64 (rimCreateDev.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016A68C (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01BCCA4 (FindRimDevByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        unsigned int a2,
        const UNICODE_STRING *a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char v8; // si
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v11; // rax
  unsigned int v12; // eax
  struct _KEVENT *v13; // rax
  int v14; // edx
  int v15; // r9d
  int v16; // r8d
  __int64 HidDesc; // rax
  int v18; // edx
  __int64 v19; // rcx
  PVOID v20; // rsi
  char *v21; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v23; // rcx
  int v24; // edx
  CDeviceIdentity *v25; // rcx
  CDeviceIdentity *v26; // rax
  CDeviceIdentity *v27; // rcx
  __int64 v30; // rdx
  PVOID Objecta[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, (int)a3, a4);
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
          (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids,
          a3->Buffer);
      goto LABEL_55;
    }
    Dev[13].MaximumLength = a3->MaximumLength;
    RtlCopyUnicodeString(Dev + 13, a3);
  }
  v12 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v12;
  if ( a4 )
  {
    LODWORD(Dev[11].Buffer) = v12 | 0x2020;
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1272);
    HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1276);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1280);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(a5 + 1284);
    *(_QWORD *)&Dev[83].Length = FindRimDevByName((PCUNICODE_STRING)(a5 + 1288));
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v13;
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 24;
LABEL_54:
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, v15, (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
  }
  else
  {
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v13;
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 25;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
  }
  KeInitializeEvent(v13, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 26;
        goto LABEL_54;
      }
LABEL_55:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
      rimDereferenceDev((__int64)Dev, v30);
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
    if ( a4 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v16)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 27, (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta) )
      {
        v20 = Objecta[0];
        if ( Objecta[0] )
          v21 = (char *)Objecta[0] + 88;
        else
          v21 = 0LL;
        if ( v21[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v21 + 58) + 40LL));
        ObfDereferenceObject(v20);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v19);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v23);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 28, (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids);
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
  v26 = Object[53];
  if ( v26 )
  {
    do
    {
      v25 = v26;
      v26 = (CDeviceIdentity *)*((_QWORD *)v26 + 5);
    }
    while ( v26 );
    *((_QWORD *)v25 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v25, *(struct RawInputManagerDeviceObject **)&Dev[2].Length);
  v27 = Object[80];
  if ( !v27 || *((_DWORD *)Object + 216) || a4 == 0 )
  {
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1u);
    v27 = Object[80];
  }
  if ( !v27 && !*((_DWORD *)Object + 216) && a4 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2u);
  *a6 = Dev;
  return 0LL;
}
