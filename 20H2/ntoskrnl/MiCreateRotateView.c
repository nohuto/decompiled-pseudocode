/*
 * XREFs of MiCreateRotateView @ 0x1406DD978
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _SLIST_ENTRY *Pool; // rbx
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY v5; // rcx

  Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x48uLL, 0x77776D4Du);
  if ( Pool )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL) >= 0 )
      {
        LODWORD(Pool[4].Next) = 8;
        *((_QWORD *)&Pool->Next + 1) = v3;
        MiInsertVadEvent(a1, (__int64 *)Pool, 0);
        return 1LL;
      }
      ExFreePoolWithTag(Pool, 0);
      v5 = v3;
    }
    else
    {
      v5 = Pool;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
