/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C007125C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C0007770 (InputUnInitialize.c)
 *     Win32kBaseUserInitialize @ 0x1C002BEF0 (Win32kBaseUserInitialize.c)
 *     CleanupSensorExplicitly @ 0x1C004C440 (CleanupSensorExplicitly.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C005F240 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C005F420 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
