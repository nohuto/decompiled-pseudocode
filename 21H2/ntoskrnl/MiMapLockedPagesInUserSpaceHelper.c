/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140218B54
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x140218D98 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
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
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  char v14; // r12
  unsigned int v15; // r14d
  char v16; // al
  __int64 v17; // rdx
  __int64 v19; // rdx
  __int64 v21; // [rsp+68h] [rbp+10h]

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
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  if ( a6 )
    MiInsertVad(a6, Process, 1LL);
  v13 = 0LL;
  v14 = MiLockWorkingSetShared(v12);
  v21 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v15 = v11;
    if ( a3 )
    {
      v15 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      v16 = *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) >> 6;
      if ( v16 == 2 )
      {
        v15 |= 0x18u;
      }
      else if ( !v16 )
      {
        v15 |= 8u;
      }
      ++a3;
    }
    if ( !v13 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v12, v13);
LABEL_23:
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v10, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v21 + v10), v15);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v12)
       || (unsigned int)MiPageTableLockIsContended(v12, v13)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v12, v13);
      LOBYTE(v19) = v14;
      MiUnlockWorkingSetShared(v12, v19);
      v13 = 0LL;
      MiLockWorkingSetShared(v12);
    }
    --a5;
  }
  while ( a5 );
  if ( v13 )
    MiUnlockPageTableInternal(v12, v13);
  LOBYTE(v17) = v14;
  return MiUnlockWorkingSetShared(v12, v17);
}
