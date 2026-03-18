/*
 * XREFs of MiObtainFaultCharges @ 0x14027D270
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1402323EC (MiPickClusterForMappedFileFault.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x140351198 (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
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
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v12, a2) )
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
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( (unsigned int)MiChargeCommit((unsigned __int64)a1, v10, 1u) != 1 )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1;
        MiChargeCommit((unsigned __int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
