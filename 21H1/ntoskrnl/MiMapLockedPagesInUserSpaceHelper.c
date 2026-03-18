/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int8 v16; // r12
  unsigned int v17; // r14d
  char v18; // al
  __int64 v21; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process, 1LL, a4);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x3F;
  }
  v14 = 0LL;
  v16 = MiLockWorkingSetShared(v13);
  v21 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v11;
    if ( a3 )
    {
      v17 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      v18 = *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) >> 6;
      if ( v18 == 2 )
      {
        v17 |= 0x18u;
      }
      else if ( !v18 )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( !v14 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13, v14, v15);
LABEL_23:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v10, 0LL, v12, v16, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v21 + v10), v17);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && (MiWorkingSetIsContended(v13) || (unsigned int)MiPageTableLockIsContended(v13, v14) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13, v14, v15);
      MiUnlockWorkingSetShared(v13, v16);
      v14 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13, v14, v15);
  return MiUnlockWorkingSetShared(v13, v16);
}
