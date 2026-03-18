/*
 * XREFs of MiEncodeProtoFill @ 0x1402BE9B4
 * Callers:
 *     MiInitializePrototypePtes @ 0x14063FAC4 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  char *AnyMultiplexedVm; // r14
  unsigned __int8 v8; // r13
  unsigned __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v14; // zf
  unsigned __int8 v15; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v15 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = v15;
  if ( v4 >= v6 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0LL);
LABEL_4:
    v9 = a3;
    v10 = 0;
    if ( !MiPteInShadowRange(v4) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow(v12, v11) )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_5;
      v14 = (a3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v14 = (a3 & 1) == 0;
    }
    if ( !v14 )
      v9 = a3 | 0x8000000000000000uLL;
LABEL_5:
    *(_QWORD *)v4 = v9;
    if ( v10 )
      MiWritePteShadow(v4, v9);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  v8 = v15;
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
