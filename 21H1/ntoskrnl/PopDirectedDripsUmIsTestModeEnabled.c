/*
 * XREFs of PopDirectedDripsUmIsTestModeEnabled @ 0x1408F40D8
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x14056502C (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     <none>
 */

bool PopDirectedDripsUmIsTestModeEnabled()
{
  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  return _InterlockedOr(&PopDirectedDripsUmTestDeviceCount, 0) != 0;
}
