/*
 * XREFs of PnpCallAddDevice @ 0x140749DA0
 * Callers:
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PpvUtilCallAddDevice @ 0x1402D2574 (PpvUtilCallAddDevice.c)
 *     PnpSetDeviceAffinityThread @ 0x1402D301C (PnpSetDeviceAffinityThread.c)
 *     PnpFreeWatchdog @ 0x1402D3C18 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140555FF0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x140560F74 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     PnpEnableWatchdog @ 0x14074ECA8 (PnpEnableWatchdog.c)
 *     PnpRecordBlackbox @ 0x14074ED04 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *),
        int a4)
{
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  _QWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v15[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140C0DD4B & 8) != 0 )
    McTemplateK0qhzr1z_EtwWriteTransfer(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      (__int64)a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v7 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v15[1] = a1;
  v15[2] = a2;
  v8 = v7;
  v15[3] = KeGetCurrentThread();
  v9 = PnpEnableWatchdog(4LL, v15);
  v10 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    ExDeleteTimer(*(_QWORD *)(v12 + 56), 1, 1, 0LL);
    *(_QWORD *)(v12 + 56) = 0LL;
    if ( *(int *)(v12 + 96) > 0 )
      KeWaitForSingleObject((PVOID)(v12 + 104), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v12, 0x54645750u);
    v13 = *(unsigned int *)(v9 + 16);
    *(_QWORD *)(v9 + 8) = 0LL;
    PnpRecordBlackbox(0LL, v13);
    if ( *(_BYTE *)(v9 + 32) )
      PnpWatchdogEtwWrite(v9, 0LL);
    PnpFreeWatchdog((void *)v9);
  }
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C0DD4B & 8) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Stop,
      v11,
      v10);
  return v10;
}
