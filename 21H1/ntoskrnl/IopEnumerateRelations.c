/*
 * XREFs of IopEnumerateRelations @ 0x140733D30
 * Callers:
 *     PiRestartRemovalRelations @ 0x14071F48C (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x1407204D0 (PnpTrackQueryRemoveDevices.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14073331C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x140733624 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140733780 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1407338CC (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140733A40 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140733BA0 (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089DE60 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x1408AE1E4 (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x1408B4AB8 (PiProcessCanceledRemoveForReset.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14075A444 (PipDeviceObjectListElementAt.c)
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
