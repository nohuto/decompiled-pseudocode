/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x14036E778
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PipRestoreDevNodeState @ 0x14036D950 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpDeleteAllDependencyRelations @ 0x14061220C (PnpDeleteAllDependencyRelations.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140622A6C (PpHotSwapInitRemovalPolicy.c)
 *     PipIsProblemReadonly @ 0x140731AF4 (PipIsProblemReadonly.c)
 *     PnpDisableDeviceInterfaces @ 0x1407361DC (PnpDisableDeviceInterfaces.c)
 *     PiDmaGuardProcessPostRemove @ 0x140738890 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PnpUnloadAttachedDriver @ 0x14073E7C8 (PnpUnloadAttachedDriver.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpProfileCommitTransitioningDock @ 0x1408AB63C (PpProfileCommitTransitioningDock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  int v6; // esi
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 *PoolWithTag; // rdi
  PVOID v12; // r12
  unsigned int v13; // esi
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  _QWORD *v16; // r15
  KIRQL v17; // r8
  __int64 *v18; // rdx
  __int64 i; // rcx
  __int64 v20; // rax
  PADAPTER_OBJECT *v21; // r14
  KIRQL v22; // al
  KIRQL v23; // al
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rbp
  __int64 v30; // rcx

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v4 = a2;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v28 = *((_DWORD *)v8 + 99);
      v29 = (__int64 *)*v8;
      if ( (v28 & 0x10) != 0 )
      {
        v28 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v28;
      }
      if ( v8[52] || v8[68] || (v28 & 0x40) != 0 )
      {
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 788LL);
      v8 = v29;
    }
    while ( v29 );
  }
  result = *(unsigned int *)(MaxDataSize + 300);
  if ( (_DWORD)result == 783 || (_DWORD)result == 782 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 785 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
    LODWORD(result) = *(_DWORD *)(MaxDataSize + 300);
  }
  if ( (_DWORD)result != 788 )
    JUMPOUT(0x14036E7F6LL);
  v10 = *(_QWORD *)(v3 + 24);
  while ( v10 )
  {
    v10 = *(_QWORD *)(v10 + 24);
    ++v6;
  }
  PoolWithTag = 0LL;
  v12 = 0LL;
  if ( v6 )
  {
    v13 = 8 * v6 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x65647050u);
    if ( PoolWithTag )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, v13, 0x65647050u);
      if ( v12 )
      {
        memset(PoolWithTag, 0, v13);
        memset(v12, 0, v13);
        v14 = *(_QWORD **)(v3 + 24);
        v15 = PoolWithTag;
        v16 = v12;
        while ( v14 )
        {
          ObfReferenceObject(v14);
          *v15++ = (__int64)v14;
          *v16++ = v14[1];
          v14 = (_QWORD *)v14[3];
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
  }
  v17 = KeAcquireQueuedSpinLock(0xAuLL);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v18 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v20 = *v18++;
      *(_DWORD *)(*(_QWORD *)(v20 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v17);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(MaxDataSize + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(MaxDataSize);
  v21 = (PADAPTER_OBJECT *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v22 = KeAcquireQueuedSpinLock(0xAuLL);
        LODWORD((*v21)[19].DmaOperations->AllocateAdapterChannel) &= ~8u;
        LODWORD((*v21)[19].DmaOperations->AllocateAdapterChannel) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v22);
        PnpUnloadAttachedDriver(*(PADAPTER_OBJECT *)((char *)v21 + (_BYTE *)v12 - (_BYTE *)PoolWithTag));
        HalPutDmaAdapter(*v21++);
      }
      while ( *v21 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v23 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v23);
  v24 = 786LL;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v24 = 788LL;
  PipSetDevNodeState(MaxDataSize, v24);
  if ( v4
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, v4)
     && !(unsigned int)PipIsProblemReadonly(v30, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    v25 = a3;
    if ( !a3 )
      v25 = *(_DWORD *)(MaxDataSize + 392);
    PipSetDevNodeProblem(MaxDataSize, v4, v25);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v27 = *(_QWORD *)(MaxDataSize + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v27, 23LL);
  return result;
}
