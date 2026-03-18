/*
 * XREFs of IopEnumerateRelations @ 0x1407413F0
 * Callers:
 *     PiRestartRemovalRelations @ 0x14072F33C (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x1407304A0 (PnpTrackQueryRemoveDevices.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x140740CE4 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140740E40 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x140740F8C (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140741260 (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A4CB0 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x1408B5034 (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x1408BB9F8 (PiProcessCanceledRemoveForReset.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14076A93C (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
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
      v5 = (int)PipDeviceObjectListElementAt((_DWORD)v8, v9, (_DWORD)a3, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
