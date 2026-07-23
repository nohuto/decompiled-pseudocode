/*
 * XREFs of PnpCallAddDevice @ 0x14072AA5C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x140271698 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x14036B970 (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140508514 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x140508580 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     PnpEnableWatchdog @ 0x140649940 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *),
        int a4)
{
  int v7; // eax
  int v8; // r14d
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v15[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140C130BB & 8) != 0 )
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
  v9 = PnpEnableWatchdog(4, (__int64)v15);
  v12 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3);
  if ( v9 )
    PnpDisableWatchdog((__int64)v9);
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C130BB & 8) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, v10, v13, v12);
  return v12;
}
