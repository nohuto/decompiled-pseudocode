/*
 * XREFs of MiRemoveVadCharges @ 0x1407045D0
 * Callers:
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiFillCommitReturnInfo @ 0x140322F74 (MiFillCommitReturnInfo.c)
 *     MiVadCommitCrossPartition @ 0x140322F8C (MiVadCommitCrossPartition.c)
 *     MiIsVadLarge @ 0x140322FB4 (MiIsVadLarge.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MiResidentPagesForSpan @ 0x140615404 (MiResidentPagesForSpan.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 */

__int64 __fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r14
  int v5; // ebp
  int v6; // r8d
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  LONG *SharedVm; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  v17[0] = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v5 = 0;
  if ( (unsigned int)MiIsVadLarge(a1) && (*(_BYTE *)(a1 + 48) & 0x70) != 0x50 )
  {
    v5 = 1;
    v6 = MiVadCommitCrossPartition(a1);
  }
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v8 < 0x7FFFFFFFDLL && !v6 )
  {
    v17[1] = *(_QWORD *)(a1 + 8);
    v17[2] = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v8, (__int64)v17, &v16);
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      MiReturnFullProcessCharges(a2, v16);
      if ( v5 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 2032), -v9);
    }
    if ( !*((_QWORD *)&v16 + 1) )
      goto LABEL_6;
    SharedVm = MiGetSharedVm(a2 + 1664);
    v14 = *((_QWORD *)SharedVm + 1);
    if ( v14 )
    {
      if ( v13 <= v14 )
      {
        *((_QWORD *)SharedVm + 1) = v14 - v13;
LABEL_6:
        *(_DWORD *)(a1 + 52) &= 0x80000000;
        *(_BYTE *)(a1 + 34) = 0;
        goto LABEL_7;
      }
      v13 -= v14;
      *((_QWORD *)SharedVm + 1) = 0LL;
    }
    if ( v13 )
      MiReturnCommit(ProcessPartition, v13);
    goto LABEL_6;
  }
LABEL_7:
  v10 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v10 == 64 || v10 == 16 )
  {
    v15 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0);
    if ( v15 )
      MiReturnResident(ProcessPartition, v15);
  }
  return MiReleaseVadEventBlocks(a1, 1LL);
}
