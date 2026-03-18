/*
 * XREFs of RIMAllocateHidDesc @ 0x1C00AF298
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0054BE8 (ApiSetInkProcessorIsInkDevice.c)
 *     rimIsHidInputDevice @ 0x1C005BC0C (rimIsHidInputDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C005DCFC (RIMIsInteractiveCtrl.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00AECC4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C016397C (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01640F4 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016433C (RIMMarkSiblingMouseDevice.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01CAF54 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01CAFE4 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01CD4E8 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // edx
  __int64 v24; // r8
  unsigned __int16 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edx
  __int64 v31; // xmm0_8
  int v32; // eax
  unsigned __int16 v33; // cx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID v38; // rsi
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+40h] [rbp-78h] BYREF
  int v42; // [rsp+48h] [rbp-70h]
  _OWORD v43[4]; // [rsp+50h] [rbp-68h] BYREF
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
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        3u,
        1u,
        0x2Fu,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v14 = (__int64)v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        3u,
        1u,
        0x30u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(const wchar_t **)(v9 + 216));
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  if ( rimIsHidInputDevice(v9, (__int64)v11, v12, v13) )
  {
    v15 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v14 + 44), 0x70707352u);
    *(_QWORD *)(v14 + 24) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v16, 1, 49, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v15);
      v15 = *(_QWORD *)(v14 + 24);
    }
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v16,
          1,
          50,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v14 + 44));
      }
      RIMFreeHidDesc(v14, v16, v17, v18);
      return 0LL;
    }
  }
  v19 = a5;
  *(_QWORD *)(v14 + 16) = Object;
  *(_QWORD *)(v14 + 104) = *(_QWORD *)v19;
  *(_DWORD *)(v14 + 112) = *(_DWORD *)(v19 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v31 = *(_QWORD *)(v14 + 104);
    v42 = *(_DWORD *)(v14 + 112);
    v41 = v31;
    v32 = RIMCreatePointerDeviceInfo(a1, v9, Object, a4, a6, a7, &v41);
    v33 = *a4;
    LODWORD(Object) = v32;
    if ( v32 >= 0 )
    {
      if ( (unsigned __int16)(v33 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v14);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v9 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
          ApiSetSetUserPTPEnabledPreference(v9, v14, a1);
        }
        v32 = (int)Object;
      }
    }
    else if ( v33 != 5 || v32 == -1073741808 )
    {
      goto LABEL_14;
    }
    Object = 0LL;
    if ( v32 >= 0 && (unsigned int)RIMFindSiblingMouseDevice(v14, v9, &Object) )
    {
      v38 = Object;
      if ( Object )
        v7 = (char *)Object + 88;
      RIMMarkSiblingMouseDevice(v7, *a4);
      ObfDereferenceObject(v38);
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v20 = *((_OWORD *)a4 + 1);
    v43[0] = *(_OWORD *)a4;
    v21 = *((_OWORD *)a4 + 2);
    v43[1] = v20;
    v22 = *((_OWORD *)a4 + 3);
    v43[2] = v21;
    v43[3] = v22;
    if ( (unsigned int)RIMIsInteractiveCtrl(v43) )
    {
      *(_DWORD *)(v9 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v25, *a4, v24 + 6) )
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
        LODWORD(v40) = *a4;
        LODWORD(v39) = a4[1];
        WPP_RECORDER_SF_DD(
          (__int64)gRimLog,
          4u,
          1u,
          0x34u,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          v39,
          v40);
      }
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      RIMFreeHidDesc(v14, v26, v27, v28);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v29, 1, 53, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
      }
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v23, 1, 51, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v14);
  }
  return v14;
}
