/*
 * XREFs of CmFcInitSystem1 @ 0x140A525BC
 * Callers:
 *     CmInitSystem0 @ 0x140A588B8 (CmInitSystem0.c)
 * Callees:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C6564 (wil_RegisterFeatureStagingChangeNotification.c)
 */

int CmFcInitSystem1()
{
  return wil_RegisterFeatureStagingChangeNotification();
}
