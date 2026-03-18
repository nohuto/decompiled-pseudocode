/*
 * XREFs of MiEncodeProtoFill @ 0x140250F1C
 * Callers:
 *     MiInitializePrototypePtes @ 0x14068304C (MiInitializePrototypePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  char *AnyMultiplexedVm; // r14
  __int64 v8; // rdx
  char v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v16; // zf
  char v17; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v17 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v9 = v17;
  if ( v4 >= v6 )
    goto LABEL_10;
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(AnyMultiplexedVm, v5, 0LL);
LABEL_4:
    v10 = a3;
    v11 = 0;
    if ( !MiPteInShadowRange(v4) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow(v12, v8, v13, v14) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_5;
      v16 = (a3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v16 = (a3 & 1) == 0;
    }
    if ( !v16 )
      v10 = a3 | 0x8000000000000000uLL;
LABEL_5:
    *(_QWORD *)v4 = v10;
    if ( v11 )
      MiWritePteShadow(v4, v10);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  v9 = v17;
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm);
LABEL_10:
  LOBYTE(v8) = v9;
  return MiUnlockWorkingSetShared(AnyMultiplexedVm, v8);
}
