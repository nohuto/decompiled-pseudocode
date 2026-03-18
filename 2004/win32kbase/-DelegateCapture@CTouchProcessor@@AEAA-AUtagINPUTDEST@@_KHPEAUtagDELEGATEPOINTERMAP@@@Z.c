/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C018C370
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C018C780 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018C694 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  const struct tagINPUTDEST *v20; // rax
  __int128 v21; // xmm2
  __int128 v22; // xmm7
  __m128i v23; // xmm0
  __int128 v24; // xmm6
  __int128 v25; // xmm5
  __int128 v26; // xmm4
  __int128 v27; // xmm3
  __int128 v28; // xmm1
  _OWORD v30[7]; // [rsp+28h] [rbp-E0h] BYREF
  char v31; // [rsp+98h] [rbp-70h]
  _BYTE v32[112]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v33[16]; // [rsp+118h] [rbp+10h] BYREF

  memset(v30, 0, sizeof(v30));
  v11 = *(struct _KTHREAD **)(a1 + 72);
  v12 = 0;
  v31 = 0;
  if ( v11 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9, v10);
    v11 = *(struct _KTHREAD **)(a1 + 72);
  }
  if ( v11 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9, v10);
  v13 = *(_QWORD *)(a3 + 40);
  if ( v13 )
  {
    *(_WORD *)a5 = *(_WORD *)(v13 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v13 + 24);
    v20 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v32, v13, 1LL);
    CInputDest::CInputDest((CInputDest *)v33, v20);
    CInputDest::operator=((__int64)v30, v33);
    CInputDest::SetEmpty((CInputDest *)v33);
    v21 = v30[5];
    v22 = v30[0];
    v23 = (__m128i)v30[5];
    v24 = v30[1];
    v25 = v30[2];
    v26 = v30[3];
    v27 = v30[4];
    v28 = v30[6];
    *(_OWORD *)(a5 + 8) = v30[0];
    *(_OWORD *)(a5 + 24) = v24;
    *(_OWORD *)(a5 + 40) = v25;
    *(_OWORD *)(a5 + 56) = v26;
    *(_OWORD *)(a5 + 72) = v27;
    *(__m128i *)(a5 + 88) = v23;
    *(_OWORD *)(a5 + 104) = v28;
    LOBYTE(v12) = _mm_cvtsi128_si32(_mm_srli_si128(v23, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v12;
    *a2 = v22;
    a2[1] = v24;
    a2[2] = v25;
    a2[3] = v26;
    a2[4] = v27;
    a2[5] = v21;
    a2[6] = v28;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, 0LL, v10);
    v14 = v30[1];
    *a2 = v30[0];
    v15 = v30[2];
    a2[1] = v14;
    v16 = v30[3];
    a2[2] = v15;
    v17 = v30[4];
    a2[3] = v16;
    v18 = v30[5];
    a2[4] = v17;
    v19 = v30[6];
    a2[5] = v18;
    a2[6] = v19;
  }
  CInputDest::SetEmpty((CInputDest *)v30);
  return a2;
}
