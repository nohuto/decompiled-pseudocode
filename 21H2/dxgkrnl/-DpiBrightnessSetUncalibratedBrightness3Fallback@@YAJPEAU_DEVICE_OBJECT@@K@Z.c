/*
 * XREFs of ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C03902F4
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C01E4480 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F843C (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetUncalibratedBrightness3Fallback(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v4; // rdx
  int MiniportInterface; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD); // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v12 = 0;
  if ( *((_WORD *)DeviceExtension + 2224) )
  {
    v6 = (*((__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, int *))DeviceExtension + 562))(a1, a2, &v12);
    MiniportInterface = v6;
    if ( v6 < 0 )
    {
      v4 = v6;
      goto LABEL_3;
    }
    if ( (v12 & 4) == 0 )
    {
      KeWaitForSingleObject(DeviceExtension + 4392, Executive, 0, 0, 0LL);
      v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
      MiniportInterface = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
LABEL_20:
        KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4392), 0);
        return (unsigned int)MiniportInterface;
      }
      if ( (**(_DWORD **)(*((_QWORD *)DeviceExtension + 487) + 2696LL) & 0x2000) != 0 )
      {
        MiniportInterface = 0;
        v8 = 0LL;
      }
      else
      {
        if ( *((_WORD *)DeviceExtension + 2333) == 3 )
        {
          v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 586);
          if ( v9 )
          {
            v9(*((_QWORD *)DeviceExtension + 584));
            memset(DeviceExtension + 4664, 0, 0x48uLL);
          }
          *((_WORD *)DeviceExtension + 2224) = 0;
          MiniportInterface = DpiBrightnessSetupInterfaceV2(a1);
          if ( MiniportInterface < 0 )
          {
            MiniportInterface = DpiQueryMiniportInterface(
                                  (__int64)a1,
                                  (__int64)&GUID_DEVINTERFACE_BRIGHTNESS,
                                  56,
                                  1,
                                  (__int64)Timeout,
                                  (__int64)(DeviceExtension + 4664));
            if ( MiniportInterface >= 0 )
            {
              *((_QWORD *)DeviceExtension + 577) = a1;
              *((_QWORD *)DeviceExtension + 578) = DpiDoInterfaceReference;
              *((_QWORD *)DeviceExtension + 579) = DXGGLOBAL::DereferenceObjectWork;
              *((_QWORD *)DeviceExtension + 580) = DpiBrightnessIfGetPossible;
              *((_QWORD *)DeviceExtension + 581) = DpiBrightnessIfSet;
              *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfGet;
              *((_DWORD *)DeviceExtension + 1152) = 65592;
            }
          }
          goto LABEL_19;
        }
        v8 = -1073741637LL;
        MiniportInterface = -1073741637;
      }
      WdLogSingleEntry1(3LL, v8);
LABEL_19:
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      goto LABEL_20;
    }
  }
  v4 = -1073741637LL;
  MiniportInterface = -1073741637;
LABEL_3:
  WdLogSingleEntry1(3LL, v4);
  return (unsigned int)MiniportInterface;
}
