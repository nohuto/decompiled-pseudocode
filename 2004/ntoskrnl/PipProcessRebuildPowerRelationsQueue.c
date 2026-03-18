/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x14072C304
 * Callers:
 *     IoResolveDependency @ 0x1403BC7D0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A59EC (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14072C22C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14089A740 (IoSetDependency.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     Feature_Servicing_2110c_34820170__private_IsEnabled @ 0x1403ED2DC (Feature_Servicing_2110c_34820170__private_IsEnabled.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14072C44C (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14072C4FC (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x140737F04 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140760108 (PipDereferenceDependencyNode.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140760304 (PipCheckIfAllProvidersHaveDevnodes.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rsi
  __int64 *v1; // rbx
  _QWORD *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rdx
  __int64 **v7; // rax

  if ( (unsigned int)Feature_Servicing_2110c_34820170__private_IsEnabled() )
    ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  PnpAcquireDependencyRelationsLock(1);
LABEL_10:
  v3 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v3 == &PiRebuildPowerRelationsQueue )
      goto LABEL_12;
    v0 = v3 - 9;
    v1 = v3;
    v2 = (_QWORD *)*(v3 - 3);
    v3 = (__int64 *)*v3;
    if ( !v2 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v2)
      && (unsigned __int8)PipCheckIfAllProvidersHaveDevnodes(v0) )
    {
      v4 = *v1;
      if ( *(__int64 **)(*v1 + 8) == v1 )
      {
        v5 = (__int64 **)v1[1];
        if ( *v5 == v1 )
        {
          *v5 = (__int64 *)v4;
          *(_QWORD *)(v4 + 8) = v5;
          v1[1] = (__int64)v1;
          *v1 = (__int64)v1;
          PipDereferenceDependencyNode(v0);
          PnpReleaseDependencyRelationsLock();
          LOBYTE(v6) = 1;
          PiQueryPowerRelations(*(_QWORD *)(v2[39] + 40LL), v6);
          ObfDereferenceObjectWithTag(v2, 0x44706E50u);
          PnpAcquireDependencyRelationsLock(1);
          goto LABEL_10;
        }
      }
LABEL_18:
      __fastfail(3u);
    }
  }
  if ( (__int64 *)v3[1] != v1 )
    goto LABEL_18;
  v7 = (__int64 **)v1[1];
  if ( *v7 != v1 )
    goto LABEL_18;
  *v7 = v3;
  v3[1] = (__int64)v7;
  v1[1] = (__int64)v1;
  *v1 = (__int64)v1;
  PipDereferenceDependencyNode(v0);
LABEL_12:
  PnpReleaseDependencyRelationsLock();
  if ( (unsigned int)Feature_Servicing_2110c_34820170__private_IsEnabled() )
    KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
