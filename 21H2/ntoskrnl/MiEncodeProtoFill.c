/*
 * XREFs of MiEncodeProtoFill @ 0x1402BA24C
 * Callers:
 *     MiInitializePrototypePtes @ 0x1406E82FC (MiInitializePrototypePtes.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 AnyMultiplexedVm; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // r13
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // r8
  bool v17; // zf
  unsigned __int8 v18; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v18 = MiLockWorkingSetShared(AnyMultiplexedVm, v8, v9, v10);
  v12 = v18;
  if ( v4 >= v6 )
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v12);
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
    v13 = a3;
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v4, v11) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_5;
      v17 = (a3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v17 = (a3 & 1) == 0;
    }
    if ( !v17 )
      v13 = a3 | 0x8000000000000000uLL;
LABEL_5:
    *(_QWORD *)v4 = v13;
    if ( v14 )
      MiWritePteShadow(v4, v13, v15);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  v12 = v18;
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared(AnyMultiplexedVm, v12);
}
