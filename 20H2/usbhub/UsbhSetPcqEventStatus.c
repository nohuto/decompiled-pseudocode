/*
 * XREFs of UsbhSetPcqEventStatus @ 0x1C0034DE4
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001120 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0004220 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0004C90 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0008570 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000B0E0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F4B0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C00131B0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0013438 (Usbh_PCE_HardwareWake_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00336FC (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSignalSuspendEvent @ 0x1C0034E5C (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_Close_Action @ 0x1C0035284 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00354A8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0035A44 (Usbh_PCE_SD_Resume_Action.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036048 (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036088 (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhSetPcqEventStatus(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r11d
  __int64 v6; // r10
  _DWORD *v7; // r8
  int v8; // r11d
  int v9; // r11d

  Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v7 = (_DWORD *)(v6 + 32 * (*(unsigned int *)(v6 + 2400) + 43LL));
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7[7] = a4;
      }
      else
      {
        v7[6] = a4;
      }
    }
    else
    {
      v7[5] = a4;
    }
  }
  else
  {
    v7[4] = a4;
  }
}
