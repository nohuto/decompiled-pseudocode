/*
 * XREFs of MiInitializeProtoPfn @ 0x14054F4A0
 * Callers:
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  int v14; // ebp
  BOOL v15; // eax
  int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+50h] [rbp+18h] BYREF
  int v22; // [rsp+58h] [rbp+20h] BYREF

  v22 = a4;
  LOBYTE(v22) = 0;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v11 = MiLockProtoPoolPage((unsigned __int64)a2, (__int64)&v22);
    if ( v11 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v21, v8, v9, v10);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, a2, a3, 23);
  v13 = MiMakeValidPte(0LL, a1, a3 | 0x80000000, v12) & 0xFFFFFFFFFFFFFEFFuLL;
  v14 = 0;
  v15 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v16) = 1;
  if ( v15 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = v16;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_14;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v16) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)a2, v13);
  *(_WORD *)(v7 + 32) += v16;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v17) = v22;
  return MiUnlockProtoPoolPage(v11, v17, v18, v19);
}
