/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4
 * Callers:
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // ebx
  unsigned __int64 *v13; // rbp
  __int64 v14; // rdi
  unsigned __int8 v15; // r12
  unsigned int v16; // r14d
  char v17; // al
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v22; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = &Process[1].ActiveProcessorsPadding[6];
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process, 1LL);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x3F;
  }
  v14 = 0LL;
  v15 = MiLockWorkingSetShared(v13);
  v22 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v16 = v11;
    if ( a3 )
    {
      v16 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      v17 = *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) >> 6;
      if ( v17 == 2 )
      {
        v16 |= 0x18u;
      }
      else if ( !v17 )
      {
        v16 |= 8u;
      }
      ++a3;
    }
    if ( !v14 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13);
LABEL_23:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v10, 0LL, v12, v15, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v22 + v10), v16);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v13)
       || (unsigned int)MiPageTableLockIsContended(v13, v14)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13);
      LOBYTE(v20) = v15;
      MiUnlockWorkingSetShared(v13, v20);
      v14 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13);
  LOBYTE(v18) = v15;
  return MiUnlockWorkingSetShared(v13, v18);
}
