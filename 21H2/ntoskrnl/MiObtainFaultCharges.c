/*
 * XREFs of MiObtainFaultCharges @ 0x14021BA90
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140319C70 (MiPickClusterForMappedFileFault.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiChargePartitionResidentAvailable @ 0x1402B0CC8 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  unsigned __int32 v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // r8

  while ( 1 )
  {
    v6 = a2;
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - a2,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v10 );
      }
    }
    v13 = 1LL;
    if ( a2 != 1 )
      v13 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v13, a2) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_22;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_22:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL, v6);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v11 = a2;
  while ( (unsigned int)MiChargeCommit((__int64)a1, v11, 1u) != 1 )
  {
    v11 >>= 1;
    if ( !v11 )
    {
      if ( (a3 & 2) != 0 )
      {
        v11 = 1;
        MiChargeCommit((__int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v11 != a2 )
    MiReturnFaultCharges(a1, a2 - v11, 0LL);
  return v11;
}
