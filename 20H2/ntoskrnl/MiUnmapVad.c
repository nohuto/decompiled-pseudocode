/*
 * XREFs of MiUnmapVad @ 0x140685B60
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiCleanVad @ 0x14068551C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 * Callees:
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     PfCheckDeprioritizeFile @ 0x14064E710 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1408C6F88 (MiLogMapFileEvent.c)
 */

void __fastcall MiUnmapVad(_QWORD **P, __int64 a2, int a3)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rax
  __int64 v8; // r14
  _KPROCESS *Process; // rcx

  if ( ((_DWORD)P[8] & 0x2000000) != 0 )
  {
    v6 = *P[9];
    v7 = MiReferenceControlAreaFile(v6);
    v8 = *(_QWORD *)(v7 + 24);
    MiDereferenceControlAreaFile(v6, v7);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         HIDWORD(Process[1].ActiveProcessors.Bitmap[8]),
                         v8,
                         *((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1) == 1 )
    {
      a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && P[9] )
    MiLogMapFileEvent(P, 1062LL);
  MiDeleteVad(P, a2, a3);
}
