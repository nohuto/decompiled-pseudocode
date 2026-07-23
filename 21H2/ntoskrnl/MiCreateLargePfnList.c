/*
 * XREFs of MiCreateLargePfnList @ 0x14055E13C
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiComputePreferredNode @ 0x140547DB8 (MiComputePreferredNode.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiGetCrossPartitionCharges @ 0x140562668 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiCreateLargePfnList(__int64 a1, unsigned __int64 a2, char a3, __int64 *a4, char *a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r14
  int CrossPartitionCharges; // edi
  unsigned int v11; // edi
  unsigned int v12; // r14d
  unsigned int *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // r13
  unsigned __int64 LargeZeroPages; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v23; // zf
  signed __int32 v24; // eax
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned int *v27; // [rsp+50h] [rbp-48h]
  unsigned int v30; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( a4 )
  {
    v9 = *a4;
    v8 = *a4;
    CrossPartitionCharges = MiGetCrossPartitionCharges(*a4, 4LL, 1LL, a2);
    if ( CrossPartitionCharges < 0 )
      goto LABEL_25;
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
  }
  v11 = MiComputePreferredNode(a1);
  if ( v9 )
  {
    if ( !(unsigned int)MiChargeCommit(v8, v5, 0) )
    {
      CrossPartitionCharges = -1073741523;
      goto LABEL_25;
    }
    v7 |= 2u;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v8, v5, 0LL) )
    goto LABEL_10;
  v12 = *(_DWORD *)(a1 + 48);
  v30 = MmMakeProtectNotWriteCopy[(v12 >> 7) & 0x1F];
  v13 = (unsigned int *)(qword_140C4DED8 + 4LL * v11 * (unsigned __int16)KeNumberNodes);
  v14 = (v12 >> 18) & 3;
  v27 = &v13[(unsigned __int16)KeNumberNodes];
  if ( (unsigned int)MiVadPageSizes[v14] == 16 )
  {
    v15 = 2LL;
  }
  else if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (unsigned int)MiVadPageIndices[v14];
  }
  else
  {
    v15 = 1LL;
  }
  v16 = MiLargePageSizes[v15];
  v26 = v16;
  v17 = 2;
  if ( (v12 & 0xD00000) != 0xD00000 )
    v17 = 0;
  LargeZeroPages = MiAllocateLargeZeroPages(
                     v8,
                     v5,
                     v16,
                     v11,
                     MmMakeProtectNotWriteCopy[(v12 >> 7) & 0x1F],
                     (__int64)a5,
                     v17);
  v19 = v5 - LargeZeroPages;
  if ( v5 != LargeZeroPages )
  {
    do
    {
      if ( a3 )
        break;
      if ( ++v13 == v27 )
        break;
      v19 -= MiAllocateLargeZeroPages(v8, v19, v26, *v13, v30, (__int64)a5, v17);
    }
    while ( v19 );
    v7 |= 4u;
    v5 = a2;
    if ( v19 )
    {
      MiFreeLargeZeroPages(v8, a5, (v12 & 0xD00000) == 13631488);
LABEL_10:
      CrossPartitionCharges = -1073741670;
      goto LABEL_25;
    }
  }
  v7 = 0;
  CrossPartitionCharges = 0;
LABEL_25:
  if ( v7 >= 4 )
  {
    v20 = v5;
    if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v5 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v5 >= 0x80000 )
              break;
            v24 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v5,
                    CachedResidentAvailable);
            v23 = (_DWORD)CachedResidentAvailable == v24;
            LODWORD(CachedResidentAvailable) = v24;
            if ( v23 )
              goto LABEL_38;
          }
          while ( v24 != -1 && v5 + v24 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v20 = v5 + (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v20 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v20);
  }
LABEL_38:
  if ( (v7 & 2) != 0 )
    MiReturnCommit(v8, v5);
  if ( (v7 & 1) != 0 )
    MiReturnCrossPartitionCharges(v8, 4LL, 1LL, v5);
  return (unsigned int)CrossPartitionCharges;
}
