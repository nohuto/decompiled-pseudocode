/*
 * XREFs of MiGetNextPageTable @ 0x14028F080
 * Callers:
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiGetNextNonGapPfnPage @ 0x1403C8D10 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x1405A42BC (MiCloneCaptureVadCommit.c)
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
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
  if ( (a5 & 1) != 0 )
    v12 = 2273;
  LODWORD(v20[0]) = v12;
  if ( (a5 & 2) != 0 )
    LODWORD(v20[0]) = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C540C0 && LeafVa <= qword_140C51BF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = MiFastLockLeafPageTable(AnyMultiplexedVm, v10, 0LL);
  if ( !v16 )
  {
    LODWORD(v20[0]) |= 4u;
LABEL_12:
    v20[2] = a3;
    v20[21] = &v19;
    v20[3] = AnyMultiplexedVm;
    HIBYTE(v20[0]) = a4;
    BYTE4(v20[0]) = BYTE4(v20[0]) & 0xE3 | 4;
    v20[20] = MiGetNextPageTableTail;
    v20[4] = v10;
    v20[5] = v11;
    MiWalkPageTables(v20);
    *a6 = v19;
    return *((_QWORD *)&v19 + 1);
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
