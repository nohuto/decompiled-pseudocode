/*
 * XREFs of MiChargeForLockedPage @ 0x1403337F0
 * Callers:
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // r10d
  char v5; // di
  int IsPfnCommitNotCharged; // eax
  char v7; // r11
  __int64 v8; // rcx
  ULONG_PTR *v9; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v13; // ett
  unsigned int v14; // ebx

  v2 = (unsigned int)-((a2 & 1) != 0);
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(v3 + 16) & 0x400LL) != 0 )
  {
    v5 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v3);
    v5 = v7;
    if ( IsPfnCommitNotCharged )
      v5 = 1;
  }
  v8 = (*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL;
  v9 = *(ULONG_PTR **)(qword_140C4E688 + 8 * v8);
  if ( !v5 || (result = MiChargeCommit(*(_QWORD *)(qword_140C4E688 + 8 * v8), 1uLL, v4), (_DWORD)result) )
  {
    if ( v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v13 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v13 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v14 = MiChargePartitionResidentAvailable((__int64)v9, 1uLL, v2);
    if ( !v14 )
    {
      if ( v5 )
        MiReturnCommit((__int64)v9, 1LL);
    }
    return v14;
  }
  return result;
}
