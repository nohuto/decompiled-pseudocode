/*
 * XREFs of MiInitializeProtoPfn @ 0x140554F90
 * Callers:
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  __int64 v15; // r8
  int v16; // r11d
  int v18; // [rsp+50h] [rbp+18h] BYREF
  int v19; // [rsp+58h] [rbp+20h] BYREF

  v19 = a4;
  LOBYTE(v19) = 0;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v11 = MiLockProtoPoolPage((unsigned __int64)a2, (__int64)&v19);
    if ( v11 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18, v8, v9, v10);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, a2, a3, 23);
  v12 = MiMakeValidPte(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v13 = 0;
  v14 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v16) = 1;
  if ( v14 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = v16;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_14;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v12 & (unsigned __int8)v16) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)a2, v12, v15);
  *(_WORD *)(v7 + 32) += v16;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v11, v19);
}
