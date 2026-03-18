/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0033D90
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0034978 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0002390 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        __int64 a1,
        CInputDest *a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  void *v4; // rsi
  int v5; // edi
  CSpatialProcessor *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  _OWORD v20[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v21[7]; // [rsp+A0h] [rbp-60h] BYREF
  va_list va; // [rsp+160h] [rbp+60h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  v5 = a4;
  if ( (_DWORD)a4 == 6 || !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  memset(v21, 0, sizeof(v21));
  if ( !v4 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
    {
      v10 = HMValidateHandleNoSecure(v9, 1);
      v11 = v21[0];
      if ( v10 )
      {
        HIDWORD(v21[5]) = 2;
        v11 = LODWORD(v21[0]) | 4;
        DWORD2(v21[5]) |= 1u;
        LODWORD(v21[0]) |= 4u;
        *(_QWORD *)&v21[5] = v10;
        HIDWORD(v21[6]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 1088LL);
      }
      if ( v11 )
      {
LABEL_8:
        *(_QWORD *)&v21[6] = *(_QWORD *)(a3 + 96);
        DWORD2(v21[6]) = *(_DWORD *)(a3 + 104);
        DWORD1(v21[0]) = *(_DWORD *)(a3 + 108);
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        5,
        11,
        (__int64)&WPP_316427a6418039b01983fa5fffe52075_Traceguids,
        *(_QWORD *)(a3 + 8));
    }
LABEL_20:
    if ( !LODWORD(v21[0]) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(
          v8,
          v4,
          v5,
          (const struct CONTAINER_ID *)(a3 + 112),
          (struct tagINPUTDEST *)v21) )
    goto LABEL_20;
  if ( (v21[0] & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  v17 = (int)qword_1C02511B0;
  v18 = 0LL;
  if ( qword_1C02511B0 )
    v17 = qword_1C02511B0(*(_QWORD *)&v21[5]);
  if ( v17 )
  {
    if ( HIDWORD(v21[5]) != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    v19 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), 1);
    v18 = v19;
    if ( !v19 || *(char *)(*(_QWORD *)(v19 + 40) + 19LL) < 0 )
    {
      memset(v20, 0, sizeof(v20));
      v21[0] = v20[0];
      v21[2] = v20[2];
      v21[1] = v20[1];
      v21[4] = v20[4];
      v21[3] = v20[3];
      v21[6] = v20[6];
      v21[5] = v20[5];
    }
  }
  if ( LODWORD(v21[0]) )
  {
    if ( (v21[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    ApiSetEditionUpdateInputTransformFromHitTest((__int64)v21, v18, (__int64)v4, -(v21[1] & 1), a3 + 24, (__int64)va);
    goto LABEL_20;
  }
LABEL_9:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v21);
  return a2;
}
