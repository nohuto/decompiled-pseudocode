/*
 * XREFs of MiDeleteVirtualAddresses @ 0x1402508A0
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x14025F304 (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r9d
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(a2) = 17;
  MiDeletePagablePteRange((_DWORD)Process + 1664, a2, a1, v5, 0, a3 | 0x80, a4);
  result = *(_QWORD *)(a4 + 24);
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -result);
  return result;
}
