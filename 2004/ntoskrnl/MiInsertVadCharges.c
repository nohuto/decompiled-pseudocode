/*
 * XREFs of MiInsertVadCharges @ 0x1405FE050
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1406B4490 (MiInsertProcessVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x1408D6180 (MiInsertChildVads.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140249E28 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14024A02C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14024A060 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiReturnResident @ 0x14026B55C (MiReturnResident.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiSetVadBits @ 0x1405FE240 (MiSetVadBits.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x140704084 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x1408D2300 (MiComputeAweCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __int64 result; // rax
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  int v17; // ebp
  __int64 v18; // rax
  ULONG_PTR *ProcessPartition; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v9 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  v10 = v6 << 12;
  if ( v9 >= 0x7FFFFFFFDLL )
  {
    if ( v9 == 0x7FFFFFFFDLL )
    {
      result = PsChargeProcessNonPagedPoolQuota(a2, 64LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_10;
  }
  result = PsChargeProcessNonPagedPoolQuota(a2, 136LL);
  if ( (int)result < 0 )
    return result;
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) == 0 && !(unsigned int)MiVadPureReserve(a1) )
  {
    v3 = 8
       * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
       + 8;
    if ( a2 != PsInitialSystemProcess )
    {
      v12 = PspChargeQuota(a2[1].AffinityPadding[7], (__int64)a2, 1, v3);
      if ( v12 < 0 )
      {
        PsReturnProcessNonPagedPoolQuota(a2, 136LL);
        return (unsigned int)v12;
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v13 == 48 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
      v20 = 0LL;
    else
      v20 = MiLocateVadEvent(a1, 256LL) + 8;
    v18 = MiComputeAweCharges(a1, v20);
  }
  else
  {
    if ( v13 != 64 && v13 != 16 )
      goto LABEL_10;
    v18 = MiResidentPagesForSpan(v10, v8, 0LL);
  }
  v4 = v18;
  if ( !v18
    || (ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2),
        (unsigned int)MiChargeResident(ProcessPartition, v4, 128LL)) )
  {
LABEL_10:
    v14 = *(unsigned int *)(a1 + 52);
    LODWORD(v14) = v14 & 0x7FFFFFFF;
    v15 = v14 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
    if ( v15 >= 0x7FFFFFFFDLL && v15 != 0x7FFFFFFFELL
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v17 = MiCommitPageTablesForVad(a1, v10),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v17 >= 0) )
    {
      MiSetVadBits(a1);
      return 0LL;
    }
    goto LABEL_27;
  }
  v4 = 0LL;
  v17 = -1073741670;
LABEL_27:
  v21 = *(unsigned int *)(a1 + 52);
  LODWORD(v21) = v21 & 0x7FFFFFFF;
  if ( (v21 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFDLL )
    PsReturnProcessNonPagedPoolQuota(a2, 136LL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota(a2, v3);
  if ( v4 )
  {
    v22 = MiGetProcessPartition((__int64)a2);
    MiReturnResident(v22, v4);
  }
  return (unsigned int)v17;
}
