/*
 * XREFs of MiInitializeProtoPfn @ 0x1405551D0
 * Callers:
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  int v13; // ebp
  BOOL v14; // eax
  int v15; // r11d
  int v17; // [rsp+50h] [rbp+18h] BYREF
  int v18; // [rsp+58h] [rbp+20h] BYREF

  v18 = a4;
  LOBYTE(v18) = 0;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v11 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v18);
    if ( v11 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17, v8, v9, v10);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, a2, a3, 23);
  v12 = MiMakeValidPte(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v13 = 0;
  v14 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v15) = 1;
  if ( v14 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = v15;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_14;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v12 & (unsigned __int8)v15) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)a2, v12);
  *(_WORD *)(v7 + 32) += v15;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v11, v18);
}
