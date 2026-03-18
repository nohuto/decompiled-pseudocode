/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C01652FC
 * Callers:
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0054BE8 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00AECC4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C01635CC (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016583C (WPP_RECORDER_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned __int16 v17; // di
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  __int64 v23; // rbx
  int v24; // edx
  unsigned __int16 v25; // di
  int v26; // esi
  int v27; // edx
  _DWORD *v28; // rbx
  int v29; // r8d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // [rsp+28h] [rbp-B1h]
  __int64 v35; // [rsp+28h] [rbp-B1h]
  __int64 v36; // [rsp+30h] [rbp-A9h]
  __int64 v37; // [rsp+40h] [rbp-99h]
  __int64 v38; // [rsp+48h] [rbp-91h]
  int v39; // [rsp+50h] [rbp-89h]
  _BYTE v40[72]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v41[4]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v42; // [rsp+E0h] [rbp+7h] BYREF
  int v43; // [rsp+E8h] [rbp+Fh]

  HidDesc = 0LL;
  v6 = a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  v37 = Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
  if ( !v37 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 80, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return HidDesc;
  }
  LODWORD(v38) = *(_DWORD *)(a3 + 168);
  BYTE4(v38) = *(_DWORD *)(a3 + 172) != 0;
  BYTE5(v38) = *(_BYTE *)(a3 + 176);
  HIWORD(v38) = *(_WORD *)(a3 + 180);
  LOWORD(v39) = *(_WORD *)(a3 + 184);
  HIWORD(v39) = *(_WORD *)(a3 + 188);
  v43 = v39;
  v42 = v38;
  v9 = (__int128 *)fromIV_HIDP_CAPS((__int64)v40, a3 + 72);
  v10 = *(unsigned int *)(a3 + 168);
  v11 = *(const void **)(a3 + 192);
  v12 = *v9;
  v13 = v9[2];
  v41[1] = v9[1];
  v14 = v9[3];
  v41[0] = v12;
  v41[3] = v14;
  v41[2] = v13;
  memmove(v15, v11, v10);
  v16 = v41[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      (__int64)gRimLog,
      4u,
      1u,
      0x51u,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      WORD1(v41[0]),
      LOWORD(v41[0]));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = WORD4(v41[0]);
      LODWORD(v34) = WORD2(v41[0]);
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        4u,
        1u,
        0x52u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v34,
        v36);
    }
  }
  v17 = WORD1(v41[0]);
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v16, WORD1(v41[0]));
  v18 = *(_DWORD *)(a1 + 88);
  if ( v18 )
  {
    v19 = 0LL;
    v20 = *(_QWORD *)(a1 + 96);
    while ( *(_WORD *)(v20 + 4 * v19) != v16 || *(_WORD *)(v20 + 4 * v19 + 2) != v17 )
    {
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v18 )
        goto LABEL_18;
    }
    *(_DWORD *)(v6 + 184) |= 0x4000u;
  }
LABEL_18:
  if ( (*(_DWORD *)(v6 + 184) & 0x4000) == 0 && v17 == 1 )
  {
    if ( v16 && (v16 <= 2u || v16 > 5u && (v16 <= 7u || v16 == 128)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_28:
        v23 = v37;
LABEL_29:
        Win32FreePool(v23);
        return HidDesc;
      }
      LODWORD(v36) = v16;
      LODWORD(v34) = 1;
      v21 = 83;
      v22 = 4;
LABEL_27:
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        v22,
        1u,
        v21,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v34,
        v36);
      goto LABEL_28;
    }
LABEL_36:
    if ( v16 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      LODWORD(v36) = 14;
      v21 = 87;
      LODWORD(v34) = 1;
LABEL_34:
      v22 = 3;
      goto LABEL_27;
    }
    goto LABEL_40;
  }
  if ( v17 != 13 )
  {
    if ( v17 != 1 )
      goto LABEL_40;
    goto LABEL_36;
  }
  if ( v16 == 14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    LODWORD(v36) = 14;
    v21 = 86;
    LODWORD(v34) = 13;
    goto LABEL_34;
  }
LABEL_40:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v17, v16, (__int64)&v42 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 88, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    goto LABEL_28;
  }
  v23 = v37;
  HidDesc = RIMVirtAllocateHidDesc(a1, v6, v37, (unsigned __int16 *)v41, (__int64)&v42, a3);
  if ( !HidDesc )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = LOWORD(v41[0]);
      LODWORD(v35) = WORD1(v41[0]);
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        3u,
        1u,
        0x59u,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v35,
        v36);
    }
    goto LABEL_29;
  }
  v25 = v41[0];
  v26 = WORD1(v41[0]);
  v28 = RIMSearchHidTLCInfo(SWORD1(v41[0]), v41[0]);
  if ( v28 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDq(
        v25,
        v27,
        v29,
        90,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v26,
        v25,
        (char)v28);
LABEL_50:
    ++v28[5];
    *(_QWORD *)(v6 + 472) = v28;
    return HidDesc;
  }
  v28 = RIMAllocateAndLinkHidTLCInfo(v26, v25);
  if ( v28 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = v26;
      WPP_RECORDER_SF_qDD(
        (__int64)gRimLog,
        4u,
        1u,
        0x5Cu,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v28,
        v36,
        v25);
    }
    goto LABEL_50;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v31, 1, 91, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  RIMFreeHidDesc(HidDesc, v31, v32, v33);
  return 0LL;
}
