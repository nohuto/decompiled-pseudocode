/*
 * XREFs of MiWriteUselessChildPte @ 0x14055BF20
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteUselessChildPte(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = MiSwizzleInvalidPte(128LL);
  v3 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    if ( !v5 )
    {
      LOBYTE(CurrentThread) = 0;
      v2 |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *a1 = v2;
  if ( v3 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v2);
  return (char)CurrentThread;
}
