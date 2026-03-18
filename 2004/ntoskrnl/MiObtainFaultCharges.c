/*
 * XREFs of MiObtainFaultCharges @ 0x1402ADCF0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x14025ED3C (MiPickClusterForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14031CC60 (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
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
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v13) )
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
