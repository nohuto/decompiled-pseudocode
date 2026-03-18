/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0192070
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0192480 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0192394 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  const struct tagINPUTDEST *v17; // rax
  __int128 v18; // xmm2
  __int128 v19; // xmm7
  __m128i v20; // xmm0
  __int128 v21; // xmm6
  __int128 v22; // xmm5
  __int128 v23; // xmm4
  __int128 v24; // xmm3
  __int128 v25; // xmm1
  _OWORD v27[7]; // [rsp+28h] [rbp-E0h] BYREF
  char v28; // [rsp+98h] [rbp-70h]
  _BYTE v29[112]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v30[16]; // [rsp+118h] [rbp+10h] BYREF

  memset(v27, 0, sizeof(v27));
  v8 = *(struct _KTHREAD **)(a1 + 72);
  v9 = 0;
  v28 = 0;
  if ( v8 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v8 = *(struct _KTHREAD **)(a1 + 72);
  }
  if ( v8 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v10 = *(_QWORD *)(a3 + 40);
  if ( v10 )
  {
    *(_WORD *)a5 = *(_WORD *)(v10 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v10 + 24);
    v17 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v29, v10, 1LL);
    CInputDest::CInputDest((CInputDest *)v30, v17);
    CInputDest::operator=((__int64)v27, v30);
    CInputDest::SetEmpty((CInputDest *)v30);
    v18 = v27[5];
    v19 = v27[0];
    v20 = (__m128i)v27[5];
    v21 = v27[1];
    v22 = v27[2];
    v23 = v27[3];
    v24 = v27[4];
    v25 = v27[6];
    *(_OWORD *)(a5 + 8) = v27[0];
    *(_OWORD *)(a5 + 24) = v21;
    *(_OWORD *)(a5 + 40) = v22;
    *(_OWORD *)(a5 + 56) = v23;
    *(_OWORD *)(a5 + 72) = v24;
    *(__m128i *)(a5 + 88) = v20;
    *(_OWORD *)(a5 + 104) = v25;
    LOBYTE(v9) = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v9;
    *a2 = v19;
    a2[1] = v21;
    a2[2] = v22;
    a2[3] = v23;
    a2[4] = v24;
    a2[5] = v18;
    a2[6] = v25;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v11 = v27[1];
    *a2 = v27[0];
    v12 = v27[2];
    a2[1] = v11;
    v13 = v27[3];
    a2[2] = v12;
    v14 = v27[4];
    a2[3] = v13;
    v15 = v27[5];
    a2[4] = v14;
    v16 = v27[6];
    a2[5] = v15;
    a2[6] = v16;
  }
  CInputDest::SetEmpty((CInputDest *)v27);
  return a2;
}
