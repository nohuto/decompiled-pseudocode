/*
 * XREFs of MiUnmapVad @ 0x140688090
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x140688508 (MiCleanVad.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     PfCheckDeprioritizeFile @ 0x14067C4E8 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1408C48A8 (MiLogMapFileEvent.c)
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
                         *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) + 1) == 1 )
    {
      a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  return MiDeleteVad((_DWORD *)a1, a2, a3);
}
