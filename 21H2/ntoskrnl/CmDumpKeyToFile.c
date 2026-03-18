/*
 * XREFs of CmDumpKeyToFile @ 0x14090C1BC
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 * Callees:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpFreeOffsetArray @ 0x140917DC4 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1409180B0 (CmpWriteOffsetArrayToFile.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1409220A0 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140AB4464 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AB4A00 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AB4C18 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmDumpKeyToFile(__int64 a1, __int64 a2, void *a3)
{
  char v4; // r14
  __int64 v6; // rbx
  char v7; // bp
  int IsKeyBodyEligibleForDump; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v26[2]; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0;
  v4 = a2;
  v27 = 0;
  *(_QWORD *)v26 = 0LL;
  CmpLockRegistry(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1;
  CmpLockKcbShared(v6);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v6);
  if ( IsKeyBodyEligibleForDump < 0 )
    goto LABEL_13;
  if ( *(_WORD *)(v6 + 66) )
  {
    CmpUnlockKcb(v6);
    CmpUnlockRegistry(v10, v9, v11, v12);
    return (unsigned int)CmSaveKey(a1, (__int64)a3, 5, v4);
  }
  HvLockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
  CmLockHiveSecurityShared(*(_QWORD *)(v6 + 32));
  IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v6 + 32), 3);
  CmUnlockHiveSecurity(*(_QWORD *)(v6 + 32));
  if ( IsKeyBodyEligibleForDump < 0 )
    goto LABEL_12;
  v13 = HvAllocateOffsetArraysForHiveSnapshot(*(_QWORD *)(v6 + 32), &v27, v26, &v28);
  v15 = *(_QWORD *)v26;
  IsKeyBodyEligibleForDump = v13;
  if ( v13 >= 0 )
  {
    IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v6 + 32), v14, *(_QWORD *)v26);
    if ( IsKeyBodyEligibleForDump >= 0 )
    {
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
      CmpUnlockKcb(v6);
      CmpUnlockRegistry(v17, v16, v18, v19);
      v7 = 0;
      IsKeyBodyEligibleForDump = CmpWriteOffsetArrayToFile(v20, v27, v15, v28, a3);
      if ( IsKeyBodyEligibleForDump >= 0 )
        IsKeyBodyEligibleForDump = 0;
    }
  }
  if ( v15 )
    CmpFreeOffsetArray((unsigned int)v27, v15);
  if ( v7 )
  {
LABEL_12:
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v6 + 32));
LABEL_13:
    CmpUnlockKcb(v6);
    CmpUnlockRegistry(v22, v21, v23, v24);
  }
  return (unsigned int)IsKeyBodyEligibleForDump;
}
