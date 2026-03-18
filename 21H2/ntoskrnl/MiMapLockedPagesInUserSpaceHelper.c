/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140213398
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x140213558 (MiInsertPhysicalPteMapping.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
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
  unsigned __int64 v10; // r15
  unsigned int v11; // ebp
  int v12; // ebx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // r9d
  char v16; // r12
  unsigned int v17; // r14d
  __int64 v18; // rdx
  char v20; // al
  __int64 v21; // rdx
  __int64 v23; // [rsp+68h] [rbp+10h]

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
  v13 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  if ( a6 )
  {
    MiInsertVad(a6, Process, 0LL);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x7F;
  }
  v14 = 0LL;
  v16 = MiLockWorkingSetShared(v13);
  v23 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v11;
    if ( a3 )
    {
      v17 = (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 16) >> 5) & 7;
      v20 = *(_BYTE *)(48LL * *a3 - 0x220000000000LL + 34) >> 6;
      if ( v20 == 2 )
      {
        v17 |= 0x18u;
      }
      else if ( !v20 )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( v14 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v13, v14);
    }
    v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v15) = v16;
    MiMakeSystemAddressValid(v10, 0, v12, v15, 0);
LABEL_9:
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v23 + v10), v17);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v13)
       || (unsigned int)MiPageTableLockIsContended(v13, v14)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13, v14);
      LOBYTE(v21) = v16;
      MiUnlockWorkingSetShared(v13, v21);
      v14 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13, v14);
  LOBYTE(v18) = v16;
  return MiUnlockWorkingSetShared(v13, v18);
}
