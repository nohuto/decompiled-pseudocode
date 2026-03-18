/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000CDB8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerPostPowerUp @ 0x1C0005120 (NVMeControllerPostPowerUp.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00091A4 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E6C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C000F348 (NVMeQueuesReInit.c)
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
  if ( inited )
    NVMeControllerPostPowerUp(a1);
  else
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}
