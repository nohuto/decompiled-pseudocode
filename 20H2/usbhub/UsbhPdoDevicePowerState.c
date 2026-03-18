/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C00109A0
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C001AFE0 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0010D74 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C0012EFC (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x1C0013058 (UsbhClearPdoIdleReady.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0013CDC (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0014F6C (UsbhIncPdoIoCount.c)
 *     UsbhSetPdoPowerState @ 0x1C0017660 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x1C0017B0C (UsbhQueueWorkItemEx.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0019404 (UsbhSet_D0_wQueued_Action.c)
 *     GET_FDO_POWER_STATE @ 0x1C001CE84 (GET_FDO_POWER_STATE.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E354 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0033E18 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v9; // rbx
  unsigned int LowPart; // edi
  int v11; // eax
  __int64 v12; // r13
  KIRQL v13; // al
  bool v14; // zf
  KIRQL v15; // dl
  KSPIN_LOCK *v16; // rdi
  KIRQL v17; // al
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // edi
  __int64 v21; // rax
  void *v22; // r8
  int v24; // r8d
  int v25; // edi
  int v26; // ecx
  int v27; // r8d
  int v28; // r8d
  _DWORD *v29; // rdi
  KIRQL v30; // dl
  int v31; // r8d
  __int64 v32; // rax
  int v33; // eax
  int v34; // ecx
  BOOLEAN v35; // r9
  unsigned int v36; // [rsp+80h] [rbp+18h]

  v6 = PdoExt(a2);
  FdoExt(a1);
  v7 = PdoExt(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7 + 944;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v36 = LowPart;
  Log(a1, 16, 1885622372, a2, (__int64)a3);
  v11 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  v12 = v11;
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v9 + 136) = 1;
    *(_BYTE *)(v9 + 132) = v13;
    *(_DWORD *)(v9 + 88) = 2018460752;
    *(_DWORD *)(v9 + 92) = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v9;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v14 = *(_DWORD *)(PdoExt(a2) + 1124) == 3;
    *(_DWORD *)(v9 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v9 + 88) = 1734964085;
    v15 = *(_BYTE *)(v9 + 132);
    if ( v14 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v15);
      v16 = (KSPIN_LOCK *)FdoExt(a1);
      v17 = KeAcquireSpinLockRaiseToDpc(v16 + 632);
      v18 = *((_DWORD *)v16 + 1043);
      *((_BYTE *)v16 + 5064) = v17;
      *(_DWORD *)(v9 + 40) = v18;
      *(_DWORD *)(v9 + 44) = 126;
      *(_DWORD *)(v9 + 32) = 844055622;
      *(_DWORD *)(v9 + 36) = 1986356304;
      *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
      v16[168] = v9;
      v19 = *(_DWORD *)(PdoExt(a2) + 1128);
      if ( v36 == 1 )
      {
        UsbhEtwLogDevicePowerEvent(
          v6,
          a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          0);
        *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
        v25 = v19 - 1;
        if ( v25 )
        {
          if ( v25 != 6 )
          {
            FdoExt(*(_QWORD *)(v9 + 8));
            v26 = FdoExt(*(_QWORD *)(v9 + 8))[1043];
            if ( v26 != 210 )
            {
              switch ( v26 )
              {
                case 201:
                case 206:
                case 209:
                case 211:
                  break;
                case 212:
                case 213:
                  goto LABEL_40;
                default:
                  UsbhSetPdoPowerState(v9, a2, v27, 6, 3);
                  goto LABEL_45;
              }
            }
            if ( (int)UsbhSet_D0_wQueued_Action(a1, v9, a2, a3) >= 0 )
            {
              KeResetEvent((PRKEVENT)(v6 + 2360));
              UsbhSetPdoPowerState(v9, a2, v28, 2, 6);
              v29 = FdoExt(a1);
              FdoExt(*(_QWORD *)(v9 + 8));
              *(_DWORD *)(v9 + 32) = 1734964085;
              v30 = *((_BYTE *)v29 + 5064);
              *((_QWORD *)v29 + 168) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v29 + 632, v30);
              return 259LL;
            }
LABEL_40:
            UsbhSetPdoPowerState(v9, a2, v27, 6, 3);
            v33 = GET_FDO_POWER_STATE(v9);
            v34 = 0;
            if ( v33 == 213 )
              v34 = -1073741810;
            v20 = v34;
            UsbhReleaseFdoPwrLock(a1, v9);
            goto LABEL_9;
          }
          UsbhSetPdoPowerState(v9, a2, v24, 7, 13);
          UsbhReleaseFdoPwrLock(a1, v9);
          Log(a1, 16, 2003059760, 0LL, *(unsigned __int16 *)(v6 + 1428));
          KeWaitForSingleObject((PVOID)(v6 + 2360), Executive, 0, v35, 0LL);
        }
        else
        {
          UsbhSetPdoPowerState(v9, a2, v24, 1, 2);
LABEL_45:
          UsbhReleaseFdoPwrLock(a1, v9);
        }
        v20 = 0;
      }
      else if ( v36 - 2 > 2 )
      {
        v20 = -1073741811;
        UsbhReleaseFdoPwrLock(a1, v9);
      }
      else
      {
        UsbhEtwLogDevicePowerEvent(
          v6,
          a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          0);
        if ( *(_DWORD *)(PdoExt(a2) + 788) == v36 )
        {
          v20 = 0;
          UsbhReleaseFdoPwrLock(a1, v9);
        }
        else if ( *(_DWORD *)(v6 + 1152) == 2 )
        {
          if ( !CurrentStackLocation->Parameters.Create.EaLength )
          {
            if ( !*(_BYTE *)(v6 + 2733) )
            {
              *(_BYTE *)(v6 + 2733) = 1;
              UsbhQueueWorkItemEx(a1, 1, (unsigned int)&UsbhSetPdoSelectiveSuspendedKey, a2, 0, 2001228627, 0LL);
            }
            if ( v36 == 4
              && (*(_DWORD *)(PdoExt(a2) + 1180) & 0x10) != 0
              && (*(_DWORD *)(v6 + 1420) & 0xC00000) == 0xC00000 )
            {
              KeSetEvent((PRKEVENT)(v6 + 2920), 0, 0);
              *(_DWORD *)(v6 + 1420) = *(_DWORD *)(v6 + 1420) & 0xFAFFFFFF | 0x4000000;
            }
          }
          v20 = UsbhPdoSetDx(v9, a2, a3);
        }
        else
        {
          v20 = -1073741130;
          UsbhReleaseFdoPwrLock(a1, v9);
        }
      }
    }
    else
    {
      v20 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v15);
    }
LABEL_9:
    if ( (unsigned __int8)Usb_Disconnected(v20) )
      UsbhPCE_BusDisconnect(a1, v9, *(unsigned __int16 *)(v6 + 1428));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v36,
        1,
        22,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        *(_WORD *)(v6 + 1428),
        v36);
    UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
    v21 = PdoExt(a2);
    UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v21 + 1184), a2, a3, 2101LL);
    if ( v36 == 1 )
      v22 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
    else
      v22 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
    UsbhEtwLogDevicePowerEvent(v6, a3, v22, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
    a3->IoStatus.Status = v20;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v20;
  }
  if ( *(_BYTE *)(v6 + 2740) )
  {
    UsbhAcquireFdoPwrLock(a1, v9, 126LL, 1986356304LL);
    if ( LowPart == 1 )
    {
      UsbhSetPdoPowerState(v9, a2, v31, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v9);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState(v9, a2, v31, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v9);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, LowPart);
  }
  Log(a1, 16, 1886545441, v12, (__int64)a3);
  *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
  v32 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v32 + 1184), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
