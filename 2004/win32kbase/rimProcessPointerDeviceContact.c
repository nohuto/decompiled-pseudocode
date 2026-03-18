/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C017D71C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015D45C (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C015E308 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C017A434 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C017C734 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C017CD9C (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C0180C3C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180E1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180E4C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0180E78 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C0180F84 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01812B0 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v12; // rsi
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rbx
  int v18; // esi
  int v19; // r14d
  _DWORD *v20; // rax
  PalmTelemetry *QuadPart; // rcx
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int IsContactSuppressed; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // [rsp+30h] [rbp-51h]
  __int64 v39; // [rsp+38h] [rbp-49h]
  __int64 v40; // [rsp+40h] [rbp-41h]
  int v41; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v42; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v44; // [rsp+84h] [rbp+3h] BYREF
  __int64 v45; // [rsp+88h] [rbp+7h] BYREF
  int v46; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 464);
  v9 = *(_QWORD *)(a2 + 480);
  v46 = 0;
  v12 = a2;
  v44 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v45 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  result = rimFindOrCreateActiveContact(v9, v13, a3, a4, a5, &v46);
  v17 = result;
  if ( !result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      result = WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 21, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    LOBYTE(v18) = 1;
    goto LABEL_18;
  }
  v19 = v46;
  if ( v46 )
  {
    if ( *(_DWORD *)(v9 + 952) == 1 )
      RIMAddToActiveDevices(a1, v9);
  }
  else if ( (*(_DWORD *)(result + 2340) & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        v16,
        1,
        22,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        *(_DWORD *)result);
    }
    LOBYTE(v18) = 1;
    goto LABEL_17;
  }
  v18 = rimPopulateContactFrameData((__int64)a1, v12, a3, a4, a5, a6, v17, a7, &v44, &v43, &v42, &v41, &v45);
  v16 = 4;
  if ( v18 >= 0 )
  {
    v20 = a7;
    if ( *a7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 24, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    else
    {
      if ( v19 )
      {
        *(_DWORD *)(v17 + 48) = *(_DWORD *)(v17 + 2472);
        *(_QWORD *)(v17 + 56) = *(_QWORD *)(v17 + 2488);
        *(_QWORD *)(v17 + 64) = *(_QWORD *)(v17 + 2448);
      }
      QuadPart = (PalmTelemetry *)a1[107].QuadPart;
      if ( QuadPart )
        PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v17, v19);
      rimApplyPointerDevicePolicies(v9, (_DWORD *)v17, v19, v44, v43, v42, v41, v45);
      if ( (*(_DWORD *)(v17 + 32) & 0x20) != 0 )
      {
        if ( (a1[10].HighPart & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, *((_QWORD *)&v22 + 1), v24, v25);
        v19 = v46;
        v23 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        v22 = v23 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        a1[76] = *(LARGE_INTEGER *)((char *)&v22 + 8);
      }
      *(_QWORD *)(v17 + 72) = *(_QWORD *)(v17 + 2448);
      if ( !*(_DWORD *)(v17 + 52) && (*(_DWORD *)(v17 + 2660) & 4) == 0 && (*(_DWORD *)(v17 + 2420) & 4) != 0 )
      {
        v19 = v46;
        v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v17 + 52) = v23;
      }
      if ( !gDeviceArbitrationType && (*(_DWORD *)(v17 + 8) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, *((_QWORD *)&v22 + 1), 0xFFFFF78000000004uLL, v25);
      IsContactSuppressed = RIMCmIsContactSuppressed(v17);
      if ( !IsContactSuppressed || *(_DWORD *)(v9 + 24) != 7 || (v31 = 1, *(_DWORD *)(v17 + 8) != 16) )
        v31 = 0;
      if ( !IsContactSuppressed
        || v31
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v17)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
      {
        *(_DWORD *)(v17 + 2340) |= 1u;
        if ( v31 )
        {
          if ( (*(_DWORD *)(v17 + 32) & 2) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
          if ( !(unsigned int)RIMCmIsContactSuppressed(v17) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
          *(_DWORD *)(v17 + 2420) |= 0x2000000u;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v40) = *(_DWORD *)(v17 + 2660);
        LODWORD(v39) = *(_DWORD *)(v17 + 8);
        LODWORD(v38) = *(_DWORD *)v17;
        WPP_RECORDER_SF_dDD(
          v28,
          4u,
          v29,
          0x19u,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v38,
          v39,
          v40);
      }
    }
    goto LABEL_55;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_d(
      (_DWORD)gRimLog,
      v16,
      1,
      23,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      *(_DWORD *)v17);
LABEL_55:
    v16 = 4;
  }
  v20 = a7;
LABEL_57:
  if ( v18 < 0 )
  {
    if ( v19 )
      goto LABEL_64;
LABEL_17:
    result = RIMCmResetContactFrameState(v17);
    goto LABEL_18;
  }
  *a8 = v19;
  if ( *v20 )
  {
LABEL_64:
    result = RIMCmDeactivateContact(v9, v17);
    goto LABEL_18;
  }
  v36 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v17 + 2328) = *(_DWORD *)(v17 + 2420);
  *(_DWORD *)(v17 + 44) = v36;
  v37 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v37 - 1) > 3 )
  {
    result = (unsigned int)(v37 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v17 + 2504);
      *(_DWORD *)(v17 + 2336) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v17 + 2504);
    *(_DWORD *)(v17 + 2332) = result;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    return WPP_RECORDER_SF_d(
             (_DWORD)gRimLog,
             v16,
             1,
             26,
             (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
             v18);
  }
  return result;
}
