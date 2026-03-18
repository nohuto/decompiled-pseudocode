/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C0162998
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
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
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160268 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01C8BD4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01C8C64 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  char *v10; // rax
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22; // r9
  __int64 v23; // xmm0_8
  int v24; // eax
  int v25; // edx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // r8
  unsigned __int16 v30; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edx
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  int v37; // [rsp+48h] [rbp-70h]
  _OWORD v38[4]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 71, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
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
        72,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v14 = (__int64)v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v11,
        1,
        73,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  v15 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v16 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 56) = v15;
  v17 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(v10 + 72) = v16;
  *(_OWORD *)(v10 + 88) = v17;
  if ( rimIsHidInputDevice(v8, (__int64)v10, v12, v13) )
  {
    v18 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v14 + 44), 0x70707352u);
    *(_QWORD *)(v14 + 24) = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v19, 1, 74, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v18);
      v18 = *(_QWORD *)(v14 + 24);
    }
    if ( !v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v19,
          1,
          75,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v14 + 44));
      }
      RIMFreeHidDesc(v14, v19, v20, v21);
      return 0LL;
    }
  }
  v22 = a4[1];
  *(_QWORD *)(v14 + 16) = a3;
  *(_QWORD *)(v14 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v14 + 112) = *(_DWORD *)(a5 + 8);
  if ( v22 != 13 || (unsigned __int16)(*a4 - 1) > 1u && (unsigned __int16)(*a4 - 4) > 1u )
  {
    v26 = *((_OWORD *)a4 + 1);
    v38[0] = *(_OWORD *)a4;
    v27 = *((_OWORD *)a4 + 2);
    v38[1] = v26;
    v28 = *((_OWORD *)a4 + 3);
    v38[2] = v27;
    v38[3] = v28;
    if ( (unsigned int)RIMIsInteractiveCtrl(v38) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
      goto LABEL_32;
    }
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v30, *a4, v29 + 6) )
    {
      *(_DWORD *)(v8 + 200) |= 0x200u;
      goto LABEL_32;
    }
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48)) & *(_DWORD *)(a1 + 84)) != 0
      && (!*(_DWORD *)(a1 + 88) || (*(_DWORD *)(v8 + 184) & 0x4000) != 0) )
    {
      goto LABEL_32;
    }
LABEL_35:
    DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v32,
        1,
        77,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    }
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v8 + 464) = 0LL;
    RIMFreeHidDesc(v14, v32, v33, v34);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v35, 1, 78, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
    }
    return 0LL;
  }
  ApiSetEtwTracePointerDeviceArrivalStart();
  v23 = *(_QWORD *)(v14 + 104);
  v37 = *(_DWORD *)(v14 + 112);
  v36 = v23;
  v24 = RIMVirtCreatePointerDeviceInfo(a1, v8, a3, (__int16 *)a4, &v36, a6);
  if ( v24 < 0 && (*a4 != 5 || v24 == -1073741808) )
    goto LABEL_35;
  ApiSetEtwTracePointerDeviceArrivalStop();
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v25, 1, 76, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v14);
  }
  return v14;
}
