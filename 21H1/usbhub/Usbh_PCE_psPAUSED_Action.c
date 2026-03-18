/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C00195F0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002310 (UsbhRefPdo.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0002580 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     UsbhSignalPauseEvent @ 0x1C00027A0 (UsbhSignalPauseEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034EEC (UsbhUnlockPcqWithTag.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C6A0 (UsbhBusUnlatchPdo.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r13
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  KSPIN_LOCK *v23; // rsi
  KIRQL v24; // r14
  _DWORD *v25; // rdx
  _QWORD **v26; // rsi
  _QWORD *v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  KIRQL v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // esi
  int v48; // esi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  KSPIN_LOCK *v53; // r15
  KIRQL v54; // si
  int v55; // r9d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    goto LABEL_76;
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v7 = 812661041;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = v6;
    LODWORD(v6) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      a3,
      45,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  *(_DWORD *)(a2 + 448) = 1;
  v11 = (unsigned __int16)v9;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 19LL;
      *(_QWORD *)(v13 + 24) = v9;
      v11 = *(unsigned __int16 *)(a2 + 4);
    }
  }
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 24) = (unsigned __int16)v11;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v14;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 19;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(_DWORD *)(a2 + 12);
  if ( v19 != 12 && (v19 < 5 || v19 > 6 && v19 != 16) )
  {
    UsbhFlushPortChangeQueue(a1, a2, v14, v11);
    v47 = v19 - 10;
    if ( v47 )
    {
      v48 = v47 - 3;
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          v49 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v49 + a2 + 1384) = 3;
        }
      }
      else
      {
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v50 + a2 + 1384) = 12;
      }
    }
    else
    {
      v51 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v51 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
    return;
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v19;
  v20 = *(_QWORD *)(a1 + 64);
  if ( !v20 )
    goto LABEL_76;
  if ( *(_DWORD *)v20 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v20);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v22 = *(_QWORD *)(v20 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
    *(_DWORD *)v22 = 1397778803;
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_QWORD *)(v22 + 16) = 0LL;
    *(_QWORD *)(v22 + 24) = v21;
  }
  v23 = (KSPIN_LOCK *)(v20 + 4944);
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v23, v24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v25 = *(_DWORD **)(a1 + 64);
  if ( !v25 )
    goto LABEL_76;
  if ( *v25 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v25);
  v26 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v27 = *v26;
    if ( *v26 == v26 )
      break;
    if ( (_QWORD **)v27[1] != v26 || (v52 = (_QWORD *)*v27, *(_QWORD **)(*v27 + 8LL) != v27) )
      __fastfail(3u);
    *v26 = v52;
    v52[1] = v26;
    UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v27 - 2), 1);
  }
  v28 = *(int *)(a2 + 12);
  v29 = *(unsigned __int16 *)(a2 + 4);
  v30 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v31 = *(_QWORD *)(a1 + 64);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
      *(_DWORD *)v32 = 757952880;
      *(_QWORD *)(v32 + 8) = 0LL;
      *(_QWORD *)(v32 + 16) = v28;
      *(_QWORD *)(v32 + 24) = v29;
      v30 = *(_DWORD *)(a2 + 12);
    }
  }
  v33 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v33 + a2 + 1384) = v30;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
  v34 = *(unsigned __int16 *)(a2 + 4);
  v35 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 1329877100;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v34;
      *(_QWORD *)(v37 + 24) = 1884308559LL;
    }
  }
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 1413771367;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = v34;
      *(_QWORD *)(v40 + 24) = 0LL;
    }
  }
  if ( !(_WORD)v34 )
    goto LABEL_48;
  v41 = *(_QWORD *)(a1 + 64);
  if ( !v41 )
LABEL_76:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v41 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v41);
  if ( (unsigned __int16)v34 <= *(unsigned __int8 *)(v41 + 2938) )
  {
    v42 = *(_QWORD *)(v41 + 3056);
    if ( v42 )
    {
      v43 = 2928 * v34;
      v44 = 2928 * v34 + v42 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v43 = *(_QWORD *)(v41 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
        *(_DWORD *)v43 = 1044672615;
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_QWORD *)(v43 + 16) = v34;
        *(_QWORD *)(v43 + 24) = v44;
      }
      if ( v44 )
      {
        v35 = *(_QWORD *)(v44 + 392);
        if ( v35 )
          v35 = UsbhRefPdo(v43, v35, 0LL, 1884308559);
      }
    }
  }
LABEL_48:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v38);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v45 = *(_QWORD *)(a1 + 64);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
      *(_DWORD *)v46 = 1634744625;
      *(_QWORD *)(v46 + 8) = 0LL;
      *(_QWORD *)(v46 + 16) = a2;
      *(_QWORD *)(v46 + 24) = v35;
    }
  }
  if ( v35 )
  {
    v53 = (KSPIN_LOCK *)(v5 + 5168);
    *(_DWORD *)(a2 + 416) = 1;
    v54 = KeAcquireSpinLockRaiseToDpc(v53);
    if ( *((_QWORD *)PdoExt(v35) + 108) )
    {
      Log(a1, 4, 825847906, v35, 0LL);
      KeReleaseSpinLock(v53, v54);
      UsbhCancelResetTimeout(a1, a2, 1);
      UsbhReleaseEnumBusLockEx(a1, a3, *(_WORD *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v35, -1073741823);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    else
    {
      KeReleaseSpinLock(v53, v54);
    }
    UsbhBusUnlatchPdo(a1, v35, a2, v55, 0LL);
  }
}
