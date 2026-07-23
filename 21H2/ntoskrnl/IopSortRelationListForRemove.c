/*
 * XREFs of IopSortRelationListForRemove @ 0x1407373CC
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x140735EC8 (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x140737330 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PipSortDeviceObjectList @ 0x1407374E0 (PipSortDeviceObjectList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x140737ABC (PipIsDeviceInDeviceObjectList.c)
 *     PiGetProviderList @ 0x140741B18 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14089DA8C (PiEnumerateProviderListEntry.c)
 */

__int64 __fastcall IopSortRelationListForRemove(__int64 a1)
{
  _DWORD *v2; // r11
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char IsDeviceInDeviceObjectList; // r12
  char v9; // r13
  __int64 v10; // r11
  _QWORD **ProviderList; // r15
  _QWORD *v12; // rsi
  int v13; // ebx
  char v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    PnpAcquireDependencyRelationsLock(0);
    v2 = *(_DWORD **)a1;
    v3 = 0;
    v4 = 0LL;
    if ( !**(_DWORD **)a1 )
      goto LABEL_19;
    do
    {
      v5 = *(_QWORD *)&v2[6 * v4 + 4];
      if ( v5 )
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 || (v7 = *(_QWORD *)(v6 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(v2, *(_QWORD *)(v7 + 32), 0LL);
      else
        IsDeviceInDeviceObjectList = 0;
      v9 = 0;
      ProviderList = (_QWORD **)PiGetProviderList(v5);
      v12 = *ProviderList;
      if ( *ProviderList != ProviderList )
      {
        while ( 1 )
        {
          PiEnumerateProviderListEntry(v12, &v16, &v15);
          if ( v16 )
          {
            if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*(_QWORD *)a1, v16, 0LL) )
              break;
          }
          v12 = (_QWORD *)*v12;
          if ( v12 == ProviderList )
            goto LABEL_8;
        }
        v9 = 1;
      }
LABEL_8:
      if ( IsDeviceInDeviceObjectList || v9 )
      {
        *(_DWORD *)(v10 + 24 * v4 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v10 + 24 * v4 + 32) |= 4u;
        ++v3;
      }
      v2 = *(_DWORD **)a1;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < **(_DWORD **)a1 );
    if ( v3 )
    {
      v13 = PipSortDeviceObjectList(a1);
      if ( v13 >= 0 )
        *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
LABEL_19:
      v13 = -1073741823;
    }
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
  }
  return (unsigned int)v13;
}
