/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C016B64C
 * Callers:
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00473E8 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C0056EE0 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056F80 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_DD @ 0x1C009FB60 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00A2D74 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C016991C (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016BB8C (WPP_RECORDER_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 HidDesc; // r12
  __int64 v5; // r15
  int v7; // edx
  __int128 *v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  void *v14; // r9
  unsigned __int16 v15; // si
  unsigned __int16 v16; // di
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  __int64 v23; // rbx
  unsigned __int16 v24; // di
  int v25; // esi
  int v26; // edx
  __int64 v27; // rbx
  int v28; // r8d
  int v30; // edx
  __int64 v31; // [rsp+28h] [rbp-B1h]
  __int64 v32; // [rsp+28h] [rbp-B1h]
  __int64 v33; // [rsp+30h] [rbp-A9h]
  __int64 v34; // [rsp+40h] [rbp-99h]
  __int64 v35; // [rsp+48h] [rbp-91h]
  int v36; // [rsp+50h] [rbp-89h]
  _BYTE v37[72]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v38[4]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v39; // [rsp+E0h] [rbp+7h] BYREF
  int v40; // [rsp+E8h] [rbp+Fh]

  HidDesc = 0LL;
  v5 = a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
  }
  v34 = Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
  if ( !v34 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 80, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    }
    return HidDesc;
  }
  LODWORD(v35) = *(_DWORD *)(a3 + 168);
  BYTE4(v35) = *(_DWORD *)(a3 + 172) != 0;
  BYTE5(v35) = *(_BYTE *)(a3 + 176);
  HIWORD(v35) = *(_WORD *)(a3 + 180);
  LOWORD(v36) = *(_WORD *)(a3 + 184);
  HIWORD(v36) = *(_WORD *)(a3 + 188);
  v40 = v36;
  v39 = v35;
  v8 = (__int128 *)fromIV_HIDP_CAPS((__int64)v37, a3 + 72);
  v9 = *(unsigned int *)(a3 + 168);
  v10 = *(const void **)(a3 + 192);
  v11 = *v8;
  v12 = v8[2];
  v38[1] = v8[1];
  v13 = v8[3];
  v38[0] = v11;
  v38[3] = v13;
  v38[2] = v12;
  memmove(v14, v10, v9);
  v15 = v38[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      (__int64)gRimLog,
      4u,
      1u,
      0x51u,
      (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
      WORD1(v38[0]),
      LOWORD(v38[0]));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v33) = WORD4(v38[0]);
      LODWORD(v31) = WORD2(v38[0]);
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        4u,
        1u,
        0x52u,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        v31,
        v33);
    }
  }
  v16 = WORD1(v38[0]);
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v15, WORD1(v38[0]));
  v18 = *(_DWORD *)(a1 + 88);
  if ( v18 )
  {
    v19 = 0LL;
    v17 = *(_QWORD *)(a1 + 96);
    while ( *(_WORD *)(v17 + 4 * v19) != v15 || *(_WORD *)(v17 + 4 * v19 + 2) != v16 )
    {
      v20 = 1LL;
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v18 )
        goto LABEL_19;
    }
    *(_DWORD *)(v5 + 184) |= 0x4000u;
  }
  v20 = 1LL;
LABEL_19:
  if ( (*(_DWORD *)(v5 + 184) & 0x4000) == 0 && v16 == 1 )
  {
    if ( v15 && (v15 <= 2u || v15 > 5u && (v15 <= 7u || v15 == 128)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_29:
        v23 = v34;
LABEL_30:
        Win32FreePool(v23, v20, v17);
        return HidDesc;
      }
      LODWORD(v33) = v15;
      LODWORD(v31) = 1;
      v21 = 83;
      v22 = 4;
LABEL_28:
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        v22,
        1u,
        v21,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        v31,
        v33);
      goto LABEL_29;
    }
LABEL_37:
    if ( v15 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      LODWORD(v33) = 14;
      v21 = 87;
      LODWORD(v31) = 1;
LABEL_35:
      v22 = 3;
      goto LABEL_28;
    }
    goto LABEL_41;
  }
  v17 = 13LL;
  if ( v16 != 13 )
  {
    if ( v16 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  if ( v15 == 14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    LODWORD(v33) = 14;
    v21 = 86;
    LODWORD(v31) = 13;
    goto LABEL_35;
  }
LABEL_41:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v16, v15, (__int64)&v39 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 88, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    }
    goto LABEL_29;
  }
  v23 = v34;
  HidDesc = RIMVirtAllocateHidDesc(a1, v5, v34, (unsigned __int16 *)v38, (__int64)&v39, a3);
  if ( !HidDesc )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v33) = LOWORD(v38[0]);
      LODWORD(v32) = WORD1(v38[0]);
      WPP_RECORDER_SF_DD(
        (__int64)gRimLog,
        3u,
        1u,
        0x59u,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        v32,
        v33);
    }
    goto LABEL_30;
  }
  v24 = v38[0];
  v25 = WORD1(v38[0]);
  v27 = (__int64)RIMSearchHidTLCInfo(SWORD1(v38[0]), v38[0]);
  if ( v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDq(v24, v26, v28, 90, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v25, v24, v27);
LABEL_51:
    ++*(_DWORD *)(v27 + 20);
    *(_QWORD *)(v5 + 472) = v27;
    return HidDesc;
  }
  v27 = RIMAllocateAndLinkHidTLCInfo(v25, v24);
  if ( v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v33) = v25;
      WPP_RECORDER_SF_qDD(
        (__int64)gRimLog,
        4u,
        1u,
        0x5Cu,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        v27,
        v33,
        v24);
    }
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v30) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v30, 1, 91, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, a1);
  }
  RIMFreeHidDesc(HidDesc);
  return 0LL;
}
