/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408D4CD8
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14024A060 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x1406B4C00 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  _QWORD *Pool; // rax
  _QWORD *v5; // rbx
  __int64 Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota(Process, 136LL);
  if ( (int)result >= 0 )
  {
    Pool = MiAllocatePool(64, 0x48uLL, 0x73706D4Du);
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
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return 3221225626LL;
  }
  return result;
}
