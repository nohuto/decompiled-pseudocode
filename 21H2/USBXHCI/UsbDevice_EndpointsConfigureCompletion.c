/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0
 * Callers:
 *     <none>
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C000154C (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0002904 (WPP_RECORDER_SF_dqL.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0011570 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0018BD4 (WPP_RECORDER_SF_dqd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036EB4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00467DC (UsbDevice_GetEndpointOffloadInformation.c)
 */

__int64 __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rbp
  _BYTE *v13; // r15
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // edx
  int v21; // edi
  char v22; // r14
  unsigned int i; // r15d
  unsigned int k; // r15d
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r15d
  unsigned int *m; // r14
  __int64 v31; // rdx
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  unsigned int j; // r14d
  __int64 v40; // rax
  unsigned int n; // edi
  __int64 v42; // rax
  __int64 v43; // rdi
  _DWORD *v44; // rdi
  __int64 v45; // r14
  int v46; // ecx
  __int64 v47; // rdx
  unsigned int ii; // r14d
  __int64 v49; // rax
  __int64 v50; // rcx
  char v51; // dl
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  char v55; // [rsp+40h] [rbp-78h]
  int v56; // [rsp+44h] [rbp-74h] BYREF
  __int64 v57; // [rsp+48h] [rbp-70h]
  __int64 v58; // [rsp+50h] [rbp-68h]
  __int64 v59; // [rsp+58h] [rbp-60h]
  _OWORD v60[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v61; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v56 = 0;
  v55 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v57 = *(_QWORD *)(v3 + 440);
  v9 = *(_QWORD *)(v8 + 88);
  v59 = *(_QWORD *)(v8 + 144);
  memset(v60, 0, sizeof(v60));
  v58 = v9;
  v61 = 0LL;
  LOWORD(v60[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v57,
    v60);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v57,
          off_1C0061090);
  v12 = *((_QWORD *)&v60[0] + 1);
  v13 = (_BYTE *)v10;
  if ( a2 == 3 )
  {
    v34 = *(_DWORD *)(*((_QWORD *)&v60[0] + 1) + 24LL);
    if ( !v34 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = *(unsigned __int8 *)(v3 + 135);
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v35,
          12,
          47,
          (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
          *(_BYTE *)(v3 + 135),
          *(_QWORD *)v3,
          *(_DWORD *)(*((_QWORD *)&v60[0] + 1) + 40LL));
      }
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v36) = 4;
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v36,
        12,
        48,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(_BYTE *)(v3 + 135),
        *(_QWORD *)v3,
        v34);
    }
    goto LABEL_34;
  }
  v14 = *(_BYTE *)(a1 + 60);
  if ( v14 == 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
    v16 = *(_QWORD *)(v15 + 88);
    v17 = v15 + 16;
    v18 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v17 + 64) && (*(_BYTE *)(v3 + 656) && *(_DWORD *)(v18 + 556) == 2 || *(_DWORD *)(v18 + 556) == 1) )
      XilDeviceSlot_SendQuerySlotContextInfoRequest(v17, v3, 0LL, &v56);
    else
      XilUsbDevice_GetDeviceContextBufferVA(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v20, v19, 49);
    }
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v21 = -1073741823;
      goto LABEL_11;
    }
    v55 = 1;
LABEL_10:
    v21 = 0;
LABEL_11:
    v22 = 0;
    goto LABEL_12;
  }
  if ( v14 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v37) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v37,
        12,
        50,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v3);
    }
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_10;
LABEL_34:
    v22 = 1;
    v21 = -1073741823;
LABEL_12:
    for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
    {
      v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
              off_1C00611A8);
      Endpoint_Disable(v33, 0LL);
    }
    if ( v22 != 1 )
      goto LABEL_14;
    goto LABEL_60;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v38) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v38, v11, 51);
    v14 = *(_BYTE *)(a1 + 60);
  }
  switch ( v14 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 4u;
      *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v12 + 40) )
  {
    v21 = -1073741823;
LABEL_60:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
              off_1C00611A8);
      Endpoint_Disable(v40, 0LL);
    }
