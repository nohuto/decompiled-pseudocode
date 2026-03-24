/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140997AE8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeFlushSingleCurrentTb @ 0x140389ED8 (KeFlushSingleCurrentTb.c)
 */

char __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r14d
  _QWORD *PteAddress; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // r8
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r8
  bool v16; // zf
  bool v17; // zf

  v3 = a1;
  v4 = 0;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v6 )
  {
    do
    {
      v7 = ZeroPte;
      v8 = 0;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v16 = (ZeroPte & 1) == 0;
            goto LABEL_19;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (ZeroPte & 1) == 0;
LABEL_19:
          if ( !v16 )
            v7 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *PteAddress = v7;
      if ( v8 )
        MiWritePteShadow((__int64)PteAddress, v7, v9);
      ++v4;
      ++PteAddress;
    }
    while ( v4 < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v10 = (unsigned __int64 *)qword_140C4E730;
  v11 = 32LL;
  do
  {
    v12 = ZeroPte;
    v13 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v10);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_10;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_10;
      v17 = (ZeroPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_10;
      v17 = (ZeroPte & 1) == 0;
    }
    if ( !v17 )
      v12 = ZeroPte | 0x8000000000000000uLL;
LABEL_10:
    *v10 = v12;
    if ( v13 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v10, v12, v15);
    ++v10;
    --v11;
  }
  while ( v11 );
  return (char)CurrentThread;
}
