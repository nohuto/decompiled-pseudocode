/*
 * XREFs of MiChargeForLockedPage @ 0x140285AD0
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r10d
  char v9; // di
  int IsPfnCommitNotCharged; // eax
  char v11; // r11
  __int64 v12; // rcx
  ULONG_PTR *v13; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v17; // ett
  unsigned int v18; // ebx

  v3 = a2 & 1;
  v4 = (unsigned int)-(v3 != 0);
  if ( (unsigned int)MI_PFN_IS_PROTO(a1, v3 ^ 1u, a3) && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    v9 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v6, v5, v7);
    v9 = v11;
    if ( IsPfnCommitNotCharged )
      v9 = 1;
  }
  v12 = (*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL;
  v13 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v12);
  if ( !v9 || (result = MiChargeCommit(*(_QWORD *)(qword_140C4E588 + 8 * v12), 1uLL, v8), (_DWORD)result) )
  {
    if ( v13 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v17 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v17 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v18 = MiChargePartitionResidentAvailable(v13, 1LL, v4);
    if ( !v18 )
    {
      if ( v9 )
        MiReturnCommit((__int64)v13, 1LL);
    }
    return v18;
  }
  return result;
}
