/*
 * XREFs of MiCreateLargePageVad @ 0x1408D6964
 * Callers:
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14024B530 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D3D34 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, void *a3)
{
  int v3; // r12d
  __int64 Pool; // rbx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r9d
  int v14; // ebp

  v3 = 1;
  Pool = 1LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x100000) != 0 )
    Pool = -(__int64)(a3 != 0LL) & 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Pool )
  {
    Pool = (__int64)MiAllocatePool(64, 0x48uLL, 0x624C6D4Du);
    if ( !Pool )
      return 3221225626LL;
  }
  v11 = *(unsigned int *)(a2 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v12 )
  {
    if ( !a3 )
      goto LABEL_24;
LABEL_23:
    ObfReferenceObjectWithTag(a3, 0x746C6644u);
    *(_QWORD *)(Pool + 24) = a3;
    goto LABEL_24;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31)) )
  {
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return 3221225773LL;
  }
  if ( a3 )
    goto LABEL_23;
  if ( v13 || Process != (_KPROCESS *)a1 )
    v3 = 0;
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v14 = MiChargeFullProcessCommitment(a1, v12);
  if ( v3 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v14 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v12);
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)v14;
  }
LABEL_24:
  if ( Pool )
  {
    *(_DWORD *)(Pool + 64) = 16;
    MiInsertVadEvent(a2, (_QWORD *)Pool, 0);
  }
  return 0LL;
}
