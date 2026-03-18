/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408DAB18
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x1406EF468 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 *Pool; // rax
  __int64 *v5; // rbx
  __int64 Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota(Process, 136LL);
  if ( (int)result >= 0 )
  {
    Pool = (__int64 *)MiAllocatePool(64, 0x48uLL, 0x73706D4Du);
    v5 = Pool;
    if ( Pool )
    {
      *((_DWORD *)Pool + 16) = 128;
      Vad = MiAllocateVad(0LL, 0LL, 2);
      v5[1] = Vad;
      if ( Vad )
      {
        MiInsertVadEvent(a1, v5, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v5, 0);
    }
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, 0x88uLL);
    return 3221225626LL;
  }
  return result;
}
