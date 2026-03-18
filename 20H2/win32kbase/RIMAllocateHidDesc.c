/*
 * XREFs of RIMAllocateHidDesc @ 0x1C006E23C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RIMFreeHidDesc @ 0x1C006E19C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C006EAD8 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C006EC88 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C006F078 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C006F150 (RIMIsInteractiveCtrl.c)
 *     rimIsHidInputDevice @ 0x1C006F170 (rimIsHidInputDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C016141C (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161B94 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161DDC (RIMMarkSiblingMouseDevice.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01C8BD4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01C8C64 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01CB168 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v7; // rbx
  __int64 v9; // rsi
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // edx
  __int64 v23; // r8
  unsigned __int16 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  __int64 v30; // xmm0_8
  int v31; // eax
  unsigned __int16 v32; // cx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  PVOID v37; // rsi
  __int64 v38; // [rsp+40h] [rbp-78h] BYREF
  int v39; // [rsp+48h] [rbp-70h]
  _OWORD v40[4]; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+D0h] [rbp+18h] BYREF

  Object = a3;
  v7 = 0LL;
  v9 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 46, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        a2,
        1,
        47,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v13 = (__int64)v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v12,
        1,
        48,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v9 + 216));
    }
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  if ( (unsigned int)rimIsHidInputDevice(v9, v11) )
  {
    v14 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v13 + 44), 0x70707352u);
    *(_QWORD *)(v13 + 24) = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v15, 1, 49, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v14);
      v14 = *(_QWORD *)(v13 + 24);
    }
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v15,
          1,
          50,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v13 + 44));
      }
      RIMFreeHidDesc(v13, v15, v16, v17);
      return 0LL;
    }
  }
  v18 = a5;
  *(_QWORD *)(v13 + 16) = Object;
  *(_QWORD *)(v13 + 104) = *(_QWORD *)v18;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(v18 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v30 = *(_QWORD *)(v13 + 104);
    v39 = *(_DWORD *)(v13 + 112);
    v38 = v30;
    v31 = RIMCreatePointerDeviceInfo(a1, v9, Object, a4, a6, a7, &v38);
    v32 = *a4;
    LODWORD(Object) = v31;
    if ( v31 >= 0 )
    {
      if ( (unsigned __int16)(v32 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v13);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v9 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
          ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
        }
        v31 = (int)Object;
      }
    }
    else if ( v32 != 5 || v31 == -1073741808 )
    {
      goto LABEL_14;
    }
    Object = 0LL;
    if ( v31 >= 0 && (unsigned int)RIMFindSiblingMouseDevice(v13, v9, &Object) )
    {
      v37 = Object;
      if ( Object )
        v7 = (char *)Object + 88;
      RIMMarkSiblingMouseDevice(v7, *a4);
      ObfDereferenceObject(v37);
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v19 = *((_OWORD *)a4 + 1);
    v40[0] = *(_OWORD *)a4;
    v20 = *((_OWORD *)a4 + 2);
    v40[1] = v19;
    v21 = *((_OWORD *)a4 + 3);
    v40[2] = v20;
    v40[3] = v21;
    if ( (unsigned int)RIMIsInteractiveCtrl(v40) )
    {
      *(_DWORD *)(v9 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v24, *a4, v23 + 6) )
    {
      *(_DWORD *)(v9 + 200) |= 0x200u;
    }
    else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 84)) == 0
           || *(_DWORD *)(a1 + 88) && (*(_DWORD *)(v9 + 184) & 0x4000) == 0 )
    {
LABEL_14:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_DD(
          (_DWORD)gRimLog,
          v25,
          1,
          52,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      RIMFreeHidDesc(v13, v25, v26, v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v28, 1, 53, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
      }
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v22, 1, 51, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v13);
  }
  return v13;
}
