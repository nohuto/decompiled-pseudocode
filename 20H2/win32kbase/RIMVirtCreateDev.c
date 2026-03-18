/*
 * XREFs of RIMVirtCreateDev @ 0x1C0150BC8
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     rimCreateDev @ 0x1C0022F90 (rimCreateDev.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C006F364 (RIMFindSiblingPointerDeviceForMouse.c)
 *     rimDereferenceDev @ 0x1C0075E48 (rimDereferenceDev.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00BB3A4 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C00BC868 (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C00BF980 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C00BF9A0 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00C2D7C (RIMFreeSpecificDevWorker.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161DDC (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01B4BD4 (FindRimDevByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  int v6; // r12d
  char v8; // si
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  struct _KEVENT *v16; // rax
  int v17; // edx
  int v18; // r9d
  __int64 HidDesc; // rax
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID v27; // rsi
  char *v28; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v30; // rcx
  int v31; // edx
  CDeviceIdentity *v32; // rcx
  CDeviceIdentity *v33; // rax
  __int64 v34; // r9
  CDeviceIdentity *v35; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  PVOID Objecta[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v8 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v11;
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v12,
          1,
          23,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          *(_QWORD *)(a3 + 8));
      }
      goto LABEL_55;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  v15 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v15;
  if ( v6 )
  {
    LODWORD(Dev[11].Buffer) = v15 | 0x2020;
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1272);
    HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1276);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1280);
    *(_DWORD *)(&Dev[83].MaximumLength + 1) = *(_DWORD *)(a5 + 1284);
    Dev[83].Buffer = (PWSTR)FindRimDevByName((PCUNICODE_STRING)(a5 + 1288));
    v16 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v16;
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 24;
LABEL_54:
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, v18, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
  }
  else
  {
    v16 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v16;
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 25;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
  }
  KeInitializeEvent(v16, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 26;
        goto LABEL_54;
      }
LABEL_55:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v13, v14);
      rimDereferenceDev((__int64)Dev, v38, v39, v40);
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
    *(_DWORD *)&Dev[57].Length ^= (*(_DWORD *)&Dev[57].Length ^ *(_DWORD *)(a5 + 100)) & 1;
    if ( v6 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v13)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 27, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta, v21, v22) )
      {
        v27 = Objecta[0];
        if ( Objecta[0] )
          v28 = (char *)Objecta[0] + 88;
        else
          v28 = 0LL;
        if ( v28[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v28 + 58) + 40LL));
        ObfDereferenceObject(v27);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v24);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v30);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v31, 1, 28, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
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
  v33 = Object[53];
  if ( v33 )
  {
    do
    {
      v32 = v33;
      v33 = (CDeviceIdentity *)*((_QWORD *)v33 + 5);
    }
    while ( v33 );
    *((_QWORD *)v32 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v32, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v13, v14);
  v35 = Object[80];
  if ( !v35 || *((_DWORD *)Object + 216) || v6 == 0 )
  {
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL, v34);
    v35 = Object[80];
  }
  if ( !v35 && !*((_DWORD *)Object + 216) && v6 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL, v34);
  *a6 = Dev;
  return 0LL;
}
