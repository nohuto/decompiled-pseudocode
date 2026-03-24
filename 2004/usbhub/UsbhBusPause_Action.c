/*
 * XREFs of UsbhBusPause_Action @ 0x1C0006460
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0003180 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 *     UsbhPostInterrupt @ 0x1C00033C0 (UsbhPostInterrupt.c)
 *     UsbhDerefPdo @ 0x1C0003770 (UsbhDerefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C0015BF8 (UsbhSsh_CheckHubIdle.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // rbp
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  IRP *v6; // r8
  IRP *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 i; // di
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rcx
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  void *v23; // rdx
  __int64 v24; // rcx
  KIRQL v25; // bp
  void *v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // r8d
  void *v33; // rdx
  __int64 v34; // rcx
  void *v35; // rdx
  __int64 v36; // rcx
  unsigned __int8 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r10
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  void *v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rcx
  __int64 v50; // r15
  __int64 v51; // rsi
  void *v52; // rdx
  __int64 v53; // rcx
  KIRQL v54; // r12
  void *v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v63; // rsi
  char *PoolWithTag; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rsi
  char *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  unsigned int v72; // edx
  KIRQL v73; // si
  __int64 v74; // [rsp+78h] [rbp-60h]
  __int64 v75; // [rsp+80h] [rbp-58h]

  v2 = a2;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
LABEL_140:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 829776240;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 678, 0xFFFFFFFF) == 1 )
  {
    v6 = (IRP *)*((_QWORD *)DeviceExtension + 333);
    v7 = v6;
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_DWORD *)v9 = 1363763555;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v6;
        *(_QWORD *)(v9 + 24) = 0LL;
        v7 = (IRP *)*((_QWORD *)DeviceExtension + 333);
      }
    }
    IoCancelIrp(v7);
  }
  KeWaitForSingleObject(DeviceExtension + 2688, Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(v2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *((_DWORD *)DeviceExtension + 678) = 0;
    KeResetEvent((PRKEVENT)DeviceExtension + 112);
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      v11 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v11 )
        goto LABEL_140;
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v11);
      if ( i > v11[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 1413771367;
        *(_QWORD *)(v12 + 16) = i;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
      if ( i )
      {
        v13 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v13 )
          goto LABEL_140;
        if ( *(_DWORD *)v13 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v13);
        if ( i > v13[2938] )
        {
          v15 = 0LL;
          v74 = 0LL;
        }
        else
        {
          v14 = *((_QWORD *)v13 + 382);
          if ( v14 )
          {
            v15 = 2928LL * i + v14 - 2928;
            v74 = v15;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v16 = *((_QWORD *)v13 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
              *(_DWORD *)v16 = 1044672615;
              *(_QWORD *)(v16 + 8) = 0LL;
              *(_QWORD *)(v16 + 16) = i;
              *(_QWORD *)(v16 + 24) = v15;
            }
          }
          else
          {
            v15 = 0LL;
            v74 = 0LL;
          }
        }
      }
      else
      {
        v15 = 0LL;
        v74 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v17 = DeviceObject->DeviceExtension;
        if ( v17 )
        {
          v18 = *((_QWORD *)v17 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
          *(_DWORD *)v18 = 1467310448;
          *(_QWORD *)(v18 + 24) = i;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = 0LL;
        }
      }
      if ( v15 )
      {
        v19 = *(int *)(v15 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v20 = DeviceObject->DeviceExtension;
          if ( v20 )
          {
            v21 = *((_QWORD *)v20 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
            *(_DWORD *)v21 = 846553456;
            *(_QWORD *)(v21 + 24) = i;
            *(_QWORD *)(v21 + 8) = 0LL;
            *(_QWORD *)(v21 + 16) = v19;
          }
        }
      }
      if ( *(_DWORD *)(v2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v15 + 520), Executive, 0, 0, 0LL);
      v22 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v23 = DeviceObject->DeviceExtension;
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
          *(_DWORD *)v24 = 1329877100;
          *(_QWORD *)(v24 + 16) = i;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = 1348564304LL;
        }
      }
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v26 = DeviceObject->DeviceExtension;
        if ( v26 )
        {
          v27 = *((_QWORD *)v26 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
          *(_DWORD *)v27 = 1413771367;
          *(_QWORD *)(v27 + 16) = i;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v28 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v28 )
          goto LABEL_140;
        if ( *(_DWORD *)v28 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v28);
        if ( i <= v28[2938] )
        {
          v29 = *((_QWORD *)v28 + 382);
          if ( v29 )
          {
            v30 = 2928LL * i + v29 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v31 = *((_QWORD *)v28 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
              *(_DWORD *)v31 = 1044672615;
              *(_QWORD *)(v31 + 8) = 0LL;
              *(_QWORD *)(v31 + 16) = i;
              *(_QWORD *)(v31 + 24) = v30;
            }
            if ( v30 )
            {
              v22 = *(_QWORD *)(v30 + 392);
              if ( v22 )
              {
                v63 = PdoExt(*(_QWORD *)(v30 + 392));
                PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                if ( PoolWithTag )
                {
                  *(_QWORD *)(PoolWithTag + 4) = 0LL;
                  *(_QWORD *)(PoolWithTag + 12) = 0LL;
                  *((_DWORD *)PoolWithTag + 5) = 0;
                  *((_QWORD *)PoolWithTag + 3) = 1348564304LL;
                  *(_DWORD *)PoolWithTag = 1668571500;
                  *((_QWORD *)PoolWithTag + 4) = v22;
                  *((_QWORD *)PoolWithTag + 5) = 0LL;
                  v65 = PoolWithTag + 8;
                  v66 = *(_QWORD **)(v63 + 1280);
                  if ( *v66 != v63 + 1272 )
                    goto LABEL_134;
                  *v65 = v63 + 1272;
                  v65[1] = v66;
                  *v66 = v65;
                  *(_QWORD *)(v63 + 1280) = v65;
                }
                else
                {
                  ++*(_DWORD *)(v63 + 1288);
                }
              }
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
      if ( v22 )
      {
        v67 = PdoExt(v22);
        KeWaitForSingleObject((PVOID)(v67 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v67 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v67 + 2896), 0, 0);
        Log((_DWORD)DeviceObject, 256, 1968194639, v22, 1348564304LL);
        LOBYTE(v67) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((__int64)DeviceObject, v22, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v67);
      }
      HIDWORD(v75) = 0;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v33 = DeviceObject->DeviceExtension;
        if ( v33 )
        {
          v34 = *((_QWORD *)v33 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
          *(_DWORD *)v34 = 829912937;
          *(_QWORD *)(v34 + 24) = i;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = a2;
        }
      }
      LODWORD(v75) = 0x80000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          i);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v35 = DeviceObject->DeviceExtension;
        if ( v35 )
        {
          v36 = *((_QWORD *)v35 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v35 + 220) & *((_DWORD *)v35 + 221));
          *(_DWORD *)v36 = 1413771367;
          *(_QWORD *)(v36 + 16) = i;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v37 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v37 )
          goto LABEL_140;
        if ( *(_DWORD *)v37 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v37);
        if ( i <= v37[2938] )
        {
          v38 = *((_QWORD *)v37 + 382);
          if ( v38 )
          {
            v32 = i;
            v39 = 2928LL * i + v38 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v40 = *((_QWORD *)v37 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
              *(_DWORD *)v40 = 1044672615;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 16) = i;
              *(_QWORD *)(v40 + 24) = v39;
            }
            if ( v39 )
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v39, 4, a2, v75, 0, 0LL, 0LL);
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          80,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          i);
      v41 = DeviceObject->DeviceExtension;
      if ( !v41 )
        goto LABEL_140;
      if ( *v41 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v41);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v41,
          v32,
          66,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          i,
          a2);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v42 = DeviceObject->DeviceExtension;
        if ( v42 )
        {
          v43 = *((_QWORD *)v42 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
          *(_DWORD *)v43 = 842024272;
          *(_QWORD *)(v43 + 24) = i;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v44 = DeviceObject->DeviceExtension;
        if ( v44 )
        {
          v45 = *((_QWORD *)v44 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v44 + 220) & *((_DWORD *)v44 + 221));
          *(_DWORD *)v45 = 1413771367;
          *(_QWORD *)(v45 + 16) = i;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_QWORD *)(v45 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v46 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v46 )
          goto LABEL_140;
        if ( *(_DWORD *)v46 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v46);
        if ( i <= v46[2938] )
        {
          v47 = *((_QWORD *)v46 + 382);
          if ( v47 )
          {
            v48 = 2928LL * i + v47 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v49 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              *(_DWORD *)v49 = 1044672615;
              *(_QWORD *)(v49 + 8) = 0LL;
              *(_QWORD *)(v49 + 16) = i;
              *(_QWORD *)(v49 + 24) = v48;
            }
            if ( v48 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v48, 2, a2, 0LL, 0, 0LL, 0LL);
              v50 = 0LL;
              v51 = *(unsigned __int16 *)(v48 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v52 = DeviceObject->DeviceExtension;
                if ( v52 )
                {
                  v53 = *((_QWORD *)v52 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v52 + 220) & *((_DWORD *)v52 + 221));
                  *(_DWORD *)v53 = 1329877100;
                  *(_QWORD *)(v53 + 8) = 0LL;
                  *(_QWORD *)(v53 + 16) = v51;
                  *(_QWORD *)(v53 + 24) = 1884308559LL;
                }
              }
              v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v55 = DeviceObject->DeviceExtension;
                if ( v55 )
                {
                  v56 = *((_QWORD *)v55 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v55 + 220) & *((_DWORD *)v55 + 221));
                  *(_DWORD *)v56 = 1413771367;
                  *(_QWORD *)(v56 + 8) = 0LL;
                  *(_QWORD *)(v56 + 16) = v51;
                  *(_QWORD *)(v56 + 24) = 0LL;
                }
              }
              if ( (_WORD)v51 )
              {
                v57 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v57 )
                  goto LABEL_140;
                if ( *(_DWORD *)v57 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v57);
                if ( (unsigned __int16)v51 <= v57[2938] )
                {
                  v58 = *((_QWORD *)v57 + 382);
                  if ( v58 )
                  {
                    v59 = 2928 * v51 + v58 - 2928;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v60 = *((_QWORD *)v57 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v57 + 220) & *((_DWORD *)v57 + 221));
                      *(_DWORD *)v60 = 1044672615;
                      *(_QWORD *)(v60 + 8) = 0LL;
                      *(_QWORD *)(v60 + 16) = v51;
                      *(_QWORD *)(v60 + 24) = v59;
                    }
                    if ( v59 )
                    {
                      v50 = *(_QWORD *)(v59 + 392);
                      if ( v50 )
                      {
                        v68 = PdoExt(*(_QWORD *)(v59 + 392));
                        v69 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                        if ( v69 )
                        {
                          *(_QWORD *)(v69 + 4) = 0LL;
                          *(_QWORD *)(v69 + 12) = 0LL;
                          *((_DWORD *)v69 + 5) = 0;
                          *((_QWORD *)v69 + 3) = 1884308559LL;
                          *(_DWORD *)v69 = 1668571500;
                          *((_QWORD *)v69 + 4) = v50;
                          *((_QWORD *)v69 + 5) = 0LL;
                          v70 = v69 + 8;
                          v71 = *(_QWORD **)(v68 + 1280);
                          if ( *v71 != v68 + 1272 )
LABEL_134:
                            __fastfail(3u);
                          *v70 = v68 + 1272;
                          v70[1] = v71;
                          *v71 = v70;
                          *(_QWORD *)(v68 + 1280) = v70;
                        }
                        else
                        {
                          ++*(_DWORD *)(v68 + 1288);
                        }
                      }
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v54);
              if ( v50 )
              {
                v72 = *(_DWORD *)(v48 + 400);
                *(_QWORD *)(v48 + 376) = v48 + 24;
                *(_DWORD *)(v48 + 416) = 1;
                UsbhCancelEnumeration((__int64)DeviceObject, v72, v48, v50);
                *(_QWORD *)(v48 + 376) = 0LL;
                if ( *(_DWORD *)(v48 + 416) )
                {
                  Log((_DWORD)DeviceObject, 1024, 1970032689, v50, v48);
                  v73 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v48 + 416) = 0;
                  Log((_DWORD)DeviceObject, 1024, 1970032690, v50, v48);
                  UsbhDerefPdo((__int64)DeviceObject, v50, 0LL, 0x7050444Fu);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v73);
                }
                else
                {
                  *(_DWORD *)(v48 + 400) = 0;
                }
              }
              v15 = v74;
            }
          }
        }
      }
      v2 = a2;
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v15 + 520), 0, 0);
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v61 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v61 = 1047880048;
      *(_QWORD *)(v61 + 8) = 0LL;
      *(_QWORD *)(v61 + 16) = 0LL;
      *(_QWORD *)(v61 + 24) = 0LL;
    }
    return 0LL;
  }
}
