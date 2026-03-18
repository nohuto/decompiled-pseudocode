/*
 * XREFs of UsbhUnlockPcqWithTag @ 0x1C0034EEC
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001120 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0004220 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0004C90 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0005240 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0007A40 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0007F60 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0008570 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000B0E0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F4B0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C00131B0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0013438 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00195F0 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0034F64 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C0035154 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0035284 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00354A8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C003571C (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0035848 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0035A44 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0035BB0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0035E78 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhUnlockPcqWithTag(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // rcx

  Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v6 = *(unsigned int *)(v4 + 2400);
  *(_DWORD *)(v4 + 448) = 0;
  v7 = 32 * (v6 + 43);
  *(_DWORD *)(v7 + v4 + 8) = *(_DWORD *)(v4 + 12);
  if ( v5 )
    *(_DWORD *)(v7 + v4 + 12) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 440), a3);
}
