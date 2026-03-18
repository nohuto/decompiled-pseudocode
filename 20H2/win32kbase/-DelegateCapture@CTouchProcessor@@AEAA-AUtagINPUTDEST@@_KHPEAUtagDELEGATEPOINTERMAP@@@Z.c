/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0189E48
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C018A260 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018A174 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  const struct tagINPUTDEST *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 v27; // xmm2
  __int128 v28; // xmm7
  __m128i v29; // xmm0
  __int128 v30; // xmm6
  __int128 v31; // xmm5
  __int128 v32; // xmm4
  __int128 v33; // xmm3
  __int128 v34; // xmm1
  _OWORD v36[7]; // [rsp+28h] [rbp-E0h] BYREF
  char v37; // [rsp+98h] [rbp-70h]
  _BYTE v38[112]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v39[16]; // [rsp+118h] [rbp+10h] BYREF

  memset(v36, 0, sizeof(v36));
  v11 = *(struct _KTHREAD **)(a1 + 72);
  v12 = 0;
  v37 = 0;
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
    v23 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v38, v13, 1LL);
    CInputDest::CInputDest((CInputDest *)v39, v23);
    CInputDest::operator=((__int64)v36, v39);
    CInputDest::SetEmpty((CInputDest *)v39, v24, v25, v26);
    v27 = v36[5];
    v28 = v36[0];
    v29 = (__m128i)v36[5];
    v30 = v36[1];
    v31 = v36[2];
    v32 = v36[3];
    v33 = v36[4];
    v34 = v36[6];
    *(_OWORD *)(a5 + 8) = v36[0];
    *(_OWORD *)(a5 + 24) = v30;
    *(_OWORD *)(a5 + 40) = v31;
    *(_OWORD *)(a5 + 56) = v32;
    *(_OWORD *)(a5 + 72) = v33;
    *(__m128i *)(a5 + 88) = v29;
    *(_OWORD *)(a5 + 104) = v34;
    LOBYTE(v12) = _mm_cvtsi128_si32(_mm_srli_si128(v29, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v12;
    *a2 = v28;
    a2[1] = v30;
    a2[2] = v31;
    a2[3] = v32;
    a2[4] = v33;
    a2[5] = v27;
    a2[6] = v34;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, 0LL, v10);
    v17 = v36[1];
    *a2 = v36[0];
    v18 = v36[2];
    a2[1] = v17;
    v19 = v36[3];
    a2[2] = v18;
    v20 = v36[4];
    a2[3] = v19;
    v21 = v36[5];
    a2[4] = v20;
    v22 = v36[6];
    a2[5] = v21;
    a2[6] = v22;
  }
  CInputDest::SetEmpty((CInputDest *)v36, v14, v15, v16);
  return a2;
}
