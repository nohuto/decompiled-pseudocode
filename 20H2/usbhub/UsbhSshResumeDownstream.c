/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C000C0F0
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C00140B0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0015264 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005A1A8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002310 (UsbhRefPdo.c)
 *     UsbhSyncBusResume @ 0x1C0002978 (UsbhSyncBusResume.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00038F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0014C0C (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0015EB4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSshPropagateResume @ 0x1C001BB74 (UsbhSshPropagateResume.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034654 (UsbhPCE_ResumeTimeout.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  int v4; // esi
  unsigned __int16 i; // bx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // esi
  unsigned __int16 j; // r15
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rcx
  KIRQL v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // r14
  struct _KEVENT *v42; // rbp
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rax
  bool v46; // zf
  __int64 k; // r12
  int v48; // eax
  KIRQL v49; // al
  KSPIN_LOCK *v50; // rcx
  int v51; // r10d
  int v52; // eax
  char v53; // r10
  int v54; // r11d
  struct _KEVENT *v55; // rcx
  int v56; // r10d
  __int64 v57; // rax
  int v58; // eax
  int Timeout; // [rsp+20h] [rbp-C8h]
  int v60; // [rsp+48h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-84h] BYREF
  int v62; // [rsp+68h] [rbp-80h] BYREF
  int v63; // [rsp+6Ch] [rbp-7Ch]
  __int16 v64; // [rsp+70h] [rbp-78h] BYREF
  int v65; // [rsp+72h] [rbp-76h]
  __int16 v66; // [rsp+76h] [rbp-72h]
  int v67; // [rsp+78h] [rbp-70h] BYREF
  __int64 v68; // [rsp+80h] [rbp-68h]
  int v69; // [rsp+88h] [rbp-60h] BYREF
  struct _KEVENT *v70; // [rsp+90h] [rbp-58h]
  __int16 v71; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v72; // [rsp+F8h] [rbp+10h]
  char v73; // [rsp+100h] [rbp+18h]
  int v74; // [rsp+108h] [rbp+20h]

  v73 = a3;
  v72 = a2;
  v68 = 0LL;
  v4 = a2;
  v63 = 0;
  v70 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, v4, 0LL);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
LABEL_105:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v7);
    if ( i > *(unsigned __int8 *)(v7 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v74 = 1413771367;
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = v74;
      *(_QWORD *)(v8 + 16) = i;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    if ( i )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( !v9 )
        goto LABEL_105;
      if ( *(_DWORD *)v9 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v9);
      if ( i <= *(unsigned __int8 *)(v9 + 2938) )
      {
        v10 = *(_QWORD *)(v9 + 3056);
        if ( v10 )
        {
          v11 = 2928LL * i + v10 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v12 = *(_QWORD *)(v9 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
            *(_DWORD *)v12 = 1044672615;
            *(_QWORD *)(v12 + 8) = 0LL;
            *(_QWORD *)(v12 + 16) = i;
            *(_QWORD *)(v12 + 24) = v11;
          }
          if ( v11 )
          {
            v13 = *(_QWORD *)(v11 + 392);
            if ( v13 )
            {
              v68 = PdoExt(v13);
              v43 = v68;
              KeWaitForSingleObject((PVOID)(v68 + 2944), Executive, 0, 0, 0LL);
              if ( (*(_DWORD *)(v43 + 1420) & 0x4000000) != 0 )
              {
                v61 = 0;
                v52 = UsbhQueryPortState(a1, i, (__int64)&v61, &v69);
                Log(a1, 0x10000, 1397965875, v52, (unsigned __int16)v61);
                if ( v54 >= 0 && (v53 & 2) == 0 )
                {
                  *(_DWORD *)(v43 + 1420) |= 0x3000000u;
                  v55 = (struct _KEVENT *)(v43 + 2920);
                  if ( (v53 & 1) != 0 )
                    KeSetEvent(v55, 0, 0);
                  else
                    KeResetEvent(v55);
                }
              }
              KeSetEvent((PRKEVENT)(v43 + 2944), 0, 0);
            }
          }
        }
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, v72);
  v14 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(v14 + 2560) & 0x80000) != 0 )
  {
    v62 = 0;
    v71 = 0;
    v15 = FdoExt(a1);
    v64 = 256;
    Log(a1, 8, 1400332651, *(_DWORD *)(v15 + 1376), 0LL);
    v66 = 0;
    v65 = 1;
    v16 = UsbhSyncSendCommand(a1, (__int64)&v64, 0LL, &v71, Timeout, &v62);
    Log(a1, 8, 1937206065, v16, v62);
    if ( (v16 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v16) )
    {
      LOBYTE(v60) = 0;
      UsbhException(a1, 0, 123, 0, 0, v16, v56, usbfile_hub_c, 3746, v60);
    }
    Log(a1, 8, 1937206066, v16, 0LL);
    if ( v16 >= 0 )
      *(_DWORD *)(v14 + 2560) &= ~0x80000u;
  }
  for ( j = 1; ; ++j )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( !v18 )
      goto LABEL_105;
    if ( *(_DWORD *)v18 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v18);
    result = *(unsigned __int8 *)(v18 + 2938);
    if ( j > (unsigned __int16)result )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v74 = 1413771367;
      v20 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v20 = v74;
      *(_QWORD *)(v20 + 16) = j;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 24) = 0LL;
    }
    if ( j )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( !v21 )
        goto LABEL_105;
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v21);
      if ( j <= *(unsigned __int8 *)(v21 + 2938) )
      {
        v22 = *(_QWORD *)(v21 + 3056);
        if ( v22 )
        {
          v23 = 2928LL * j + v22 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v24 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v24 = 1044672615;
            *(_QWORD *)(v24 + 8) = 0LL;
            *(_QWORD *)(v24 + 16) = j;
            *(_QWORD *)(v24 + 24) = v23;
          }
          if ( v23 )
          {
            v25 = *(_QWORD *)(v23 + 392);
            if ( !v25
              || (v68 = PdoExt(*(_QWORD *)(v23 + 392)),
                  v44 = v68,
                  v45 = PdoExt(v25),
                  v46 = (*(_DWORD *)(v44 + 1420) & 0x1000000) == 0,
                  v63 = *(_DWORD *)(v45 + 1128),
                  v46) )
            {
              v67 = 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  20,
                  (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
              }
              v26 = *(_QWORD *)(a1 + 64);
              if ( !v26 )
LABEL_101:
                UsbhTrapFatal_Dbg(a1, 0LL);
              if ( *(_DWORD *)v26 != 541218120 )
                UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
              v27 = 0LL;
              v28 = *(unsigned __int16 *)(v23 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v29 = *(_QWORD *)(v26 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
                *(_DWORD *)v29 = 1329877100;
                *(_QWORD *)(v29 + 8) = 0LL;
                *(_QWORD *)(v29 + 16) = v28;
                *(_QWORD *)(v29 + 24) = 1399612007LL;
              }
              v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v31 = *(_QWORD *)(a1 + 64);
                if ( v31 )
                {
                  v32 = *(_QWORD *)(v31 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
                  *(_DWORD *)v32 = 1413771367;
                  *(_QWORD *)(v32 + 8) = 0LL;
                  *(_QWORD *)(v32 + 16) = v28;
                  *(_QWORD *)(v32 + 24) = 0LL;
                }
              }
              if ( (_WORD)v28 )
              {
                v33 = *(_QWORD *)(a1 + 64);
                if ( !v33 )
                  goto LABEL_101;
                if ( *(_DWORD *)v33 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v33);
                if ( (unsigned __int16)v28 <= *(unsigned __int8 *)(v33 + 2938) )
                {
                  v34 = *(_QWORD *)(v33 + 3056);
                  if ( v34 )
                  {
                    v35 = 2928 * v28;
                    v36 = 2928 * v28 + v34 - 2928;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v35 = *(_QWORD *)(v33 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
                      *(_DWORD *)v35 = 1044672615;
                      *(_QWORD *)(v35 + 8) = 0LL;
                      *(_QWORD *)(v35 + 16) = v28;
                      *(_QWORD *)(v35 + 24) = v36;
                    }
                    if ( v36 )
                    {
                      v27 = *(_QWORD *)(v36 + 392);
                      if ( v27 )
                        v27 = UsbhRefPdo(v35, v27, 0LL, 1399612007);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v30);
              v37 = *(unsigned __int16 *)(v23 + 4);
              if ( !v27 )
              {
                if ( (UsbhLogMask & 0x10000) != 0 )
                {
                  v38 = *(_QWORD *)(a1 + 64);
                  if ( v38 )
                  {
                    v39 = *(_QWORD *)(v38 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
                    *(_DWORD *)v39 = 894595955;
                    *(_QWORD *)(v39 + 8) = 0LL;
                    *(_QWORD *)(v39 + 16) = v37;
                    *(_QWORD *)(v39 + 24) = 0LL;
                  }
                }
                v40 = 0;
                goto LABEL_64;
              }
              Log(a1, 0x10000, 1936937522, *(unsigned __int16 *)(v23 + 4), v27);
              Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(v23 + 4));
              for ( k = v72; ; UsbhPCE_ResumeTimeout(a1, k, *(unsigned __int16 *)(v23 + 4)) )
              {
                v48 = UsbhFdoCheckUpstreamConnectionState(a1, &v67);
                if ( (v48 & 0xC0000000) == 0xC0000000 )
                  break;
                v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
                v50 = (KSPIN_LOCK *)(v26 + 4944);
                if ( *(_DWORD *)(v23 + 696) != 3 )
                {
                  KeReleaseSpinLock(v50, v49);
                  v51 = 0;
                  goto LABEL_78;
                }
                KeReleaseSpinLock(v50, v49);
                v51 = UsbhWaitEventWithTimeoutEx(a1, (void *)(v23 + 712), 500, 1936937556, 0, 0LL);
                if ( v51 != 258 )
                  goto LABEL_78;
              }
              Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(v23 + 4), v48);
LABEL_78:
              UsbhEtwLogHubIrpEvent(
                a1,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_RESUME_PORT,
                *(unsigned __int16 *)(v23 + 4),
                v51);
              v40 = UsbhSshPropagateResume(a1, k, v27);
              Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(v23 + 4), v27);
              UsbhUnlatchPdo(a1, v27, 0LL, 1399612007LL);
              if ( v40 >= 0 )
              {
LABEL_64:
                if ( v25 && (*(_DWORD *)(v68 + 1420) & 0x8004) == 0 && v63 == 4 )
                {
                  *(_DWORD *)(v23 + 2408) |= 2u;
                  v57 = PdoExt(v25);
                  v58 = UsbhSyncSuspendPdoPort(v57 + 944, v25, 0LL);
                  *(_DWORD *)(v23 + 2408) &= ~2u;
                  v40 = v58;
                }
              }
              if ( (v40 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v40) )
              {
                LOBYTE(v60) = 0;
                UsbhException(a1, j, 128, 0, 0, v40, 0, usbfile_sshub_c, 2436, v60);
              }
              continue;
            }
          }
        }
      }
    }
  }
  if ( v73 == 1 )
  {
    v41 = v72;
    Usbh_SSH_Event(a1, 7LL, v72);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    v42 = v70;
    KeSetEvent(v70 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v42 + 3200, v42[219].Header.LockNV, 0, v41, 2001228627);
  }
  return result;
}
