/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x14024020C
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 v2; // rax
  __int64 updated; // rbx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  updated = MiUpdatePageFileHighInPte(v2, 0LL);
  v4 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_2;
      v6 = (updated & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v6 = (updated & 1) == 0;
    }
    if ( !v6 )
    {
      LOBYTE(CurrentThread) = 0;
      updated |= 0x8000000000000000uLL;
    }
  }
LABEL_2:
  *a1 = updated;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, updated);
  return (char)CurrentThread;
}
