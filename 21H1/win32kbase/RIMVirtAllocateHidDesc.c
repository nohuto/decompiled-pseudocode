/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C016B248
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
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
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01D0ED4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01D0F64 (ApiSetEtwTracePointerDeviceArrivalStop.c)
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
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  int v16; // edx
  unsigned __int16 v17; // r9
  __int64 v18; // xmm0_8
  int v19; // eax
  int v20; // edx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // r8
  unsigned __int16 v25; // r9
  int v27; // edx
  __int64 v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+40h] [rbp-78h] BYREF
  int v30; // [rsp+48h] [rbp-70h]
  _OWORD v31[4]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 71, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
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
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        a4[1],
        *a4);
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v11 = (__int64)v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        3u,
        1u,
        0x49u,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        *(const wchar_t **)(v8 + 216));
    return 0LL;
  }
  v12 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v13 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 56) = v12;
  v14 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(v10 + 72) = v13;
  *(_OWORD *)(v10 + 88) = v14;
  if ( rimIsHidInputDevice(v8, (__int64)v10) )
  {
    v15 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v11 + 44), 0x70707352u);
    *(_QWORD *)(v11 + 24) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v16, 1, 74, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v15);
      v15 = *(_QWORD *)(v11 + 24);
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
          75,
          (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
          *(_WORD *)(v11 + 44));
      }
      RIMFreeHidDesc(v11);
      return 0LL;
    }
  }
  v17 = a4[1];
  *(_QWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v11 + 112) = *(_DWORD *)(a5 + 8);
  if ( v17 != 13 || (unsigned __int16)(*a4 - 1) > 1u && (unsigned __int16)(*a4 - 4) > 1u )
  {
    v21 = *((_OWORD *)a4 + 1);
    v31[0] = *(_OWORD *)a4;
    v22 = *((_OWORD *)a4 + 2);
    v31[1] = v21;
    v23 = *((_OWORD *)a4 + 3);
    v31[2] = v22;
    v31[3] = v23;
    if ( (unsigned int)RIMIsInteractiveCtrl(v31) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
      goto LABEL_32;
    }
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v25, *a4, v24 + 6) )
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
      LODWORD(v28) = a4[1];
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        4u,
        1u,
        0x4Du,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        v28,
        *a4);
    }
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v8 + 464) = 0LL;
    RIMFreeHidDesc(v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v27, 1, 78, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, 0);
    }
    return 0LL;
  }
  ApiSetEtwTracePointerDeviceArrivalStart();
  v18 = *(_QWORD *)(v11 + 104);
  v30 = *(_DWORD *)(v11 + 112);
  v29 = v18;
  v19 = RIMVirtCreatePointerDeviceInfo(a1, v8, a3, (__int16 *)a4, &v29, a6);
  if ( v19 < 0 && (*a4 != 5 || v19 == -1073741808) )
    goto LABEL_35;
  ApiSetEtwTracePointerDeviceArrivalStop();
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v20, 1, 76, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v11);
  }
  return v11;
}
