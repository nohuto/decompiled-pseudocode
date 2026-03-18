/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140A51570
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 */

char __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r14d
  _QWORD *PteAddress; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // r15d
  unsigned __int64 *v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v12; // ebp
  struct _KTHREAD *CurrentThread; // rax
  bool v14; // zf
  bool v15; // zf

  v3 = a1;
  v4 = 0;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = ZeroPte;
      v8 = 0;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v14 = (ZeroPte & 1) == 0;
            goto LABEL_20;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v14 = (ZeroPte & 1) == 0;
LABEL_20:
          if ( !v14 )
            v7 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *PteAddress = v7;
      if ( v8 )
        MiWritePteShadow((__int64)PteAddress, v7);
      ++v4;
      ++PteAddress;
      if ( v4 >= a2 )
        goto LABEL_6;
    }
  }
  for ( ; a2; --a2 )
  {
LABEL_6:
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v9 = (unsigned __int64 *)qword_140C52A30;
  v10 = 32LL;
  do
  {
    v11 = ZeroPte;
    v12 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v9);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_9;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v15 = (ZeroPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v15 = (ZeroPte & 1) == 0;
    }
    if ( !v15 )
      v11 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
    *v9 = v11;
    if ( v12 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v9, v11);
    ++v9;
    --v10;
  }
  while ( v10 );
  return (char)CurrentThread;
}
