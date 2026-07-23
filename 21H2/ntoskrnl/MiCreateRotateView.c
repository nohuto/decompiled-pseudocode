/*
 * XREFs of MiCreateRotateView @ 0x14061CAB0
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14027CF2C (MiInsertVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *Pool; // rbx
  ULONG_PTR v3; // rdi
  void *v5; // rcx

  Pool = MiAllocatePool(64, 0x48uLL, 0x77776D4Du);
  if ( Pool )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x208uLL) >= 0 )
      {
        Pool[16] = 8;
        *((_QWORD *)Pool + 1) = v3;
        MiInsertVadEvent(a1, (__int64 *)Pool, 0);
        return 1LL;
      }
      ExFreePoolWithTag(Pool, 0);
      v5 = (void *)v3;
    }
    else
    {
      v5 = Pool;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
