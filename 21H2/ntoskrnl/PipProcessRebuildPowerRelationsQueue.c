/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x14076BC20
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14076BB10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x14077503C (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14076BDD4 (PipIsDeviceReadyForPowerRelations.c)
 *     PiGetProviderList @ 0x140775110 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 *     PipDeleteDependencyNode @ 0x14085CA14 (PipDeleteDependencyNode.c)
 *     PiEnumerateProviderListEntry @ 0x140942730 (PiEnumerateProviderListEntry.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 v0; // rcx
  __int64 *v1; // rbx
  __int64 *v2; // rdi
  __int64 *v3; // r11
  _QWORD *v4; // rbp
  _QWORD *v5; // r11
  _QWORD **ProviderList; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  LOBYTE(v0) = 1;
  PnpAcquireDependencyRelationsLock(v0);
LABEL_2:
  v1 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v1 == &PiRebuildPowerRelationsQueue )
      goto LABEL_4;
    v2 = v1 - 9;
    v3 = v1;
    v4 = (_QWORD *)*(v1 - 3);
    v1 = (__int64 *)*v1;
    if ( !v4 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v4) )
    {
      v14 = 0LL;
      ProviderList = (_QWORD **)PiGetProviderList(v4);
      v7 = *ProviderList;
      if ( *ProviderList == ProviderList )
      {
LABEL_8:
        v8 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 )
          goto LABEL_13;
        v9 = (_QWORD *)v5[1];
        if ( (_QWORD *)*v9 != v5 )
          goto LABEL_13;
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v5[1] = v5;
        *v5 = v5;
        v10 = (*((_DWORD *)v2 + 22))-- == 1;
        if ( v10 )
          PipDeleteDependencyNode(v2);
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0LL);
        LOBYTE(v11) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v4[39] + 40LL), v11);
        ObfDereferenceObjectWithTag(v4, 0x44706E50u);
        LOBYTE(v12) = 1;
        PnpAcquireDependencyRelationsLock(v12);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v7, &v14, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v14) )
          break;
        v7 = (_QWORD *)*v7;
        if ( v7 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  if ( (__int64 *)v1[1] != v3 || (v13 = (__int64 **)v3[1], *v13 != v3) )
LABEL_13:
    __fastfail(3u);
  *v13 = v1;
  v1[1] = (__int64)v13;
  v3[1] = (__int64)v3;
  *v3 = (__int64)v3;
  v10 = (*((_DWORD *)v2 + 22))-- == 1;
  if ( v10 )
    PipDeleteDependencyNode(v2);
LABEL_4:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
