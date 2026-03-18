/*
 * XREFs of PopDirectedDripsUmIsTestModeEnabled @ 0x1408F53C8
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x14056567C (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     <none>
 */

bool PopDirectedDripsUmIsTestModeEnabled()
{
  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  return _InterlockedOr(&PopDirectedDripsUmTestDeviceCount, 0) != 0;
}
