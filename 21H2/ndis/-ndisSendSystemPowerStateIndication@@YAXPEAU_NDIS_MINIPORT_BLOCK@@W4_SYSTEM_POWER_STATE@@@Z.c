/*
 * XREFs of ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0083678
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149E8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003EF70 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A70C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A7A0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

void __fastcall ndisSendSystemPowerStateIndication(struct _NDIS_MINIPORT_BLOCK *a1, enum _SYSTEM_POWER_STATE a2)
{
  unsigned __int8 v3[8]; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v4[2]; // [rsp+30h] [rbp-31h] BYREF
  struct _NDIS_STATUS_INDICATION v5; // [rsp+38h] [rbp-29h] BYREF

  v4[1] = a2;
  v3[0] = 0;
  v4[0] = 524672;
  memset(&v5, 0, sizeof(v5));
  v5.Header = (_NDIS_OBJECT_HEADER)7340440;
  v5.StatusBuffer = v4;
  v5.SourceHandle = a1;
  v5.StatusCode = 1073807399;
  v5.StatusBufferSize = 8;
  ndisMAcquireStInLockWithSpinLock(a1, v3);
  ndisIndicateStatusInternal(a1, &v5);
  ndisMReleaseStInLockAndSpinLock(a1, v3[0]);
}
