/*
 * XREFs of RIMAllocateHidDesc @ 0x1C009E724
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 * Callees:
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00473E8 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C005023C (RIMIsInteractiveCtrl.c)
 *     rimIsHidInputDevice @ 0x1C005675C (rimIsHidInputDevice.c)
 *     RIMFreeHidDesc @ 0x1C0056EE0 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_DD @ 0x1C009FB60 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00A2D74 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C016A444 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016A68C (RIMMarkSiblingMouseDevice.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01D0ED4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01D0F64 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01D3468 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v15; // edx
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // edx
  __int64 v21; // r8
  unsigned __int16 v22; // r9
  int v23; // edx
  int v24; // edx
  __int64 v26; // xmm0_8
  int v27; // eax
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  PVOID v30; // rsi
  __int64 v31; // [rsp+40h] [rbp-78h] BYREF
  int v32; // [rsp+48h] [rbp-70h]
  _OWORD v33[4]; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+D0h] [rbp+18h] BYREF

  Object = a3;
  v7 = 0LL;
  v9 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 46, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
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
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
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
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        *(_QWORD *)(v9 + 216));
    }
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  if ( rimIsHidInputDevice(v9, (__int64)v11) )
  {
    v14 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v13 + 44), 0x70707352u);
    *(_QWORD *)(v13 + 24) = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v15, 1, 49, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v14);
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
          (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
          *(_WORD *)(v13 + 44));
      }
      RIMFreeHidDesc(v13);
      return 0LL;
    }
  }
  v16 = a5;
  *(_QWORD *)(v13 + 16) = Object;
  *(_QWORD *)(v13 + 104) = *(_QWORD *)v16;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(v16 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v26 = *(_QWORD *)(v13 + 104);
    v32 = *(_DWORD *)(v13 + 112);
    v31 = v26;
    v27 = RIMCreatePointerDeviceInfo(a1, v9, Object, a4, a6, a7, &v31);
    v28 = *a4;
    LODWORD(Object) = v27;
    if ( v27 >= 0 )
    {
      if ( (unsigned __int16)(v28 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v13);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v9 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
        }
        v27 = (int)Object;
      }
    }
    else if ( v28 != 5 || v27 == -1073741808 )
    {
      goto LABEL_14;
    }
    Object = 0LL;
    if ( v27 >= 0 && (unsigned int)RIMFindSiblingMouseDevice(v13, v9, &Object) )
    {
      v30 = Object;
      if ( Object )
        v7 = (char *)Object + 88;
      RIMMarkSiblingMouseDevice(v7, *a4);
      ObfDereferenceObject(v30);
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v17 = *((_OWORD *)a4 + 1);
    v33[0] = *(_OWORD *)a4;
    v18 = *((_OWORD *)a4 + 2);
    v33[1] = v17;
    v19 = *((_OWORD *)a4 + 3);
    v33[2] = v18;
    v33[3] = v19;
    if ( (unsigned int)RIMIsInteractiveCtrl(v33) )
    {
      *(_DWORD *)(v9 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v22, *a4, v21 + 6) )
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
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_DD(
          (_DWORD)gRimLog,
          v23,
          1,
          52,
          (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      RIMFreeHidDesc(v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v24, 1, 53, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, 0);
      }
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v20, 1, 51, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v13);
  }
  return v13;
}
