/*
 * XREFs of MiRemoveVadCharges @ 0x1407BC750
 * Callers:
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiReturnFullProcessCharges @ 0x14028CDA0 (MiReturnFullProcessCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiIsVadLarge @ 0x14031077C (MiIsVadLarge.c)
 *     MiFillCommitReturnInfo @ 0x1403107F0 (MiFillCommitReturnInfo.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiResidentPagesForSpan @ 0x1406DD778 (MiResidentPagesForSpan.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r14
  BOOL v5; // ebp
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *SharedVm; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v15[0] = 0LL;
  v15[2] = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v5 = 0;
  if ( (unsigned int)MiIsVadLarge(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 0x70) != 80;
  v6 = *(unsigned int *)(a1 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v7 < 0x7FFFFFFFDLL )
  {
    v15[1] = *(_QWORD *)(a1 + 8);
    v15[3] = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v7, (__int64)v15, &v14);
    v8 = v14;
    if ( (_QWORD)v14 )
    {
      MiReturnFullProcessCharges(a2, v14);
      if ( v5 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 2032), -v8);
    }
    if ( !*((_QWORD *)&v14 + 1) )
      goto LABEL_11;
    SharedVm = MiGetSharedVm(a2 + 1664);
    v11 = SharedVm[1];
    if ( v11 )
    {
      if ( v10 <= v11 )
      {
        SharedVm[1] = v11 - v10;
LABEL_11:
        *(_DWORD *)(a1 + 52) &= 0x80000000;
        *(_BYTE *)(a1 + 34) = 0;
        goto LABEL_12;
      }
      v10 -= v11;
      SharedVm[1] = 0LL;
    }
    if ( v10 )
      MiReturnCommit(ProcessPartition, v10);
    goto LABEL_11;
  }
LABEL_12:
  v12 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v12 == 16 || v12 == 64 )
  {
    v13 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0);
    if ( v13 )
      MiReturnResident(ProcessPartition, v13);
  }
  MiReleaseVadEventBlocks(a1, 1);
}
