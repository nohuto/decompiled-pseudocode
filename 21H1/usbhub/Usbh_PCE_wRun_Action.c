/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C0007F60
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhHubRunPortChangeQueue @ 0x1C00071D0 (UsbhHubRunPortChangeQueue.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034EEC (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  KIRQL v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int16 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // r9d
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  KIRQL v58; // [rsp+70h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      a3,
      33,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v8;
  v10 = v7;
  v58 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v10 = v7;
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 5LL;
      *(_QWORD *)(v12 + 24) = v8;
      v9 = *(_WORD *)(a2 + 4);
    }
  }
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v10 = v7;
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 24) = v9;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 5;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v10 = v7;
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 812660063;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
    }
  }
  switch ( (_DWORD)v18 )
  {
    case 5:
      v28 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v29 = *(_QWORD *)(a1 + 64);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
          *(_DWORD *)v30 = 896546143;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = 5LL;
          *(_QWORD *)(v30 + 24) = v28;
        }
      }
      v31 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v31 + a2 + 1384) = 12;
      break;
    case 4:
      v39 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 862991711;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = 4LL;
          *(_QWORD *)(v41 + 24) = v39;
        }
      }
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v42 + a2 + 1384) = 3;
      break;
    case 6:
LABEL_19:
      KeResetEvent((PRKEVENT)(a2 + 496));
      v22 = *(int *)(a2 + 12);
      v23 = *(_DWORD *)(a2 + 12);
      v24 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 757952880;
          *(_QWORD *)(v26 + 24) = v24;
LABEL_22:
          v10 = v58;
          *(_QWORD *)(v26 + 16) = v22;
          *(_QWORD *)(v26 + 8) = 0LL;
          v23 = *(_DWORD *)(a2 + 12);
        }
      }
LABEL_23:
      v27 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v27 + a2 + 1384) = v23;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      return;
    default:
      switch ( (int)v18 )
      {
        case 3:
          Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
          v52 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v52 + a2 + 1384) = 14;
          goto LABEL_56;
        case 8:
          Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
          v53 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v53 + a2 + 1384) = 10;
          goto LABEL_56;
        case 9:
          Log(a1, 512, 1597337652, v18, *(unsigned __int16 *)(a2 + 4));
          v48 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v48 + a2 + 1384) = 8;
          v49 = *(_DWORD *)(a2 + 12);
          *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
          Log(a1, 16, 1886465325, v49, *(unsigned __int16 *)(a2 + 4));
          v50 = *(_DWORD *)(a2 + 12);
          v51 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v51 + a2 + 1384) = v50;
          goto LABEL_32;
        case 10:
        case 14:
          Log(a1, 512, 1597337649, v18, *(unsigned __int16 *)(a2 + 4));
          goto LABEL_56;
        case 12:
          Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
          v54 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 13;
          *(_DWORD *)(v54 + a2 + 1384) = 13;
          goto LABEL_56;
        case 16:
          Log(a1, 512, 1597337655, v18, *(unsigned __int16 *)(a2 + 4));
          v56 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v56 + a2 + 1384) = 17;
          *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
          UsbhUnlockPcqWithTag(a1, a2, v58, 0LL);
          goto LABEL_33;
        case 17:
          Log(a1, 512, 1597337654, v18, *(unsigned __int16 *)(a2 + 4));
          v55 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v55 + a2 + 1384) = 17;
          goto LABEL_56;
        case 19:
          KeResetEvent((PRKEVENT)(a2 + 496));
          v57 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v57 + a2 + 1384) = 19;
LABEL_56:
          UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
          return;
        case 20:
          goto LABEL_19;
        default:
          v43 = *(unsigned __int16 *)(a2 + 4);
          v44 = *(_WORD *)(a2 + 4);
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v45 = *(_QWORD *)(a1 + 64);
            if ( v45 )
            {
              v10 = v7;
              v46 = *(_QWORD *)(v45 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
              *(_DWORD *)v46 = 946877791;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 16) = v18;
              *(_QWORD *)(v46 + 24) = v43;
              v44 = *(_WORD *)(a2 + 4);
            }
          }
          v22 = *(int *)(a2 + 12);
          v23 = *(_DWORD *)(a2 + 12);
          if ( (UsbhLogMask & 0x10) == 0 )
            goto LABEL_23;
          v47 = *(_QWORD *)(a1 + 64);
          if ( !v47 )
            goto LABEL_23;
          v26 = *(_QWORD *)(v47 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
          *(_DWORD *)v26 = 757952880;
          *(_QWORD *)(v26 + 24) = v44;
          goto LABEL_22;
      }
  }
  v32 = *(int *)(a2 + 12);
  v33 = *(unsigned __int16 *)(a2 + 4);
  v34 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 757952880;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = v32;
      *(_QWORD *)(v36 + 24) = v33;
      v34 = *(_DWORD *)(a2 + 12);
    }
  }
  v37 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v37 + a2 + 1384) = v34;
LABEL_32:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v58);
LABEL_33:
  UsbhHubRunPortChangeQueue(a1, a2, a3, v38);
}
