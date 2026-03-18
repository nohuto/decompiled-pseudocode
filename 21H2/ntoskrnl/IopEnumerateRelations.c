/*
 * XREFs of IopEnumerateRelations @ 0x1407667B0
 * Callers:
 *     PiRestartRemovalRelations @ 0x1406EAC14 (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1407663DC (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14076651C (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140766640 (PnpCompileDeviceInstancePaths.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140810F90 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x140945A9C (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpTrackQueryRemoveDevices @ 0x140950DA4 (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x1409581A0 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1406E3A88 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, int *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx

  v5 = 0;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v8 = *a1;
    v9 = a2[1];
    v10 = **a1;
    if ( v9 < v10 && v7 >= 0 )
    {
      if ( v7 > 1 )
      {
        if ( v7 != 2 )
          return v5;
        v9 = v10 + ~v9;
      }
      v5 = (int)PipDeviceObjectListElementAt(v8, v9, a3, a4, a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
