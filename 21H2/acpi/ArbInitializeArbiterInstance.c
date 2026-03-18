/*
 * XREFs of ArbInitializeArbiterInstance @ 0x1C009E128
 * Callers:
 *     AcpiInitializeBusNumberArbiter @ 0x1C00ACE08 (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1C00AF680 (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1C00B1110 (AcpiInitializePortArbiter.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     RtlInitializeRangeList_0 @ 0x1C002F1A1 (RtlInitializeRangeList_0.c)
 *     ArbBuildAssignmentOrdering @ 0x1C009E3D8 (ArbBuildAssignmentOrdering.c)
 */

__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *Pool2; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KEVENT *v11; // rax
  int v12; // edi
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx

  *(_QWORD *)(a1 + 320) = a2;
  *(_DWORD *)a1 = 1935831617;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( !Pool2 )
    goto LABEL_44;
  KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
  v8 = ExAllocatePool2(256LL, 4096LL, 1096970817LL);
  *(_QWORD *)(a1 + 112) = v8;
  if ( !v8 )
    goto LABEL_44;
  *(_DWORD *)(a1 + 104) = 4096;
  v9 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
  *(_QWORD *)(a1 + 40) = v9;
  if ( !v9 )
    goto LABEL_44;
  v10 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
  *(_QWORD *)(a1 + 48) = v10;
  if ( v10
    && (RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40)),
        RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48)),
        *(_BYTE *)(a1 + 296) = 0,
        v11 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL),
        (*(_QWORD *)(a1 + 304) = v11) != 0LL) )
  {
    KeInitializeEvent(v11, NotificationEvent, 1u);
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 24) = L"Root";
    *(_DWORD *)(a1 + 32) = a3;
    if ( !*(_QWORD *)(a1 + 152) )
      *(_QWORD *)(a1 + 152) = ArbTestAllocation;
    if ( !*(_QWORD *)(a1 + 160) )
      *(_QWORD *)(a1 + 160) = ArbRetestAllocation;
    if ( !*(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = ArbCommitAllocation;
    if ( !*(_QWORD *)(a1 + 176) )
      *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
    if ( !*(_QWORD *)(a1 + 208) )
      *(_QWORD *)(a1 + 208) = ArbAddReserved;
    if ( !*(_QWORD *)(a1 + 224) )
      *(_QWORD *)(a1 + 224) = ArbPreprocessEntry;
    if ( !*(_QWORD *)(a1 + 232) )
      *(_QWORD *)(a1 + 232) = ArbAllocateEntry;
    if ( !*(_QWORD *)(a1 + 240) )
      *(_QWORD *)(a1 + 240) = ArbGetNextAllocationRange;
    if ( !*(_QWORD *)(a1 + 248) )
      *(_QWORD *)(a1 + 248) = ArbFindSuitableRange;
    if ( !*(_QWORD *)(a1 + 256) )
      *(_QWORD *)(a1 + 256) = ArbAddAllocation;
    if ( !*(_QWORD *)(a1 + 264) )
      *(_QWORD *)(a1 + 264) = ArbBacktrackAllocation;
    if ( !*(_QWORD *)(a1 + 272) )
      *(_QWORD *)(a1 + 272) = ArbOverrideConflict;
    if ( !*(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = ArbBootAllocation;
    if ( !*(_QWORD *)(a1 + 200) )
      *(_QWORD *)(a1 + 200) = ArbQueryConflict;
    if ( !*(_QWORD *)(a1 + 192) )
      *(_QWORD *)(a1 + 192) = ArbPreprocessEntry;
    if ( !*(_QWORD *)(a1 + 216) )
      *(_QWORD *)(a1 + 216) = ArbStartArbiter;
    if ( !*(_QWORD *)(a1 + 280) )
      *(_QWORD *)(a1 + 280) = &ArbInitializeRangeList;
    if ( !*(_QWORD *)(a1 + 288) )
      *(_QWORD *)(a1 + 288) = ArbDeleteOwnerRanges;
    v12 = ArbBuildAssignmentOrdering(a1);
    if ( v12 >= 0 )
      return 0LL;
  }
  else
  {
LABEL_44:
    v12 = -1073741670;
  }
  v14 = *(void **)(a1 + 8);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 304);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(void **)(a1 + 40);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(void **)(a1 + 48);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = *(void **)(a1 + 112);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v12;
}
