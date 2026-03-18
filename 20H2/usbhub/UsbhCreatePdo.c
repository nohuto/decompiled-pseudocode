/*
 * XREFs of UsbhCreatePdo @ 0x1C0053F94
 * Callers:
 *     UsbhPortConnect @ 0x1C004CDC0 (UsbhPortConnect.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FE00 (UsbhSshSetPortsBusyState.c)
 *     UsbhIncPdoIoCount @ 0x1C0014F6C (UsbhIncPdoIoCount.c)
 *     UsbhConnectPdoToHub @ 0x1C0029D80 (UsbhConnectPdoToHub.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036194 (SET_PDO_HWPNPSTATE.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C003AB30 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhMakePdoName @ 0x1C004373C (UsbhMakePdoName.c)
 *     UsbhBuildCompatibleID @ 0x1C004F5D0 (UsbhBuildCompatibleID.c)
 *     UsbhBuildDeviceID @ 0x1C004FEB8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0050274 (UsbhBuildHardwareID.c)
 *     UsbhGetLocationIdString @ 0x1C0051020 (UsbhGetLocationIdString.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C0053CC8 (SET_PDO_SWPNPSTATE.c)
 *     UsbhSetPortData @ 0x1C0058304 (UsbhSetPortData.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v3; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // r13
  int PdoName; // edi
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // rbx
  char *DeviceExtension; // rdi
  struct _UNICODE_STRING v13; // xmm0
  POOL_TYPE v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  const WCHAR *PoolWithTag; // rax
  WCHAR *v18; // r15
  ULONG v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // r8d
  int v29; // r11d
  __int64 v30; // r9
  __int64 v31; // r10
  __m128i si128; // xmm0
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  struct _UNICODE_STRING DeviceName; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+50h] BYREF
  __int64 NewIrql; // [rsp+B8h] [rbp+58h] BYREF

  DeviceObject = 0LL;
  v3 = 0;
  DeviceName = 0LL;
  DestinationString = 0LL;
  Log(a1, 256, 1666204751, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Au,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
  v6 = FdoExt(a1);
  do
  {
    PdoName = UsbhMakePdoName(v5, &DeviceName, v3);
    if ( PdoName >= 0 )
    {
      PdoName = IoCreateDevice(
                  (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Blink,
                  0xBF8u,
                  &DeviceName,
                  0x22u,
                  0,
                  0,
                  &DeviceObject);
      if ( PdoName >= 0 )
        break;
      RtlFreeUnicodeString(&DeviceName);
    }
    ++v3;
  }
  while ( PdoName == -1073741771 );
  Log(a1, 256, 1668310065, a2, PdoName);
  LODWORD(v10) = -1073741670;
  if ( !DeviceObject )
    PdoName = -1073741670;
  if ( PdoName < 0 )
    return (unsigned int)PdoName;
  DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v6 + 151) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  Log(a1, v9, 1666204721, v8, (__int64)DeviceObject);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v13 = DeviceName;
  *((_DWORD *)DeviceExtension + 588) = -1;
  *((_QWORD *)DeviceExtension + 145) = 0xFEFEFEFEFEFEFEFEuLL;
  *((struct _UNICODE_STRING *)DeviceExtension + 167) = v13;
  *((_DWORD *)DeviceExtension + 288) = 0;
  *((_DWORD *)DeviceExtension + 295) = *(_DWORD *)(*((_QWORD *)v6 + 377) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 596) = 1;
  *((_DWORD *)DeviceExtension + 742) = 1000;
  SET_PDO_HWPNPSTATE((__int64)DeviceObject, 1, 7);
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 317) = MEMORY[0xFFFFF78000000014];
  NewIrql = 0LL;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2360), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2920), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 154) = DeviceExtension + 1224;
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1224;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 54, NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 160) = DeviceExtension + 1272;
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1272;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2056), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2944), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2896), SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 351);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 115, SynchronizationEvent, 0);
  Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1704), (__int64)UsbhDriverNotFoundTimer);
  v14 = ExDefaultNonPagedPoolType;
  *(_QWORD *)v15 = 1332899156LL;
  *(_QWORD *)(v15 + 48) = v16;
  *(_DWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 72) = 1145980532;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(v14, 0x10uLL, 0x42554855u);
  v18 = (WCHAR *)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    v19 = *(unsigned __int16 *)(a2 + 4);
    DestinationString.MaximumLength = 16;
    LODWORD(v10) = RtlIntegerToUnicodeString(v19, 0xAu, &DestinationString);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      ExFreePoolWithTag(v18, 0);
    }
    else
    {
      *((_QWORD *)DeviceExtension + 269) = v18;
      *((_DWORD *)DeviceExtension + 537) = DestinationString.MaximumLength;
      Log(a1, 256, 1668310066, a2, (__int64)v18);
      v20 = UsbhBuildDeviceID(a1, 0LL, (__int64)(DeviceExtension + 2080));
      v10 = v20;
      v21 = a1;
      if ( (v20 & 0xC0000000) == 0xC0000000 )
      {
        v22 = 1668302129;
      }
      else
      {
        v23 = UsbhBuildHardwareID(a1, 0LL, (__int64)(DeviceExtension + 2096));
        v10 = v23;
        v21 = a1;
        if ( (v23 & 0xC0000000) == 0xC0000000 )
        {
          v22 = 1668302130;
        }
        else
        {
          v24 = UsbhBuildCompatibleID(a1, 0LL, (__int64)(DeviceExtension + 2112));
          v10 = v24;
          if ( (v24 & 0xC0000000) == 0xC0000000 )
          {
            v22 = 1668302131;
          }
          else
          {
            v25 = UsbhConnectPdoToHub((__int64)DeviceObject, a1);
            v10 = v25;
            if ( (v25 & 0xC0000000) == 0xC0000000 )
            {
              v22 = 1668302132;
            }
            else
            {
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 152);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 293);
              *((_QWORD *)DeviceExtension + 284) = DeviceExtension + 2264;
              *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2264;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 2280),
                (PIO_CSQ_INSERT_IRP)UsbhInsertPdoWakeIrp,
                (PIO_CSQ_REMOVE_IRP)UsbhRemovePdoWakeIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoWakeIrp,
                (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoWakeIrpLock,
                (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoWakeIrpLock,
                (PIO_CSQ_COMPLETE_CANCELED_IRP)UsbhCompleteCanceledPdoWakeIrp);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 191);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 256);
              *((_QWORD *)DeviceExtension + 182) = DeviceExtension + 1448;
              *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1448;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 1464),
                UsbhInsertPdoIdleIrp,
                UsbhRemovePdoIdleIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoIdleIrp,
                (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoIdleIrpLock,
                (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoIdleIrpLock,
                UsbhCompleteCanceledPdoIdleIrp);
              Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1544), (__int64)UsbhIdleIrpRetryTimer);
              *(_QWORD *)(v26 + 48) = v27;
              *(_QWORD *)v26 = 1332899156LL;
              *(_DWORD *)(v26 + 8) = 0;
              *(_DWORD *)(v26 + 72) = 1231318117;
              Log(a1, v29, v28, (__int64)(DeviceExtension + 1624), (__int64)UsbhSS_WakeIrpRetryTimer);
              *(_QWORD *)v30 = 1332899156LL;
              *(_QWORD *)(v30 + 48) = v31;
              *(_DWORD *)(v30 + 8) = 0;
              *(_DWORD *)(v30 + 72) = 1144018785;
              KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2568), 1, 1);
              si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
              *((__m128i *)DeviceExtension + 57) = si128;
              *(__m128i *)(DeviceExtension + 892) = si128;
              v33 = UsbhIncPdoIoCount((__int64)DeviceObject, (__int64)DeviceObject, 1162637161, 0);
              v10 = v33;
              if ( (v33 & 0xC0000000) == 0xC0000000 )
                goto LABEL_16;
              *((_DWORD *)DeviceExtension + 356) |= 1u;
              *((_QWORD *)DeviceExtension + 105) = DeviceObject;
              *((_WORD *)DeviceExtension + 714) = *(_WORD *)(a2 + 4);
              *((_QWORD *)DeviceExtension + 382) = *(_QWORD *)(a2 + 2920);
              *((_DWORD *)DeviceExtension + 298) = v6[1259];
              *((_DWORD *)DeviceExtension + 282) = 1;
              *((_DWORD *)DeviceExtension + 197) = 1;
              *((_DWORD *)DeviceExtension + 198) = 1;
              *((_DWORD *)DeviceExtension + 684) = 0;
              DeviceExtension[2740] = 0;
              LOBYTE(NewIrql) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              HIDWORD(NewIrql) = 1;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              UsbhSetPortData(a1, DeviceObject, &NewIrql);
              UsbhGetLocationIdString(a1, (__int64)DeviceObject, v34, (__int64)(DeviceExtension + 2224));
              HIDWORD(NewIrql) = 0;
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, NewIrql);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v35,
                  1u,
                  0x1Bu,
                  (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
                  DeviceObject);
              }
              v22 = 1346654051;
            }
          }
          v21 = a1;
        }
      }
      Log(v21, 256, v22, (__int64)DeviceObject, v10);
    }
  }
LABEL_16:
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 256, 1346653985, (__int64)DeviceObject, (int)v10);
    Usbh_ErrorDisconnect_PdoEvent(a1, (__int64)DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    UsbhSshSetPortsBusyState(a1, *(_WORD *)(a2 + 4), 2, 1);
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 100, 6);
  }
  return (unsigned int)v10;
}
