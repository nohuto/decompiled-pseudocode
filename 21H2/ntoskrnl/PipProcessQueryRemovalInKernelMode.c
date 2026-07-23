/*
 * XREFs of PipProcessQueryRemovalInKernelMode @ 0x14073278C
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407326AC (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140732820 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140732A2C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1408B91A0 (PiSendTargetDeviceRemoveCanceledNotification.c)
 */

__int64 __fastcall PipProcessQueryRemovalInKernelMode(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // ebx
  int v10; // ebx

  v7 = a2;
  if ( (int)PipSendTargetDeviceQueryRemoveNotification(a2, a5, a4, a6) < 0 )
  {
    return (unsigned int)-2147483608;
  }
  else
  {
    v10 = PipSendQueryRemoveIrpAndCheckOpenHandles(a1, v7, a3, a4, a5, a6);
    if ( v10 < 0 )
      PiSendTargetDeviceRemoveCanceledNotification(a5, a4);
  }
  return (unsigned int)v10;
}
