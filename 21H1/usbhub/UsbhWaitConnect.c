/*
 * XREFs of UsbhWaitConnect @ 0x1C000ABD0
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhRequestPortSuspend @ 0x1C0016130 (UsbhRequestPortSuspend.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004815C (WPP_RECORDER_SF_DDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C6A0 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C004C954 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(PDEVICE_OBJECT a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  _DEVICE_OBJECT *v7; // r15
  PDEVICE_OBJECT v9; // rdi
  void *DeviceExtension; // rdx
  void *v11; // rdx
  void *v12; // rdx
  void *v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  KSPIN_LOCK *v17; // rax
  KSPIN_LOCK *v18; // r15
  KIRQL v19; // al
  __int64 v20; // r9
  KIRQL v21; // r12
  int v22; // edx
  __int64 v23; // r10
  void *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rcx
  __int64 v28; // rdx
  KIRQL v29; // al
  __int64 v30; // r9
  __int64 v31; // r10
  void *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  __int64 v38; // r9
  __int64 (__fastcall *v39)(); // rax
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // rbp
  int v47; // r9d
  __int64 v48; // rax
  KIRQL v49; // dl

  v5 = *(_DWORD *)(a4 + 400);
  v7 = (_DEVICE_OBJECT *)a3;
  v9 = a1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        a1 = (PDEVICE_OBJECT)(*((_QWORD *)DeviceExtension + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221)));
        *(_DWORD *)&a1->Type = 1313754947;
        a1->AttachedDevice = (_DEVICE_OBJECT *)a2;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a4 + 4),
        a3,
        10,
        (__int64)&WPP_514d3d48908635b064432894a9af1f2f_Traceguids,
        *(_WORD *)(a4 + 4),
        a3,
        a2);
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v11 = v9->DeviceExtension;
        if ( v11 )
        {
          a1 = (PDEVICE_OBJECT)(*((_QWORD *)v11 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221)));
          *(_DWORD *)&a1->Type = 1884180291;
          a1->DriverObject = 0LL;
          a1->NextDevice = v7;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a1 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
          *(_WORD *)(a4 + 4));
    }
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( v9 )
      {
        v12 = v9->DeviceExtension;
        if ( v12 )
        {
          a1 = (PDEVICE_OBJECT)(*((_QWORD *)v12 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221)));
          *(_DWORD *)&a1->Type = 1313175651;
          a1->DriverObject = 0LL;
          a1->NextDevice = (_DEVICE_OBJECT *)a4;
          a1->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v46 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock(a1, v46, 19LL);
      if ( *(_DWORD *)(PdoExt(a5) + 1124) == 2 )
      {
        UsbhBusUnlatchPdo((_DWORD)v9, a5, a4, v47, v46 + 132);
        UsbhDeletePdo(v9, a5, 2LL);
      }
      else
      {
        v48 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v48 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v49 = *(_BYTE *)(v48 + 132);
        *(_DWORD *)(v48 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v49);
      }
    }
    return 4;
  }
  if ( a2 == 0x100000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v9 )
      {
        v14 = v9->DeviceExtension;
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
          *(_DWORD *)v15 = 1833848643;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v7;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
      }
    }
    v16 = 0;
    if ( !v9 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v17 = (KSPIN_LOCK *)v9->DeviceExtension;
    if ( !v17 )
      UsbhTrapFatal_Dbg(v9, 0LL);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(v9, v9->DeviceExtension);
    v18 = v17 + 618;
    v19 = KeAcquireSpinLockRaiseToDpc(v17 + 618);
    v20 = *(int *)(a4 + 696);
    v21 = v19;
    v22 = *(_DWORD *)(a4 + 696);
    v23 = *(unsigned __int16 *)(a4 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v24 = v9->DeviceExtension;
      if ( v24 )
      {
        v25 = *((_QWORD *)v24 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
        *(_DWORD *)v25 = 1397909875;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = v20;
        *(_QWORD *)(v25 + 24) = v23;
        v22 = *(_DWORD *)(a4 + 696);
      }
    }
    if ( v22 == 3 )
    {
      v26 = *(unsigned __int16 *)(a4 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v27 = v9->DeviceExtension;
        if ( v27 )
        {
          v28 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v28 = 2018666867;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = 3LL;
          *(_QWORD *)(v28 + 24) = v26;
        }
      }
      *(_DWORD *)(a4 + 696) = 0;
      KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
      v16 = 1;
    }
    KeReleaseSpinLock(v18, v21);
    if ( v16 )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
      v30 = *(unsigned __int16 *)(a4 + 4);
      v31 = *(int *)(a4 + 12);
      *(_DWORD *)(a4 + 448) = 1;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = v9->DeviceExtension;
        if ( v32 )
        {
          v33 = *((_QWORD *)v32 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
          *(_DWORD *)v33 = 1986359664;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = v30;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
      *(_DWORD *)(a4 + 448) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v29);
    }
    return v5;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log((_DWORD)v9, 4, 1129270898, (_DWORD)v7, 0LL);
      v39 = off_1C0060548[2 * v44];
    }
    else
    {
      v35 = a2 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 2;
          if ( v37 )
          {
            if ( v37 != 4 )
              return v5;
            Log((_DWORD)v9, 4, 1129270902, (_DWORD)v7, 0LL);
            return (unsigned int)UsbhHandleOvercurrent((int)v9, a5);
          }
          Log((_DWORD)v9, 4, 1129270899, (_DWORD)v7, 0LL);
          v39 = (__int64 (__fastcall *)())qword_1C005EB28[2 * v38];
        }
        else
        {
          Log((_DWORD)v9, 4, 1129270885, (_DWORD)v7, 0LL);
          v39 = off_1C0060748[2 * v42];
        }
      }
      else
      {
        Log((_DWORD)v9, 4, 1129270883, (_DWORD)v7, 0LL);
        v39 = off_1C0060B48[2 * v43];
      }
    }
LABEL_54:
    if ( !v39 )
      return v5;
    return ((unsigned int (__fastcall *)(PDEVICE_OBJECT, __int64, __int64))v39)(v9, a4, a5);
  }
  switch ( a2 )
  {
    case 0x20000u:
      Log((_DWORD)v9, 4, 1129270904, (_DWORD)v7, 0LL);
      v39 = (__int64 (__fastcall *)())qword_1C005E928[2 * v41];
      goto LABEL_54;
    case 0x10000u:
      Log((_DWORD)v9, 4, 1129270900, (_DWORD)v7, 0LL);
      v39 = off_1C0060948[2 * v45];
      goto LABEL_54;
    case 0x40000u:
      Log((_DWORD)v9, 4, 1129270867, (_DWORD)v7, 0LL);
      return (unsigned int)UsbhRequestPortSuspend((_DWORD)v9, v34, (unsigned __int8)v7, a4, a5);
  }
  return v5;
}
