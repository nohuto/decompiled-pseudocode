/*
 * XREFs of CmpDumpKeyToBuffer @ 0x140AB48B4
 * Callers:
 *     CmSaveKeyToBuffer @ 0x140AB4770 (CmSaveKeyToBuffer.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmSiRWLockReleaseExclusive @ 0x14071F640 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x14071F674 (CmSiRWLockAcquireExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AB4A00 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AB4C18 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpDumpKeyToBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG_PTR v7; // rdi
  int IsKeyBodyEligibleForDump; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  v14[1] = 0;
  v17 = 0;
  CmpLockRegistry();
  v7 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v7 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 56));
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v7);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v7 + 66) )
    {
      IsKeyBodyEligibleForDump = -1073741637;
    }
    else
    {
      CmSiRWLockAcquireExclusive(*(_QWORD *)(v7 + 32) + 72LL);
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_DWORD *)(v9 + 280) + 4096;
      if ( *a4 >= v10 )
      {
        ExAcquirePushLockSharedEx(v9 + 1784, 0LL);
        IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v7 + 32), 3);
        ExReleasePushLockEx(*(_QWORD *)(v7 + 32) + 1784LL, 0LL);
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          v13 = *(_QWORD *)(v7 + 32);
          v16 = *a4;
          v14[0] = 0;
          v15 = a3;
          IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(v13, v12, v14);
          if ( IsKeyBodyEligibleForDump >= 0 )
          {
            CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
            IsKeyBodyEligibleForDump = 0;
            goto LABEL_7;
          }
        }
      }
      else
      {
        *a4 = v10;
        IsKeyBodyEligibleForDump = -1073741789;
      }
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
    }
  }
LABEL_7:
  CmpUnlockKcb(v7);
  CmpUnlockRegistry();
  return (unsigned int)IsKeyBodyEligibleForDump;
}
