/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01A3C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01B1490 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C01CD500 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C01D240C (ApiSetPointerPromotionOnPointerInputRetrieval.c)
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
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  const struct CPointerInputFrame *v15; // r12
  _QWORD *v16; // rdi
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // edx
  _BYTE v25[40]; // [rsp+58h] [rbp-A8h] BYREF
  CInpLockGuard *v26; // [rsp+80h] [rbp-80h]
  _OWORD v27[8]; // [rsp+90h] [rbp-70h] BYREF

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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v25,
    (struct CInpLockGuard *)(a1 + 5),
    (void *)v9);
  if ( v9 )
  {
    v15 = CTouchProcessor::ReferenceFrame(a1, *(_DWORD *)(v9 + 28));
    if ( v15 )
    {
      CInputDest::CInputDest((CInputDest *)v27, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v15,
        *(_DWORD *)(v9 + 32),
        (const struct CInputDest *)v27,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v27);
      v16 = (_QWORD *)(*((_QWORD *)v15 + 17) + 480LL * *(unsigned int *)(v9 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[25], *(_QWORD *)((char *)v16 + 148), a6) )
        *a6 = v16[25];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[27], *(_QWORD *)((char *)v16 + 148), a7) )
        *a7 = v16[27];
      CTouchProcessor::UnreferenceFrame(a1, v15);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(v9 + 16), *(unsigned int *)(v9 + 28), *a7, a5);
      v17 = *(_OWORD *)(a3 + 16);
      v27[0] = *(_OWORD *)a3;
      v18 = *(_OWORD *)(a3 + 32);
      v27[1] = v17;
      v19 = *(_OWORD *)(a3 + 48);
      v27[2] = v18;
      v20 = *(_OWORD *)(a3 + 64);
      v27[3] = v19;
      v21 = *(_OWORD *)(a3 + 80);
      v27[4] = v20;
      v22 = *(_OWORD *)(a3 + 96);
      v27[5] = v21;
      v27[6] = v22;
      ApiSetEditionDoPointerDPITransforms(v27, a6, a7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v23) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          7,
          112,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
      v11 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 111;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 110;
LABEL_12:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v26, (struct CRefUnRefPointerMsgId *)v25);
  return v11;
}
