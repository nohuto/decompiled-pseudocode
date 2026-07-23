/*
 * XREFs of CmFcInitSystem1 @ 0x140A5893C
 * Callers:
 *     CmInitSystem0 @ 0x140A5ECB8 (CmInitSystem0.c)
 * Callees:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405CB564 (wil_RegisterFeatureStagingChangeNotification.c)
 */

int CmFcInitSystem1()
{
  return wil_RegisterFeatureStagingChangeNotification();
}
