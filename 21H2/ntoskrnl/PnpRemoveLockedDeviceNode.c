/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x1402DDAE4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140766834 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PipIsProblemReadonly @ 0x140660534 (PipIsProblemReadonly.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpUnloadAttachedDriver @ 0x140766914 (PnpUnloadAttachedDriver.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PpHotSwapInitRemovalPolicy @ 0x14076728C (PpHotSwapInitRemovalPolicy.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpDeleteAllDependencyRelations @ 0x14077503C (PnpDeleteAllDependencyRelations.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 *     PpProfileCommitTransitioningDock @ 0x14094FCD4 (PpProfileCommitTransitioningDock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  int v6; // r14d
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *Pool2; // rdi
  _BYTE *v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  PVOID *v22; // r14
  KIRQL v23; // al
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rsi
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
        PipSetDevNodeUserFlags(v8, 512LL);
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        PipClearDevNodeUserFlags(v8, 512LL);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 790LL);
      v8 = v29;
    }
    while ( v29 );
  }
  result = *(unsigned int *)(MaxDataSize + 300);
  if ( (_DWORD)result == 785 || (_DWORD)result == 784 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
    LODWORD(result) = *(_DWORD *)(MaxDataSize + 300);
  }
  if ( (_DWORD)result != 790 )
    JUMPOUT(0x1402DDB68LL);
  v10 = *(_QWORD *)(v3 + 24);
  while ( v10 )
  {
    v10 = *(_QWORD *)(v10 + 24);
    ++v6;
  }
  Pool2 = 0LL;
  v12 = 0LL;
  if ( v6 )
  {
    v13 = 8 * v6 + 16;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, v13, 1701081168LL);
    if ( Pool2 )
    {
      v14 = ExAllocatePool2(256LL, v13, 1701081168LL);
      v12 = (_BYTE *)v14;
      if ( v14 )
      {
        v15 = *(_QWORD **)(v3 + 24);
        v16 = Pool2;
        v17 = (_QWORD *)v14;
        while ( v15 )
        {
          ObfReferenceObjectWithTag(v15, 0x746C6644u);
          *v16++ = v15;
          *v17++ = v15[1];
          v15 = (_QWORD *)v15[3];
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  v18 = KeAcquireQueuedSpinLock(0xAuLL);
  v19 = Pool2;
  if ( Pool2 )
  {
    for ( i = *Pool2; i; i = *v19 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v21 = *v19++;
      *(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v18);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(MaxDataSize + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(MaxDataSize);
  v22 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    if ( *Pool2 )
    {
      do
      {
        v23 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v23);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v22 + v12 - (_BYTE *)Pool2));
        ObfDereferenceObject(*v22++);
      }
      while ( *v22 );
    }
    ExFreePoolWithTag(Pool2, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v24 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v24);
  v25 = 788LL;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v25 = 790LL;
  PipSetDevNodeState(MaxDataSize, v25);
  if ( v4
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, v4)
     && !(unsigned int)PipIsProblemReadonly(v30, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    PipSetDevNodeProblem(MaxDataSize, v4, a3);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v27 = *(_QWORD *)(MaxDataSize + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v27, 23LL);
  return result;
}
