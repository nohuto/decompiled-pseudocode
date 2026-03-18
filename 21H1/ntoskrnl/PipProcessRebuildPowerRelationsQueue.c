/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x140730E58
 * Callers:
 *     IoResolveDependency @ 0x1403BB4B0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14071031C (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140730D80 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x140899250 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140899420 (IoSetDependency.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140726FE8 (PiGetProviderList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140730F50 (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140731000 (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x140731720 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140731B9C (PipDereferenceDependencyNode.c)
 *     PiEnumerateProviderListEntry @ 0x14089950C (PiEnumerateProviderListEntry.c)
 */

__int64 PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rbx
  __int64 *v2; // rbp
  __int64 *v3; // r11
  _QWORD *v4; // rsi
  _QWORD *v5; // r11
  __int64 *ProviderList; // r14
  __int64 *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  PnpAcquireDependencyRelationsLock(1);
LABEL_2:
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v0 == &PiRebuildPowerRelationsQueue )
      return PnpReleaseDependencyRelationsLock();
    v2 = v0 - 9;
    v3 = v0;
    v4 = (_QWORD *)*(v0 - 3);
    v0 = (__int64 *)*v0;
    if ( !v4 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v4) )
    {
      v12 = 0LL;
      ProviderList = PiGetProviderList((__int64)v4);
      v7 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
      {
LABEL_8:
        v8 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) == v5 )
        {
          v9 = (_QWORD *)v5[1];
          if ( (_QWORD *)*v9 == v5 )
          {
            *v9 = v8;
            *(_QWORD *)(v8 + 8) = v9;
            v5[1] = v5;
            *v5 = v5;
            PipDereferenceDependencyNode(v2);
            PnpReleaseDependencyRelationsLock();
            LOBYTE(v10) = 1;
            PiQueryPowerRelations(*(_QWORD *)(v4[39] + 40LL), v10);
            ObfDereferenceObjectWithTag(v4, 0x44706E50u);
            PnpAcquireDependencyRelationsLock(1);
            goto LABEL_2;
          }
        }
LABEL_11:
        __fastfail(3u);
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v7, &v12, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v12) )
          break;
        v7 = (__int64 *)*v7;
        if ( v7 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  if ( (__int64 *)v0[1] != v3 )
    goto LABEL_11;
  v11 = (__int64 **)v3[1];
  if ( *v11 != v3 )
    goto LABEL_11;
  *v11 = v0;
  v0[1] = (__int64)v11;
  v3[1] = (__int64)v3;
  *v3 = (__int64)v3;
  PipDereferenceDependencyNode(v2);
  return PnpReleaseDependencyRelationsLock();
}
