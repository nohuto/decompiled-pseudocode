/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C006588C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C0015790 (Win32kBaseUserInitialize.c)
 *     InputUnInitialize @ 0x1C001E9CC (InputUnInitialize.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C003F9F0 (CleanupSensorExplicitly.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00515D0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0051910 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
