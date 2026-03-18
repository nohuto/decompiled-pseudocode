/*
 * XREFs of MiDecommitRegion @ 0x140625BE0
 * Callers:
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiFillCommitReturnInfo @ 0x140230284 (MiFillCommitReturnInfo.c)
 *     MiVadCommitCrossPartition @ 0x14023029C (MiVadCommitCrossPartition.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 */

__int64 __fastcall MiDecommitRegion(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v5; // r10
  __int64 PteAddress; // rax
  unsigned __int64 v7; // rdx
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
