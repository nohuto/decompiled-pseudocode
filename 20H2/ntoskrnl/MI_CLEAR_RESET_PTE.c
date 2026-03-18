/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x14032060C
 * Callers:
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 */

char __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 v2; // rax
  __int64 updated; // rbx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  bool v7; // zf

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
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_2;
      v7 = (updated & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v7 = (updated & 1) == 0;
    }
    if ( !v7 )
    {
      LOBYTE(CurrentThread) = 0;
      updated |= 0x8000000000000000uLL;
    }
  }
LABEL_2:
  *a1 = updated;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, updated, v6);
  return (char)CurrentThread;
}
