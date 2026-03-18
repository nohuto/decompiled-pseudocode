/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C0164EF8
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
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
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01CAF54 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01CAFE4 (ApiSetEtwTracePointerDeviceArrivalStop.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // r9
  __int64 v22; // xmm0_8
  int v23; // eax
  int v24; // edx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // r8
  unsigned __int16 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  __int64 v35; // [rsp+28h] [rbp-90h]
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
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        3u,
        1u,
        0x48u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v13 = (__int64)v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        3u,
        1u,
        0x49u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(const wchar_t **)(v8 + 216));
    return 0LL;
  }
  v14 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v15 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 56) = v14;
  v16 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(v10 + 72) = v15;
  *(_OWORD *)(v10 + 88) = v16;
  if ( rimIsHidInputDevice(v8, (__int64)v10, v11, v12) )
  {
    v17 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v13 + 44), 0x70707352u);
    *(_QWORD *)(v13 + 24) = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v18, 1, 74, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v17);
      v17 = *(_QWORD *)(v13 + 24);
    }
    if ( !v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v18,
          1,
          75,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v13 + 44));
      }
      RIMFreeHidDesc(v13, v18, v19, v20);
      return 0LL;
    }
  }
  v21 = a4[1];
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(a5 + 8);
  if ( v21 != 13 || (unsigned __int16)(*a4 - 1) > 1u && (unsigned __int16)(*a4 - 4) > 1u )
  {
    v25 = *((_OWORD *)a4 + 1);
    v38[0] = *(_OWORD *)a4;
    v26 = *((_OWORD *)a4 + 2);
    v38[1] = v25;
    v27 = *((_OWORD *)a4 + 3);
    v38[2] = v26;
    v38[3] = v27;
    if ( (unsigned int)RIMIsInteractiveCtrl(v38) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
      goto LABEL_32;
    }
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v29, *a4, v28 + 6) )
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
      LODWORD(v35) = a4[1];
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        4u,
        1u,
        0x4Du,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v35,
        *a4);
    }
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v8 + 464) = 0LL;
    RIMFreeHidDesc(v13, v31, v32, v33);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v34, 1, 78, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
    }
    return 0LL;
  }
  ApiSetEtwTracePointerDeviceArrivalStart();
  v22 = *(_QWORD *)(v13 + 104);
  v37 = *(_DWORD *)(v13 + 112);
  v36 = v22;
  v23 = RIMVirtCreatePointerDeviceInfo(a1, v8, a3, (__int16 *)a4, &v36, a6);
  if ( v23 < 0 && (*a4 != 5 || v23 == -1073741808) )
    goto LABEL_35;
  ApiSetEtwTracePointerDeviceArrivalStop();
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v24, 1, 76, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v13);
  }
  return v13;
}
