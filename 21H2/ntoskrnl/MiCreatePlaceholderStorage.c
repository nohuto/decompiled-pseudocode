/*
 * XREFs of MiCreatePlaceholderStorage @ 0x14097EE60
 * Callers:
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x1406C3FB4 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v5; // rbx
  _DWORD *Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota(Process, 0x88uLL);
  if ( (int)result >= 0 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 0x48uLL, 0x73706D4Du);
    v5 = Pool;
    if ( Pool )
    {
      *((_DWORD *)Pool + 16) = 128;
      Vad = MiAllocateVad(0LL, 0LL, 2);
      v5[1] = (unsigned __int64)Vad;
      if ( Vad )
      {
        MiInsertVadEvent(a1, v5, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v5, 0);
    }
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return 3221225626LL;
  }
  return result;
}