LABEL_14:
    if ( v55 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); *(_QWORD *)(v3 + 8LL * (unsigned int)v27 + 168) = v26 )
      {
        v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C00611A8);
        v26 = v25;
        v27 = *(unsigned int *)(v25 + 144);
        v28 = *(_QWORD *)(v3 + 8 * v27 + 168);
        if ( v28 && v28 != v25 )
        {
          LOBYTE(v27) = 1;
          Endpoint_Disable(v28, v27);
          *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v26 + 144) + 168) = 0LL;
          LODWORD(v27) = *(_DWORD *)(v26 + 144);
        }
        ++k;
      }
    }
    if ( v21 >= 0 )
    {
      v29 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v29 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v12, m);
        ++v29;
      }
    }
    if ( *(_DWORD *)(v3 + 448) == 259 )
      *(_DWORD *)(v3 + 448) = v21;
    if ( v21 < 0 )
      v31 = 2LL;
    else
      v31 = 1LL;
    return UsbDevice_QueueConfigureEndpointEvent(v3, v31);
  }
  if ( !*(_DWORD *)(v12 + 24) || *v13 == 1 || v13[1] == 1 )
  {
    if ( *(_DWORD *)(v3 + 448) == 259 )
      *(_DWORD *)(v3 + 448) = -1073741823;
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x80000,
      (__int64)"Configure Endpoints command failed when only disabling endpoints",
      a1 + 24,
      a3);
    return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4119, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v11, 52);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
              off_1C00611A8);
      Endpoint_Disable(v42, 0LL);
    }
    v43 = *(_QWORD *)((*(_BYTE *)(v3 + 657) != 0 ? 648LL : 640LL) + v3);
    if ( v43 )
      v44 = *(_DWORD **)(v43 + 16);
    else
      v44 = 0LL;
    if ( (*(_DWORD *)(v58 + 100) & 4) != 0 )
    {
      memset(v44, 0, 0x840uLL);
      v45 = 16LL;
    }
    else
    {
      memset(v44, 0, 0x420uLL);
      v45 = 8LL;
    }
    v44[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v46 = v44[v45] | 0x4000000;
      v44[v45] = v46;
      HIBYTE(v44[v45 + 1]) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          v44[v45] = v46 | 0x2000000;
        v44[v45 + 2] ^= (v44[v45 + 2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v3 + 136) )
    {
      v47 = *(_QWORD *)(v3 + 24);
      if ( v47 )
      {
        if ( *(int *)(v3 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           v47,
                           off_1C00612C0)
                       + 144) > 1u )
        {
          v44[v45] |= 0x2000000u;
        }
      }
    }
    for ( ii = 0; ii < *(_DWORD *)(v12 + 40); *v44 |= 1 << *(_DWORD *)(v49 + 144) )
      v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * ii++),
              off_1C00611A8);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    *(_QWORD *)(v3 + 504) = v3;
    *(_QWORD *)(v3 + 496) = UsbDevice_EndpointsConfigureCompletion;
    v50 = v3 + 648;
    *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF01FF | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    v51 = *(_BYTE *)(v3 + 657);
    if ( !v51 )
      v50 = v3 + 640;
    if ( *(_QWORD *)v50 )
      v52 = *(_QWORD *)(*(_QWORD *)v50 + 24LL);
    else
      v52 = 0LL;
    *(_QWORD *)(v3 + 480) = v52;
    *(_QWORD *)(v3 + 528) = v44;
    v53 = *(_QWORD *)((v51 != 0 ? 648LL : 640LL) + v3);
    if ( v53 )
      v5 = *(_DWORD *)(v53 + 44);
    v54 = v59;
    *(_DWORD *)(v3 + 536) = v5;
    *(_DWORD *)(v3 + 540) = 1;
    *(_QWORD *)(v3 + 544) = v3;
    return Command_SendCommand(v54, v3 + 456);
  }
}
