/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C019B9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199430 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01A93B0 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C01C5200 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C01CA10C (ApiSetPointerPromotionOnPointerInputRetrieval.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // edx
  _BYTE v32[40]; // [rsp+58h] [rbp-A8h] BYREF
  CInpLockGuard *v33; // [rsp+80h] [rbp-80h]
  _OWORD v34[8]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a2;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      109,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v32,
    (struct CInpLockGuard *)(a1 + 5),
    (void *)v9);
  if ( v9 )
  {
    v17 = CTouchProcessor::ReferenceFrame(a1, *(unsigned int *)(v9 + 28), v13, v14);
    if ( v17 )
    {
      CInputDest::CInputDest((CInputDest *)v34, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v17,
        *(unsigned int *)(v9 + 32),
        (const struct CInputDest *)v34,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v34, v18, v19, v20);
      v21 = (_QWORD *)(*((_QWORD *)v17 + 17) + 480LL * *(unsigned int *)(v9 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v21[25], *(_QWORD *)((char *)v21 + 148), a6) )
        *a6 = v21[25];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v21[27], *(_QWORD *)((char *)v21 + 148), a7) )
        *a7 = v21[27];
      CTouchProcessor::UnreferenceFrame(a1, v17, v22, v23);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(v9 + 16), *(unsigned int *)(v9 + 28), *a7, a5);
      v24 = *(_OWORD *)(a3 + 16);
      v34[0] = *(_OWORD *)a3;
      v25 = *(_OWORD *)(a3 + 32);
      v34[1] = v24;
      v26 = *(_OWORD *)(a3 + 48);
      v34[2] = v25;
      v27 = *(_OWORD *)(a3 + 64);
      v34[3] = v26;
      v28 = *(_OWORD *)(a3 + 80);
      v34[4] = v27;
      v29 = *(_OWORD *)(a3 + 96);
      v34[5] = v28;
      v34[6] = v29;
      ApiSetEditionDoPointerDPITransforms(v34, a6, a7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v30) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v30,
          7,
          112,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
      v11 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 111;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 110;
LABEL_12:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v15->DeviceExtension, v12, 7, v16, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v33, (struct CRefUnRefPointerMsgId *)v32);
  return v11;
}
