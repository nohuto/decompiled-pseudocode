/*
 * XREFs of RemoveListEntryPte @ 0x14031C7A8
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPteLink @ 0x14029A1C0 (MiGetPteLink.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

char __fastcall RemoveListEntryPte(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 PteLink; // rax
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // r14d
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r8
  bool v16; // zf
  bool v17; // zf

  PteLink = MiGetPteLink(a2[1]);
  v5 = a1[2];
  v6 = a1;
  if ( PteLink != (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (__int64 *)(v5 + 8 * PteLink);
  v7 = *a2;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_4;
      v16 = (v7 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v16 = (v7 & 1) == 0;
    }
    if ( !v16 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v6 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)v6, v7, v9);
  v10 = MiGetPteLink(*a2);
  v11 = a1[2];
  if ( v10 != (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL) >> 3 )
    a1 = (__int64 *)(v11 + 8 * v10);
  v12 = a2[1];
  v13 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)(a1 + 1));
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_9;
      v17 = (v12 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v17 = (v12 & 1) == 0;
    }
    if ( !v17 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_9:
  a1[1] = v12;
  if ( v13 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)(a1 + 1), v12, v15);
  return (char)CurrentThread;
}
