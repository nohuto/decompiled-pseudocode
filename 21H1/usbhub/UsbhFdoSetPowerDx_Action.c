/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x1C000F880
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C00101B0 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002310 (UsbhRefPdo.c)
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010064 (UsbhArmHubForWakeDetect.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbdHubDisarmBusForWake @ 0x1C001C744 (UsbdHubDisarmBusForWake.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D554 (UsbhSetHubRemoteWake.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 *     UsbdHubArmBusForWake @ 0x1C003B9F4 (UsbdHubArmBusForWake.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C003BA78 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C003BACC (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhPdoArmedForWake @ 0x1C003C4AC (UsbhPdoArmedForWake.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  IRP *v3; // r13
  int v6; // r12d
  int v7; // ebp
  int v8; // r15d
  char v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v11; // r10
  int v12; // r9d
  __int64 v13; // r10
  int v14; // eax
  int v15; // r9d
  unsigned int LowPart; // r8d
  unsigned int v17; // r8d
  _DWORD *v18; // rbx
  unsigned __int16 i; // bx
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  KIRQL v23; // bp
  void *v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rsi
  int v30; // r9d
  int v31; // eax
  _DWORD *v32; // rax
  _IO_STACK_LOCATION *v33; // r11
  _DWORD *v34; // rbx
  __int64 Options; // rax
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // r10
  unsigned int v39; // ebx
  __int64 v41; // rbp
  int v42; // edx
  int v43; // r8d
  unsigned __int16 j; // r13
  __int64 v45; // rax
  __int64 v46; // rsi
  _DWORD *v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+48h] [rbp-40h]

  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v47 = FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)v3);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v48 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v3;
  Log((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v11, 10LL);
  FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1346458174, 3, v48);
  *(_DWORD *)(v13 + 128) = v12;
  v14 = UsbhDispatch_BusEvent(DeviceObject, v13, 7);
  Log((_DWORD)DeviceObject, 2048, 1346458172, 0, v14);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v17 = LowPart - 3;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v47[1054] = 0;
      Log((_DWORD)DeviceObject, 16, 1349280819, v15, (__int64)v3);
      v18 = FdoExt((__int64)DeviceObject);
      UsbhDisarmHubForWakeDetect(DeviceObject);
      if ( (v18[640] & 0x80000) != 0 && (int)UsbhSetHubRemoteWake((_DWORD)DeviceObject) >= 0 )
        v18[640] &= ~0x80000u;
      UsbhDisarmHubForWakeDetect(DeviceObject);
      UsbdHubDisarmBusForWake(DeviceObject);
      for ( i = 1; ; ++i )
      {
        if ( !DeviceObject )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
LABEL_39:
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)DeviceExtension != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
        if ( i > DeviceExtension[2938] )
          break;
        v21 = 0LL;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v22 = *((_QWORD *)DeviceExtension + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
          *(_DWORD *)v22 = 1329877100;
          *(_QWORD *)(v22 + 16) = i;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = 1180976179LL;
        }
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v24 = DeviceObject->DeviceExtension;
          if ( v24 )
          {
            v25 = *((_QWORD *)v24 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
            *(_DWORD *)v25 = 1413771367;
            *(_QWORD *)(v25 + 16) = i;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 24) = 0LL;
          }
        }
        if ( i )
        {
          v26 = (unsigned __int8 *)DeviceObject->DeviceExtension;
          if ( !v26 )
            goto LABEL_39;
          if ( *(_DWORD *)v26 != 541218120 )
            UsbhTrapFatal_Dbg(DeviceObject, v26);
          if ( i <= v26[2938] )
          {
            v27 = *((_QWORD *)v26 + 382);
            if ( v27 )
            {
              v28 = 2928LL * i + v27 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v27 = *((_QWORD *)v26 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                *(_DWORD *)v27 = 1044672615;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = i;
                *(_QWORD *)(v27 + 24) = v28;
              }
              if ( v28 )
              {
                v21 = *(_QWORD *)(v28 + 392);
                if ( v21 )
                  v21 = UsbhRefPdo(v27, v21, (__int64)v3, 1180976179);
              }
            }
          }
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
        if ( v21 )
        {
          v41 = PdoExt(v21);
          if ( (unsigned __int8)UsbhCompletePdoWakeIrp(DeviceObject, v21, 3221225860LL)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_dq(
                WPP_GLOBAL_Control->DeviceExtension,
                v42,
                v43,
                29,
                (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
                *(_WORD *)(v41 + 1428),
                v21);
          }
          UsbhUnlatchPdo(DeviceObject, v21, v3, 1180976179LL);
        }
      }
    }
    v29 = v47;
  }
  else
  {
    v47[1054] = *(_DWORD *)(a2 + 88);
    Log((_DWORD)DeviceObject, 16, 1349280818, v15, (__int64)v3);
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
    {
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 1 )
      {
        v7 = 1;
      }
      else if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
      {
        v7 = HIBYTE(v47[640]) & 1;
      }
    }
    for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
    {
      v45 = UsbhLatchPdo(DeviceObject, j, a3, 1180976178LL);
      v46 = v45;
      if ( v45 )
      {
        ++v8;
        if ( *(_BYTE *)(PdoExt(v45) + 2740) )
          v9 = 1;
        if ( (unsigned __int8)UsbhPdoArmedForWake(v46) )
        {
          UsbhUnlatchPdo(DeviceObject, v46, a3, 1180976178LL);
          v6 = 1;
          if ( !*(&WPP_MAIN_CB.AlignmentRequirement + 1) )
            v7 = 1;
        }
        else
        {
          UsbhUnlatchPdo(DeviceObject, v46, a3, 1180976178LL);
        }
      }
    }
    v29 = v47;
    if ( v9 && ((v47[640] & 1) != 0 || v8 == 1) || v7 )
    {
      UsbhArmHubWakeOnConnect(DeviceObject);
    }
    else
    {
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      if ( !v6 )
      {
        UsbhDisarmHubForWakeDetect(DeviceObject);
        UsbdHubDisarmBusForWake(DeviceObject);
        v3 = a3;
        goto LABEL_27;
      }
    }
    UsbhArmHubForWakeDetect(DeviceObject);
    UsbdHubArmBusForWake(DeviceObject);
    v3 = a3;
  }
LABEL_27:
  FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v31 = UsbhDispatch_BusEvent(DeviceObject, v48, v30 + 6);
  Log((_DWORD)DeviceObject, 2048, 1112756284, 0, v31);
  v32 = FdoExt((__int64)DeviceObject);
  v33 = v3->Tail.Overlay.CurrentStackLocation;
  v34 = v32;
  Options = v33->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    Log((_DWORD)DeviceObject, 16, 1347374641, *(_QWORD *)&v34[2 * Options + 210], (__int64)v3);
    Log((_DWORD)DeviceObject, 16, 1347374642, *(_QWORD *)&v34[2 * v36 + 214], v37);
    *(_QWORD *)&v34[2 * v38 + 210] = 0LL;
    *(_QWORD *)&v34[2 * v38 + 214] = 0LL;
    v34[v38 + 218] = 4510;
    PoStartNextPowerIrp(v3);
    v33 = v3->Tail.Overlay.CurrentStackLocation;
  }
  ++v3->CurrentLocation;
  v3->Tail.Overlay.CurrentStackLocation = v33 + 1;
  v39 = PoCallDriver(*((PDEVICE_OBJECT *)v29 + 151), v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v29 + 306), v3, 0x20u);
  return v39;
}
