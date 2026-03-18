/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0061C5C
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C784 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0025514 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0050130 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059008 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C0061544 (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (_QWORD *)(a1 + 152);
  if ( v1 > 1 )
    v2 = (_QWORD *)*v2;
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      ACPIDisconnectWakeInterrupt((__int64)v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
}
