/*
 * XREFs of MiDecommitRegion @ 0x1407059D0
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiFillCommitReturnInfo @ 0x140322F74 (MiFillCommitReturnInfo.c)
 *     MiVadCommitCrossPartition @ 0x140322F8C (MiVadCommitCrossPartition.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 */

__int64 __fastcall MiDecommitRegion(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v5; // r10
  __int64 PteAddress; // rax
  ULONG_PTR v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned int v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 ProcessPartition; // rax
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-18h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  MiGetPteAddress(a3);
  PteAddress = MiGetPteAddress(v5);
  v8 = ((__int64)(v7 - PteAddress) >> 3) + 1;
  v10 = MiDecommitPages(v9, v7, (__int64)Process, a1, 1, &v19);
  v22 = 0LL;
  if ( *((_QWORD *)&v21 + 1) )
    *((_QWORD *)&v19 + 1) = MiFreeLargePages(*((_QWORD **)&v21 + 1), &v22);
  v11 = *(_DWORD *)(a1 + 52);
  v12 = v11;
  LODWORD(v12) = v11 & 0x7FFFFFFF;
  v13 = v8 - *((_QWORD *)&v20 + 1);
  v14 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v13;
  *(_BYTE *)(a1 + 34) = v14 >> 31;
  *(_DWORD *)(a1 + 52) = v11 ^ (v14 ^ v11) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Spare2[39], -v13);
  if ( !(unsigned int)MiVadCommitCrossPartition(a1) )
  {
    MiFillCommitReturnInfo(v13, (__int64)&v19, &v18);
    if ( (_QWORD)v18 )
      MiReturnFullProcessCharges((__int64)Process, v18);
    if ( *((_QWORD *)&v18 + 1) && *((_QWORD *)&v18 + 1) != v22 )
    {
      ProcessPartition = MiGetProcessPartition((__int64)Process);
      MiReturnCommit(ProcessPartition, v16);
    }
  }
  return v10;
}
