/*
 * XREFs of MiInsertVadCharges @ 0x1406ECC70
 * Callers:
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x140711718 (MiInsertProcessVads.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C2C08 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D1E58 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x1408D9780 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021AD40 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x14021ADE0 (PspChargeQuota.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiLocateVadEvent @ 0x1402FE3B4 (MiLocateVadEvent.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140316788 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14031698C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403169C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403183E0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140318410 (PsReturnProcessPagedPoolQuota.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x1406B5F44 (MiResidentPagesForSpan.c)
 *     MiSetVadBits @ 0x1406ECE60 (MiSetVadBits.c)
 *     MiComputeAweCharges @ 0x1408D5900 (MiComputeAweCharges.c)
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
  _DWORD *v17; // r9
  int v18; // ebp
  __int64 v19; // rax
  ULONG_PTR *ProcessPartition; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

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
      result = PsChargeProcessNonPagedPoolQuota(a2, 0x40uLL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_10;
  }
  result = PsChargeProcessNonPagedPoolQuota(a2, 0x88uLL);
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
      v22 = 0LL;
    else
      v22 = MiLocateVadEvent(a1, 256LL) + 8;
    v19 = MiComputeAweCharges(a1, v22);
  }
  else
  {
    if ( v13 != 64 && v13 != 16 )
      goto LABEL_10;
    v19 = MiResidentPagesForSpan(v10, v8, 0);
  }
  v4 = v19;
  if ( !v19
    || (ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2),
        (unsigned int)MiChargeResident(ProcessPartition, v4, 128LL, v21)) )
  {
LABEL_10:
    v14 = *(unsigned int *)(a1 + 52);
    LODWORD(v14) = v14 & 0x7FFFFFFF;
    v15 = v14 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
    if ( v15 >= 0x7FFFFFFFDLL && v15 != 0x7FFFFFFFELL
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v18 = MiCommitPageTablesForVad(a1, v10, v8, v17),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v18 >= 0) )
    {
      MiSetVadBits(a1);
      return 0LL;
    }
    goto LABEL_27;
  }
  v4 = 0LL;
  v18 = -1073741670;
LABEL_27:
  v23 = *(unsigned int *)(a1 + 52);
  LODWORD(v23) = v23 & 0x7FFFFFFF;
  if ( (v23 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFDLL )
    PsReturnProcessNonPagedPoolQuota(a2, 136LL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota(a2, v3);
  if ( v4 )
  {
    v24 = MiGetProcessPartition((__int64)a2);
    MiReturnResident(v24, v4);
  }
  return (unsigned int)v18;
}
