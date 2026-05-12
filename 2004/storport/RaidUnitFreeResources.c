/*
 * XREFs of RaidUnitFreeResources @ 0x1C0015704
 * Callers:
 *     RaidDeleteUnit @ 0x1C001567C (RaidDeleteUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001874C (RaidUnitAllocateResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0007B58 (StorFreeContiguousIoResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0018040 (StorDeleteScsiIdentity.c)
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C001BDD4 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     RaDeleteTagList @ 0x1C00723B8 (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int HighestNodeNumber; // r8d
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  struct _IO_WORKITEM *v7; // rcx
  struct _IO_WORKITEM *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  char v17; // al

  KeCancelTimer((PKTIMER)(a1 + 928));
  KeCancelTimer((PKTIMER)(a1 + 1056));
  KeFlushQueuedDpcs();
  v2 = *(_DWORD *)(a1 + 1696);
  if ( v2 != -1 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v2 / *(_DWORD *)(a1 + 584) < HighestNodeNumber + 1 )
      HighestNodeNumber = v2 / *(_DWORD *)(a1 + 584);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(a1 + 576) + 16LL * v2));
  }
  v4 = *(_QWORD *)(a1 + 1712);
  if ( v4 )
    StorFreeContiguousIoResources(*(_QWORD *)(a1 + 24), v4 - 32);
  v5 = *(void **)(a1 + 504);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x51506152u);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  StorDeleteScsiIdentity(a1 + 104);
  RaDeleteTagList(a1 + 512);
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 2244) )
    StorpUninititalizePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 448) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 448) &= ~0x10u;
  }
  v7 = *(struct _IO_WORKITEM **)(a1 + 1848);
  if ( v7 )
  {
    IoFreeWorkItem(v7);
    *(_QWORD *)(a1 + 1848) = 0LL;
  }
  v8 = *(struct _IO_WORKITEM **)(a1 + 1864);
  if ( v8 )
  {
    IoFreeWorkItem(v8);
    *(_QWORD *)(a1 + 1864) = 0LL;
  }
  v9 = *(struct _IO_WORKITEM **)(a1 + 1888);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(a1 + 1888) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 5088) )
    {
      v17 = *(_BYTE *)(a1 + 449);
      if ( (v17 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 449) = v17 & 0xF7;
        RaidAdapterPoFxIdleComponent(v10, 0LL, 0LL);
      }
    }
  }
  v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1736);
  if ( v11 )
  {
    ExFreeCacheAwareRundownProtection(v11);
    *(_QWORD *)(a1 + 1736) = 0LL;
  }
  v12 = *(void **)(a1 + 1752);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x57506152u);
    *(_QWORD *)(a1 + 1752) = 0LL;
  }
  v13 = *(void **)(a1 + 3272);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x54536152u);
    *(_QWORD *)(a1 + 3272) = 0LL;
  }
  v14 = *(void **)(a1 + 3288);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x525A6152u);
    *(_QWORD *)(a1 + 3288) = 0LL;
  }
  v15 = *(void **)(a1 + 3304);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x525A6152u);
  return 0LL;
}
