/*
 * XREFs of sub_1C0010D74 @ 0x1C0010D74
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C0018B00 @ 0x1C0018B00 (sub_1C0018B00.c)
 *     sub_1C001BB74 @ 0x1C001BB74 (sub_1C001BB74.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 * Callees:
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

LONG __fastcall sub_1C0010D74(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  _DWORD *DeviceExtension; // rax
  LONG result; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r8d

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(a1, 0LL);
  if ( *DeviceExtension != 1329877064 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  DeviceExtension[197] = a2.SystemState;
  PoSetPowerState(a1, DevicePowerState, a2);
  if ( a2.SystemState == PowerSystemWorking )
  {
    v6 = sub_1C0011220(a1);
    v7 = sub_1C0011220(a1);
    v8 = 2;
  }
  else
  {
    result = a2.SystemState - 2;
    if ( (unsigned int)(a2.SystemState - 2) > 2 )
      return result;
    v6 = sub_1C0011220(a1);
    v7 = sub_1C0011220(a1);
    v8 = 1;
  }
  return sub_1C000FE00(*(_QWORD *)(v7 + 1184), *(_WORD *)(v6 + 1428), v8, 0);
}
