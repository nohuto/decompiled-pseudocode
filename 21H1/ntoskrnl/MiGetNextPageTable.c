/*
 * XREFs of MiGetNextPageTable @ 0x1402AF130
 * Callers:
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B5730 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x14053F528 (MiCloneCaptureVadCommit.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  __int16 v12; // ax
  unsigned __int64 LeafVa; // rax
  char v14; // r9
  char *AnyMultiplexedVm; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v20[22]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  LOWORD(v20[0]) = 2145;
  if ( (a5 & 1) != 0 )
  {
    v12 = 2273;
    LOWORD(v20[0]) = 2273;
  }
  if ( (a5 & 2) != 0 )
    LOWORD(v20[0]) = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_140C4E2A8 || LeafVa < qword_140C4FA78) )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10, 0);
  if ( !v16 )
  {
    LOWORD(v20[0]) |= 4u;
LABEL_12:
    v20[2] = a3;
    v20[21] = &v19;
    v20[3] = AnyMultiplexedVm;
    BYTE6(v20[0]) = a4;
    BYTE2(v20[0]) = BYTE2(v20[0]) & 0xE3 | 4;
    v20[20] = MiGetNextPageTableTail;
    v20[4] = v10;
    v20[5] = v11;
    MiWalkPageTables((__int64)v20);
    *a6 = v19;
    return *((_QWORD *)&v19 + 1);
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
