/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x14074B56C
 * Callers:
 *     IoResolveDependency @ 0x1403BE1B0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406B314C (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B494 (PnpNewDeviceNodeDependencyCheck.c)
 *     IoDuplicateDependency @ 0x14089D670 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14089D840 (IoSetDependency.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14074B6A0 (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14074B750 (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x14074C3A4 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x14074CAC0 (PipDereferenceDependencyNode.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14074CAE0 (PipCheckIfAllProvidersHaveDevnodes.c)
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

  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  PnpAcquireDependencyRelationsLock(1);
LABEL_8:
  v3 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v3 == &PiRebuildPowerRelationsQueue )
      goto LABEL_10;
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
          goto LABEL_8;
        }
      }
LABEL_14:
      __fastfail(3u);
    }
  }
  if ( (__int64 *)v3[1] != v1 )
    goto LABEL_14;
  v7 = (__int64 **)v1[1];
  if ( *v7 != v1 )
    goto LABEL_14;
  *v7 = v3;
  v3[1] = (__int64)v7;
  v1[1] = (__int64)v1;
  *v1 = (__int64)v1;
  PipDereferenceDependencyNode(v0);
LABEL_10:
  PnpReleaseDependencyRelationsLock();
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
