/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C018341C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01637AC (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C0164658 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0180134 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C0182434 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C0182A9C (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C018693C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0186B78 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C0186C84 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0186FB0 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned __int64 v22; // rcx
  int IsContactSuppressed; // eax
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // [rsp+30h] [rbp-51h]
  __int64 v31; // [rsp+38h] [rbp-49h]
  __int64 v32; // [rsp+40h] [rbp-41h]
  int v33; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v34; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v36; // [rsp+84h] [rbp+3h] BYREF
  __int64 v37; // [rsp+88h] [rbp+7h] BYREF
  int v38; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 464);
  v9 = *(_QWORD *)(a2 + 480);
  v38 = 0;
  v12 = a2;
  v36 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v37 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  result = rimFindOrCreateActiveContact(v9, v13, a3, a4, a5, &v38);
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
  v19 = v38;
  if ( v38 )
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
  v18 = rimPopulateContactFrameData((__int64)a1, v12, a3, a4, a5, a6, v17, a7, &v36, &v35, &v34, &v33, &v37);
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
      rimApplyPointerDevicePolicies(v9, (_DWORD *)v17, v19, v36, v35, v34, v33, v37);
      if ( (*(_DWORD *)(v17 + 32) & 0x20) != 0 )
      {
        if ( (a1[10].HighPart & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
        v19 = v38;
        v22 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        a1[76].QuadPart = (v22 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      }
      *(_QWORD *)(v17 + 72) = *(_QWORD *)(v17 + 2448);
      if ( !*(_DWORD *)(v17 + 52) && (*(_DWORD *)(v17 + 2660) & 4) == 0 && (*(_DWORD *)(v17 + 2420) & 4) != 0 )
      {
        v19 = v38;
        v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v17 + 52) = v22;
      }
      if ( !gDeviceArbitrationType && (*(_DWORD *)(v17 + 8) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      IsContactSuppressed = RIMCmIsContactSuppressed(v17);
      if ( !IsContactSuppressed || *(_DWORD *)(v9 + 24) != 7 || (v25 = 1, *(_DWORD *)(v17 + 8) != 16) )
        v25 = 0;
      if ( !IsContactSuppressed
        || v25
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v17)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
      {
        *(_DWORD *)(v17 + 2340) |= 1u;
        if ( v25 )
        {
          if ( (*(_DWORD *)(v17 + 32) & 2) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          if ( !(unsigned int)RIMCmIsContactSuppressed(v17) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
          *(_DWORD *)(v17 + 2420) |= 0x2000000u;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = *(_DWORD *)(v17 + 2660);
        LODWORD(v31) = *(_DWORD *)(v17 + 8);
        LODWORD(v30) = *(_DWORD *)v17;
        WPP_RECORDER_SF_dDD(
          v24,
          4u,
          v26,
          0x19u,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v30,
          v31,
          v32);
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
  v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v17 + 2328) = *(_DWORD *)(v17 + 2420);
  *(_DWORD *)(v17 + 44) = v28;
  v29 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v29 - 1) > 3 )
  {
    result = (unsigned int)(v29 - 5);
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
