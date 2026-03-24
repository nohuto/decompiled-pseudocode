/*
 * XREFs of MiGetNextPageTable @ 0x14030D820
 * Callers:
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402A0D3C (MiFlushDirtyBitsToPfn.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14030D66C (MiIsCfgBitMapPageShared.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9A00 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x14054504C (MiCloneCaptureVadCommit.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547254 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiUpdateForkMaps @ 0x14055B7A0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5, _DWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  __int16 v14; // ax
  unsigned __int64 LeafVa; // rax
  char v16; // r9
  char *AnyMultiplexedVm; // rbx
  int v18; // eax
  int v19; // edx
  __int64 result; // rax
  __int128 v21; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v22[22]; // [rsp+30h] [rbp-F8h] BYREF

  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v12 = a1 << 25 >> 16;
  v13 = a2 << 25 >> 16;
  v14 = 2145;
  LOWORD(v22[0]) = 2145;
  if ( (a5 & 1) != 0 )
  {
    v14 = 2273;
    LOWORD(v22[0]) = 2273;
  }
  if ( (a5 & 2) != 0 )
    LOWORD(v22[0]) = v14 | 0x200;
  LeafVa = MiGetLeafVa(v12, v10, v11, a5);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_140C4E368 || LeafVa < qword_140C4FB38) )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  if ( (v16 & 4) != 0 )
    goto LABEL_12;
  v18 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v12, 0);
  if ( !v18 )
  {
    LOWORD(v22[0]) |= 4u;
LABEL_12:
    v22[2] = a3;
    v22[21] = &v21;
    v22[3] = AnyMultiplexedVm;
    BYTE6(v22[0]) = a4;
    BYTE2(v22[0]) = BYTE2(v22[0]) & 0xE3 | 4;
    v22[20] = MiGetNextPageTableTail;
    v22[4] = v12;
    v22[5] = v13;
    MiWalkPageTables((__int64)v22);
    *a6 = v21;
    return *((_QWORD *)&v21 + 1);
  }
  v19 = v18 - 1;
  result = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v19;
  return result;
}
