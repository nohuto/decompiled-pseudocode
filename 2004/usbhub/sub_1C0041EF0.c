/*
 * XREFs of sub_1C0041EF0 @ 0x1C0041EF0
 * Callers:
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

LONG __fastcall sub_1C0041EF0(__int64 a1)
{
  _DWORD *v1; // rbx
  PVOID *CurrentIrp; // rax
  PVOID **v3; // rbx

  v1 = sub_1C000F050(a1);
  v1[344] = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&stru_1C006B480.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  CurrentIrp = (PVOID *)stru_1C006B480.Queue.Wcb.CurrentIrp;
  v3 = (PVOID **)(v1 + 1288);
  if ( *(struct _DEVICE_OBJECT **)stru_1C006B480.Queue.Wcb.CurrentIrp != (struct _DEVICE_OBJECT *)&stru_1C006B480.Queue.Wcb.DeviceObject )
    __fastfail(3u);
  *v3 = &stru_1C006B480.Queue.Wcb.DeviceObject;
  v3[1] = CurrentIrp;
  *CurrentIrp = v3;
  stru_1C006B480.Queue.Wcb.CurrentIrp = v3;
  return KeSetEvent((PRKEVENT)&stru_1C006B480.Queue.Wcb.DeviceRoutine, 0, 0);
}
