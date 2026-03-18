/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C019DEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019B930 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01AB730 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C01C7580 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C01CC48C (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v9; // rsi
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  const struct CPointerInputFrame *v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // edx
  _BYTE v29[40]; // [rsp+58h] [rbp-A8h] BYREF
  CInpLockGuard *v30; // [rsp+80h] [rbp-80h]
  _OWORD v31[8]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a2;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      110,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v29,
    (struct CInpLockGuard *)(a1 + 5),
    (void *)v9);
  if ( v9 )
  {
    v17 = CTouchProcessor::ReferenceFrame(a1, *(unsigned int *)(v9 + 28), v13, v14);
    if ( v17 )
    {
      CInputDest::CInputDest((CInputDest *)v31, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v17,
        *(unsigned int *)(v9 + 32),
        (const struct CInputDest *)v31,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v31);
      v18 = (_QWORD *)(*((_QWORD *)v17 + 17) + 480LL * *(unsigned int *)(v9 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v18[25], *(_QWORD *)((char *)v18 + 148), a6) )
        *a6 = v18[25];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v18[27], *(_QWORD *)((char *)v18 + 148), a7) )
        *a7 = v18[27];
      CTouchProcessor::UnreferenceFrame(a1, v17, v19, v20);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(v9 + 16), *(unsigned int *)(v9 + 28), *a7, a5);
      v21 = *(_OWORD *)(a3 + 16);
      v31[0] = *(_OWORD *)a3;
      v22 = *(_OWORD *)(a3 + 32);
      v31[1] = v21;
      v23 = *(_OWORD *)(a3 + 48);
      v31[2] = v22;
      v24 = *(_OWORD *)(a3 + 64);
      v31[3] = v23;
      v25 = *(_OWORD *)(a3 + 80);
      v31[4] = v24;
      v26 = *(_OWORD *)(a3 + 96);
      v31[5] = v25;
      v31[6] = v26;
      ApiSetEditionDoPointerDPITransforms(v31, a6, a7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v27) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          7,
          113,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
      v11 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 112;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 111;
LABEL_12:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v15->DeviceExtension, v12, 7, v16, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v30, (struct CRefUnRefPointerMsgId *)v29);
  return v11;
}
