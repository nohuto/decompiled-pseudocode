/*
 * XREFs of InsertTailListPte @ 0x14031CFF0
 * Callers:
 *     MiExpandSystemCache @ 0x1402310DC (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall InsertTailListPte(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 PteLink; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct _KTHREAD *v11; // rdx
  __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 *v15; // rsi
  struct _KTHREAD *v16; // rbx
  __int64 v17; // rdi

  v4 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = MiSwizzleInvalidPte((v4 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  v6 = v5;
  if ( !(unsigned int)MiPteInShadowRange(v7) )
  {
LABEL_2:
    *a2 = v6;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
      v6 = v5 | 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140C4E048) && (v5 & 1) != 0 )
    v6 = v5 | 0x8000000000000000uLL;
  *a2 = v6;
  MiWritePteShadow((__int64)a2, v6);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v9 = PteLink;
  if ( qword_140C4DF80 )
  {
    if ( (v5 & 0x10) != 0 )
      LODWORD(v5) = v5 & 0xFFFFFFEF;
    else
      LODWORD(v5) = ~(_DWORD)qword_140C4DF80 & v5;
  }
  v10 = MiSwizzleInvalidPte(v5 & 0xFFFFFFF | (PteLink << 28));
  if ( !(unsigned int)MiPteInShadowRange(a2 + 1) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v10 & 1) != 0 )
      v10 |= 0x8000000000000000uLL;
LABEL_7:
    a2[1] = v10;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C4E048) && (v10 & 1) != 0 )
    v10 |= 0x8000000000000000uLL;
  a2[1] = v10;
  MiWritePteShadow((__int64)(a2 + 1), v10);
LABEL_8:
  v11 = a1[2];
  v12 = (v4 - (__int64)v11 - 0x98000000000LL) >> 3;
  CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(((char *)a2 - (char *)v11) >> 3 << 28);
  if ( v9 == v12 )
  {
    *a1 = CurrentThread;
    a1[1] = CurrentThread;
    return (char)CurrentThread;
  }
  v15 = (__int64 *)(v14 + 8 * v9);
  v16 = CurrentThread;
  v17 = (__int64)CurrentThread;
  LODWORD(CurrentThread) = MiPteInShadowRange(v15);
  if ( (_DWORD)CurrentThread )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && ((unsigned __int8)v16 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *v15 = v17;
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v15, v17);
      goto LABEL_11;
    }
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && ((unsigned __int8)v16 & 1) != 0 )
    {
      v17 |= 0x8000000000000000uLL;
    }
  }
  *v15 = v17;
LABEL_11:
  a1[1] = v16;
  return (char)CurrentThread;
}
