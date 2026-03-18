/*
 * XREFs of MiObtainFaultCharges @ 0x140329630
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiPickClusterForMappedFileFault @ 0x140282D10 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageForHeader @ 0x1402E57FC (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiPrefetchPagesViable @ 0x140387140 (MiPrefetchPagesViable.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x14028DC40 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned __int64 v10; // rbx
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
        while ( a2 <= v9 );
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v12) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_20;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_20:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1LL;
  MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)MiChargeCommit(a1, v10, 1LL) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        MiChargeCommit(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges((__int64)a1, a2 - v10, 0);
  return v10;
}
