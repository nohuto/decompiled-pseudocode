/*
 * XREFs of MiDeleteVirtualAddresses @ 0x1402AB020
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402FB4A4 (MiDeleteRotateAndStopFaults.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
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
