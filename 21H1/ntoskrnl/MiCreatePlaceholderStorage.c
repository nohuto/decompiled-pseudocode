/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1408D3988
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402A120C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402A3090 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x14064F830 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  _QWORD *Pool; // rax
  _QWORD *v5; // rbx
  __int64 Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota(Process, 0x88uLL);
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
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, 0x88uLL);
    return 3221225626LL;
  }
  return result;
}
