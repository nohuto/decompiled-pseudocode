/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140251FF0
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiDeleteFinalPageTables @ 0x14026B62C (MiDeleteFinalPageTables.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403384D4 (MiDeleteRotateAndStopFaults.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(unsigned __int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  MiDeletePagablePteRange((__int64)&Process[1].ActiveProcessorsPadding[6], 0x11u, a1, a2, 0, a3 | 0x80, a4);
  result = a4[3];
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -result);
  return result;
}
