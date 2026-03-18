/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000CDD8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0009154 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E1C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C000F2D0 (NVMeQueuesReInit.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  char inited; // al

  *(_DWORD *)(a1 + 24) &= ~4u;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
  NVMeQueuesReInit(a1);
  inited = ControllerReset(a1);
  if ( inited == 1 )
  {
    inited = NVMeControllerInitPart1(a1, 0);
    if ( inited == 1 )
    {
      inited = NVMeControllerInitPart2(a1, 0, 1);
      if ( inited == 1 )
        inited = NVMeControllerInitPart3(a1);
    }
  }
  if ( !inited )
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}
