/*
 * XREFs of RmCoreRpcSrvReleaseResourceSet @ 0x180038120
 * Callers:
 *     <none>
 * Callees:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180021420 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 */

unsigned int __fastcall RmCoreRpcSrvReleaseResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        struct _RM_SERVICE_GLOBALS *a2,
        unsigned int a3)
{
  int v3; // eax

  v3 = RmSrvResourceSetReleaseResources(*a1, a2, a3);
  if ( v3 < 0 )
    return v3 & 0xEFFFFFFF;
  else
    return 0;
}
