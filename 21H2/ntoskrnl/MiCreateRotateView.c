/*
 * XREFs of MiCreateRotateView @ 0x1406E97B4
 * Callers:
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *Pool; // rbx
  __int64 v3; // rdi
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
        MiInsertVadEvent(a1, (unsigned __int64 *)Pool, 0);
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
