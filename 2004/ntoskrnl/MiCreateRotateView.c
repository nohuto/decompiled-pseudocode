/*
 * XREFs of MiCreateRotateView @ 0x14070B750
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14024A060 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
        MiInsertVadEvent(a1, Pool, 0);
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
