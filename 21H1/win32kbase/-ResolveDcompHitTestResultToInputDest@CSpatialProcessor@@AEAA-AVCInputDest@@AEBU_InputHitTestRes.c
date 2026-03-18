/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0063D5C
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0064348 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001C48 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0002240 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        __int64 a1,
        CInputDest *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v4; // rsi
  CSpatialProcessor *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  _OWORD v17[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v18[7]; // [rsp+A0h] [rbp-60h] BYREF
  va_list va; // [rsp+160h] [rbp+60h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  if ( a4 == 6 || !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  memset(v18, 0, sizeof(v18));
  if ( !v4 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
    {
      v10 = HMValidateHandleNoSecure(v9, 1);
      v11 = v18[0];
      if ( v10 )
      {
        HIDWORD(v18[5]) = 2;
        v11 = LODWORD(v18[0]) | 4;
        DWORD2(v18[5]) |= 1u;
        LODWORD(v18[0]) |= 4u;
        *(_QWORD *)&v18[5] = v10;
        HIDWORD(v18[6]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) + 1088LL);
      }
      if ( v11 )
      {
LABEL_8:
        *(_QWORD *)&v18[6] = *(_QWORD *)(a3 + 96);
        DWORD2(v18[6]) = *(_DWORD *)(a3 + 104);
        DWORD1(v18[0]) = *(_DWORD *)(a3 + 108);
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
    if ( !LODWORD(v18[0]) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(
          v8,
          v4,
          a4,
          (const struct CONTAINER_ID *)(a3 + 112),
          (struct tagINPUTDEST *)v18) )
    goto LABEL_20;
  if ( (v18[0] & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v14 = (int)qword_1C0259170;
  v15 = 0LL;
  if ( qword_1C0259170 )
    v14 = qword_1C0259170(*(_QWORD *)&v18[5]);
  if ( v14 )
  {
    if ( HIDWORD(v18[5]) != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v16 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), 1);
    v15 = v16;
    if ( !v16 || *(char *)(*(_QWORD *)(v16 + 40) + 19LL) < 0 )
    {
      memset(v17, 0, sizeof(v17));
      v18[0] = v17[0];
      v18[2] = v17[2];
      v18[1] = v17[1];
      v18[4] = v17[4];
      v18[3] = v17[3];
      v18[6] = v17[6];
      v18[5] = v17[5];
    }
  }
  if ( LODWORD(v18[0]) )
  {
    if ( (v18[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    ApiSetEditionUpdateInputTransformFromHitTest((__int64)v18, v15, (__int64)v4, -(v18[1] & 1), a3 + 24, (__int64)va);
    goto LABEL_20;
  }
LABEL_9:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v18);
  return a2;
}
