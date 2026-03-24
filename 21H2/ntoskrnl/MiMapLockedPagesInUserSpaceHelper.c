/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _QWORD *v7; // r13
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // esi
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // r12
  unsigned int v15; // r14d
  char v16; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v22; // [rsp+68h] [rbp+10h]

  v7 = (_QWORD *)a3;
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
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  if ( a6 )
    MiInsertVad(a6, Process, 1LL);
  v13 = 0LL;
  v14 = MiLockWorkingSetShared(v12, (__int64)Process, a3, a4);
  v22 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v15 = v11;
    if ( v7 )
    {
      v15 = (*(_DWORD *)(48LL * *v7 - 0x58000000000LL + 16) >> 5) & 7;
      v16 = *(_BYTE *)(48LL * *v7 - 0x58000000000LL + 34) >> 6;
      if ( v16 == 2 )
      {
        v15 |= 0x18u;
      }
      else if ( !v16 )
      {
        v15 |= 8u;
      }
      ++v7;
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
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v22 + v10), v15);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v12)
       || (unsigned int)MiPageTableLockIsContended(v12)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v12, v13);
      MiUnlockWorkingSetShared(v12, v14);
      v13 = 0LL;
      MiLockWorkingSetShared(v12, v18, v19, v20);
    }
    --a5;
  }
  while ( a5 );
  if ( v13 )
    MiUnlockPageTableInternal(v12, v13);
  return MiUnlockWorkingSetShared(v12, v14);
}
