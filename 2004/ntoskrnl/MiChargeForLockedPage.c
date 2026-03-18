/*
 * XREFs of MiChargeForLockedPage @ 0x14022CA80
 * Callers:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r10d
  char v7; // di
  int IsPfnCommitNotCharged; // eax
  char v9; // r11
  __int64 v10; // rcx
  ULONG_PTR *v11; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v15; // ett
  unsigned int v16; // ebx

  v2 = (unsigned int)-((a2 & 1) != 0);
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0 )
  {
    v7 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v4, v3, v5);
    v7 = v9;
    if ( IsPfnCommitNotCharged )
      v7 = 1;
  }
  v10 = (*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL;
  v11 = *(ULONG_PTR **)(qword_140C4E448 + 8 * v10);
  if ( !v7 || (result = MiChargeCommit(*(_QWORD *)(qword_140C4E448 + 8 * v10), 1LL, v6), (_DWORD)result) )
  {
    if ( v11 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v15 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v15 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v16 = MiChargePartitionResidentAvailable(v11, 1LL, v2);
    if ( !v16 )
    {
      if ( v7 )
        MiReturnCommit((__int64)v11, 1LL);
    }
    return v16;
  }
  return result;
}
