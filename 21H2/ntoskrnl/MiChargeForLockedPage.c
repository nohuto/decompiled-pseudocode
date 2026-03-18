/*
 * XREFs of MiChargeForLockedPage @ 0x140337F60
 * Callers:
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14028DC40 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140337F0C (MiIsPfnCommitNotCharged.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // r10
  int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // r11d
  char v6; // si
  ULONG_PTR *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ebx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 & 1;
  v4 = (unsigned int)-(v3 != 0);
  v5 = 4 * (v3 ^ 1) + 4;
  if ( v2 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 || (unsigned int)MiIsPfnCommitNotCharged(a1) )
  {
    v6 = 1;
    v7 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
    if ( !(unsigned int)MiChargeCommit((__int64)v7, 1uLL, v5) )
      return 0LL;
  }
  else
  {
    v6 = 0;
    v7 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
  }
  if ( v7 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      while ( CachedResidentAvailable != -1 )
      {
        v10 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v10 == CachedResidentAvailable )
          return 1;
        if ( !CachedResidentAvailable )
          break;
      }
    }
  }
  v11 = MiChargePartitionResidentAvailable((__int64)v7, 1uLL, v4);
  if ( !v11 )
  {
    if ( v6 )
      MiReturnCommit((__int64)v7, 1LL);
  }
  return v11;
}
