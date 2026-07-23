/*
 * XREFs of PnpCancelRemoveOnHungDevices @ 0x1408A23E0
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407326AC (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140737130 (PnpNotifyUserModeDeviceRemoval.c)
 *     IopAddRelationToList @ 0x140737A28 (IopAddRelationToList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140738520 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 *     IopAllocateRelationList @ 0x14073944C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140739510 (IopFreeRelationList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCancelRemoveOnHungDevices(__int64 a1, unsigned int a2, char a3, unsigned int **a4, __int64 *a5)
{
  int v8; // ebx
  unsigned int **RelationList; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  PVOID v17; // rsi
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF

  Object = 0LL;
  v22 = 0;
  P[0] = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
    __fastfail(5u);
  v8 = PnpCompileDeviceInstancePaths(a2, (__int64)a4, a3, 1, a5);
  if ( v8 >= 0 )
  {
    RelationList = (unsigned int **)IopAllocateRelationList(a2);
    if ( RelationList )
    {
      v19 = 2LL;
      while ( IopEnumerateRelations(a4, (int *)&v19, &Object, &v22, 0LL) )
      {
        if ( Object )
          v10 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v10 = 0LL;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 704) & 2) != 0 )
          {
            v8 = IopAddRelationToList(RelationList, (__int64)Object, v22, 0);
            if ( v8 < 0 )
              goto LABEL_35;
          }
        }
      }
      *((_BYTE *)RelationList + 8) = 1;
      v19 = 1LL;
      while ( IopEnumerateRelations(RelationList, (int *)&v19, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v12 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v12 = 0LL;
        if ( *(_DWORD *)(v12 + 300) == 784 )
          PnpDeleteLockedDeviceNode(v12, 1, 0, v11, 0LL, 0LL);
      }
      v19 = 1LL;
      while ( IopEnumerateRelations(RelationList, (int *)&v19, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v14 = 0LL;
        v15 = *(_DWORD *)(v14 + 300);
        if ( v15 != 786 && v15 != 770 && v15 != 769 )
          PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, Object, 0LL, v13);
      }
      v16 = PnpCompileDeviceInstancePaths(a2, (__int64)RelationList, 0, (char)v13, (__int64 *)P);
      v17 = P[0];
      v8 = v16;
      if ( v16 >= 0 )
        v8 = PnpNotifyUserModeDeviceRemoval(
               a1,
               (_WORD *)P[0],
               (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED,
               0LL,
               0LL,
               0LL);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x4B706E50u);
LABEL_35:
      IopFreeRelationList(RelationList);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
