/*
 * XREFs of CmFcInitSystem1 @ 0x140A582BC
 * Callers:
 *     CmInitSystem0 @ 0x140A4B25C (CmInitSystem0.c)
 * Callees:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C7564 (wil_RegisterFeatureStagingChangeNotification.c)
 */

int CmFcInitSystem1()
{
  return wil_RegisterFeatureStagingChangeNotification();
}
