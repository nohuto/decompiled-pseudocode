/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C0036AA0
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C0007D60 (InputUnInitialize.c)
 *     CleanupSensorExplicitly @ 0x1C0022420 (CleanupSensorExplicitly.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 *     Win32kBaseUserInitialize @ 0x1C008B1C0 (Win32kBaseUserInitialize.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00BF580 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00BF790 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
