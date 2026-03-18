/*
 * XREFs of MiUnmapVad @ 0x140601100
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiCleanVad @ 0x1406007B0 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     PfCheckDeprioritizeFile @ 0x14061DAD0 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1408C1148 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rax
  __int64 v9; // r14
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v7 = **(_QWORD **)(a1 + 72);
    v8 = MiReferenceControlAreaFile(v7);
    v9 = *(_QWORD *)(v8 + 24);
    MiDereferenceControlAreaFile(v7, v8);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         HIDWORD(Process[1].ActiveProcessors.Bitmap[8]),
                         v9,
                         (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                       + 1) == 1 )
    {
      a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  return MiDeleteVad((_DWORD *)a1, a2, a3);
}
