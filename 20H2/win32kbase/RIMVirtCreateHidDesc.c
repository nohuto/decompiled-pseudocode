/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C0162D9C
 * Callers:
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     RIMFreeHidDesc @ 0x1C006E19C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C006EAD8 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C006EC88 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C006EF90 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C006F078 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00719B4 (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C016106C (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C01632DC (WPP_RECORDER_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HidDesc; // r12
  __int64 v6; // r15
  int v8; // edx
  __int128 *v9; // rax
  size_t v10; // r8
  const void *v11; // rdx
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  void *v15; // r9
  unsigned __int16 v16; // si
  int v17; // edx
  int v18; // edx
  unsigned __int16 v19; // di
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edx
  int v24; // r9d
  __int64 v25; // rbx
  int v26; // edx
  int v27; // edx
  unsigned __int16 v28; // di
  __int16 v29; // si
  int v30; // edx
  _DWORD *v31; // rbx
  int v32; // r8d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // [rsp+28h] [rbp-B1h]
  char v38; // [rsp+30h] [rbp-A9h]
  __int64 v39; // [rsp+40h] [rbp-99h]
  __int64 v40; // [rsp+48h] [rbp-91h]
  int v41; // [rsp+50h] [rbp-89h]
  _BYTE v42[72]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v43[4]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v44; // [rsp+E0h] [rbp+7h] BYREF
  int v45; // [rsp+E8h] [rbp+Fh]

  HidDesc = 0LL;
  v6 = a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  v39 = Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
  if ( !v39 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 80, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return HidDesc;
  }
  LODWORD(v40) = *(_DWORD *)(a3 + 168);
  BYTE4(v40) = *(_DWORD *)(a3 + 172) != 0;
  BYTE5(v40) = *(_BYTE *)(a3 + 176);
  HIWORD(v40) = *(_WORD *)(a3 + 180);
  LOWORD(v41) = *(_WORD *)(a3 + 184);
  HIWORD(v41) = *(_WORD *)(a3 + 188);
  v45 = v41;
  v44 = v40;
  v9 = (__int128 *)fromIV_HIDP_CAPS((__int64)v42, a3 + 72);
  v10 = *(unsigned int *)(a3 + 168);
  v11 = *(const void **)(a3 + 192);
  v12 = *v9;
  v13 = v9[2];
  v43[1] = v9[1];
  v14 = v9[3];
  v43[0] = v12;
  v43[3] = v14;
  v43[2] = v13;
  memmove(v15, v11, v10);
  v16 = v43[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = LOWORD(v43[0]);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_DD(
      (_DWORD)gRimLog,
      v17,
      1,
      81,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      SBYTE2(v43[0]),
      v43[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v18,
        1,
        82,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        SBYTE4(v43[0]),
        SBYTE8(v43[0]));
    }
  }
  v19 = WORD1(v43[0]);
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v16, WORD1(v43[0]));
  v20 = *(_DWORD *)(a1 + 88);
  if ( v20 )
  {
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 96);
    while ( *(_WORD *)(v22 + 4 * v21) != v16 || *(_WORD *)(v22 + 4 * v21 + 2) != v19 )
    {
      v23 = 1;
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= v20 )
        goto LABEL_19;
    }
    *(_DWORD *)(v6 + 184) |= 0x4000u;
  }
  v23 = 1;
LABEL_19:
  if ( (*(_DWORD *)(v6 + 184) & 0x4000) == 0 && v19 == 1 )
  {
    if ( v16 && (v16 <= 2u || v16 > 5u && (v16 <= 7u || v16 == 128)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_29:
        v25 = v39;
LABEL_30:
        Win32FreePool(v25);
        return HidDesc;
      }
      v38 = v16;
      v37 = 1;
      v24 = 83;
      LOBYTE(v23) = 4;
LABEL_28:
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v23,
        1,
        v24,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v37,
        v38);
      goto LABEL_29;
    }
LABEL_37:
    if ( v16 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v38 = 14;
      v24 = 87;
      v37 = 1;
LABEL_35:
      LOBYTE(v23) = 3;
      goto LABEL_28;
    }
    goto LABEL_41;
  }
  if ( v19 != 13 )
  {
    if ( v19 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  if ( v16 == 14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v38 = 14;
    v24 = 86;
    v37 = 13;
    goto LABEL_35;
  }
LABEL_41:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v19, v16, (__int64)&v44 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 88, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    goto LABEL_29;
  }
  v25 = v39;
  HidDesc = RIMVirtAllocateHidDesc(a1, v6, v39, (unsigned __int16 *)v43, (__int64)&v44, a3);
  if ( !HidDesc )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = WORD1(v43[0]);
      LOBYTE(v27) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v27,
        1,
        89,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        SBYTE2(v43[0]),
        v43[0]);
    }
    goto LABEL_30;
  }
  v28 = v43[0];
  v29 = WORD1(v43[0]);
  v31 = RIMSearchHidTLCInfo(SWORD1(v43[0]), v43[0]);
  if ( v31 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDq(
        v28,
        v30,
        v32,
        90,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v29,
        v28,
        (char)v31);
LABEL_51:
    ++v31[5];
    *(_QWORD *)(v6 + 472) = v31;
    return HidDesc;
  }
  v31 = RIMAllocateAndLinkHidTLCInfo(v29, v28);
  if ( v31 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_qDD(
        (_DWORD)gRimLog,
        v34,
        1,
        92,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        (char)v31,
        v29,
        v28);
    }
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v34, 1, 91, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  RIMFreeHidDesc(HidDesc, v34, v35, v36);
  return 0LL;
}
