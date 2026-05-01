/*
 * XREFs of PsmHamGetPackageDebugMode @ 0x180024F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall PsmHamGetPackageDebugMode(void *a1, unsigned int a2, unsigned __int16 *a3)
{
  return HamSrvPackageGetDebugMode((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1768), a3, a1, a2);
}
