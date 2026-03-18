/*
 * XREFs of MiUnmapVad @ 0x1406F9060
 * Callers:
 *     MiDeletePartialVad @ 0x1402ECFD8 (MiDeletePartialVad.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1407DBC0C (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x14096CDB8 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  _KPROCESS *Process; // rcx

  if ( (P[16] & 0x2000000) != 0 )
  {
    v5 = **((_QWORD **)P + 9);
    v6 = MiReferenceControlAreaFile(v5);
    v7 = *(_QWORD *)(v6 + 24);
    MiDereferenceControlAreaFile(v5, v6);
    Process = KeGetCurrentThread()->ApcState.Process;
    a3 = (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
       - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
       + 1;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]), v7, a3);
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *((_QWORD *)P + 9) )
    MiLogMapFileEvent(P, 1062LL, a3);
  return MiDeleteVad(P);
}
