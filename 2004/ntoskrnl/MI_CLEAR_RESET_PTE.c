/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x14034F9EC
 * Callers:
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
      if ( HIBYTE(word_140C4DE08) )
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
