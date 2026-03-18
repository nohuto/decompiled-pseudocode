/*
 * XREFs of MiInsertVadCharges @ 0x1407B88C0
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14070A1B8 (MiInsertProcessVads.c)
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 *     MiComputeVadCharges @ 0x14030B440 (MiComputeVadCharges.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14030B538 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14030B6D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiSetVadBits @ 0x1407B8A60 (MiSetVadBits.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v2; // r15
  unsigned __int64 v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR *ProcessPartition; // rax
  unsigned __int64 v12; // r9
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-28h]

  v2 = *(unsigned __int8 *)(a1 + 32);
  v14 = 0LL;
  v5 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v2 << 32)) << 12;
  v13 = 0LL;
  MiComputeVadCharges(a1, (__int64)&v13);
  if ( v14 && (v6 = PsChargeProcessNonPagedPoolQuota(a2, v14), v6 < 0) )
  {
    v14 = 0LL;
    v13 = 0uLL;
  }
  else if ( !*((_QWORD *)&v13 + 1)
         || a2 == PsInitialSystemProcess
         || (v6 = PspChargeQuota(a2[1].Affinity.StaticBitmap[27], (__int64)a2, 1, *((unsigned __int64 *)&v13 + 1)),
             v6 >= 0) )
  {
    if ( !(_QWORD)v13
      || (ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2),
          (unsigned int)MiChargeResident(ProcessPartition, v12, 128LL)) )
    {
      v7 = *(unsigned int *)(a1 + 52);
      LODWORD(v7) = v7 & 0x7FFFFFFF;
      v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v8 >= 0x7FFFFFFFDLL && v8 != 0x7FFFFFFFELL
        || (CurrentThread = KeGetCurrentThread(),
            LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
            v6 = MiCommitPageTablesForVad(a1, v5),
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
            v6 >= 0) )
      {
        MiSetVadBits(a1);
        return 0LL;
      }
    }
    else
    {
      v6 = -1073741670;
      *(_QWORD *)&v13 = 0LL;
    }
  }
  else
  {
    v13 = 0uLL;
  }
  MiReturnVadCharges(&v13);
  return (unsigned int)v6;
}
