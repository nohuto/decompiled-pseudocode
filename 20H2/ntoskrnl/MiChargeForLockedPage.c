/*
 * XREFs of MiChargeForLockedPage @ 0x1402AC1F0
 * Callers:
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int v5; // r10d
  char v6; // di
  int IsPfnCommitNotCharged; // eax
  char v8; // r11
  __int64 v9; // rcx
  ULONG_PTR *v10; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v14; // ett
  unsigned int v15; // ebx

  v2 = (unsigned int)-((a2 & 1) != 0);
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(v3 + 16) & 0x400LL) != 0 )
  {
    v6 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v3);
    v6 = v8;
    if ( IsPfnCommitNotCharged )
      v6 = 1;
  }
  v9 = (*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL;
  v10 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * v9);
  if ( !v6 || (result = MiChargeCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v9), 1uLL, v5), (_DWORD)result) )
  {
    if ( v10 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v14 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v14 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v15 = MiChargePartitionResidentAvailable(v10, 1LL, v2, v4);
    if ( !v15 )
    {
      if ( v6 )
        MiReturnCommit((__int64)v10, 1LL);
    }
    return v15;
  }
  return result;
}
