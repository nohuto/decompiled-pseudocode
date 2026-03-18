/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x1403121FC
 * Callers:
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

char __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 v2; // rax
  __int64 updated; // rbx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf

  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdatePageFileHighInPte(v2, 0LL);
  v4 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
