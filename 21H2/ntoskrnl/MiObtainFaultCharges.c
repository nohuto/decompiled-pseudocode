/*
 * XREFs of MiObtainFaultCharges @ 0x1402C0390
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14025C5CC (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1403249C0 (MiPickClusterForMappedFileFault.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r8

  while ( 1 )
  {
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
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable - a2,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v9 );
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v12) )
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
  MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( (unsigned int)MiChargeCommit((__int64)a1, v10, 1u) != 1 )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1;
        MiChargeCommit((__int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges((__int64)a1, a2 - v10, 0LL);
  return v10;
}
