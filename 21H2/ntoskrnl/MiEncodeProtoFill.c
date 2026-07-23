/*
 * XREFs of MiEncodeProtoFill @ 0x14023845C
 * Callers:
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 AnyMultiplexedVm; // r14
  __int64 v8; // rdx
  char v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  bool v13; // zf
  char v14; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v14 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v9 = v14;
  if ( v4 >= v6 )
    goto LABEL_10;
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(AnyMultiplexedVm, v5, 0LL);
LABEL_4:
    v10 = a3;
    v11 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v4) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v13 = (a3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v13 = (a3 & 1) == 0;
    }
    if ( !v13 )
      v10 = a3 | 0x8000000000000000uLL;
LABEL_5:
    *(_QWORD *)v4 = v10;
    if ( v11 )
      MiWritePteShadow(v4, v10);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  v9 = v14;
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
LABEL_10:
  LOBYTE(v8) = v9;
  return MiUnlockWorkingSetShared(AnyMultiplexedVm, v8);
}
