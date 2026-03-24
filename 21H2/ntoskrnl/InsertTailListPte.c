/*
 * XREFs of InsertTailListPte @ 0x1403122A0
 * Callers:
 *     MiExpandSystemCache @ 0x1402B2F2C (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x140312BE0 (MiGetPteLink.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  __int64 v11; // rdx
  struct _KTHREAD *v12; // rdx
  __int64 v13; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 *v16; // rsi
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8

  v4 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = MiSwizzleInvalidPte((v4 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  v6 = v5;
  if ( !(unsigned int)MiPteInShadowRange(v7, v7) )
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
  if ( !HIBYTE(word_140C4E008) && (v5 & 1) != 0 )
    v6 = v5 | 0x8000000000000000uLL;
  *a2 = v6;
  MiWritePteShadow((__int64)a2, v6, v19);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v9 = PteLink;
  if ( qword_140C4DF40 )
  {
    if ( (v5 & 0x10) != 0 )
      LODWORD(v5) = v5 & 0xFFFFFFEF;
    else
      LODWORD(v5) = ~(_DWORD)qword_140C4DF40 & v5;
  }
  v10 = MiSwizzleInvalidPte(v5 & 0xFFFFFFF | (PteLink << 28));
  if ( !(unsigned int)MiPteInShadowRange(a2 + 1, v11) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v10 & 1) != 0 )
      v10 |= 0x8000000000000000uLL;
LABEL_7:
    a2[1] = v10;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C4E008) && (v10 & 1) != 0 )
    v10 |= 0x8000000000000000uLL;
  a2[1] = v10;
  MiWritePteShadow((__int64)(a2 + 1), v10, v20);
LABEL_8:
  v12 = a1[2];
  v13 = (v4 - (__int64)v12 - 0x98000000000LL) >> 3;
  CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(((char *)a2 - (char *)v12) >> 3 << 28);
  if ( v9 == v13 )
  {
    *a1 = CurrentThread;
    a1[1] = CurrentThread;
    return (char)CurrentThread;
  }
  v16 = (__int64 *)(v15 + 8 * v9);
  v17 = CurrentThread;
  v18 = (__int64)CurrentThread;
  LODWORD(CurrentThread) = MiPteInShadowRange(v16, v15);
  if ( (_DWORD)CurrentThread )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E008) && ((unsigned __int8)v17 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
      *v16 = v18;
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v16, v18, v21);
      goto LABEL_11;
    }
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && ((unsigned __int8)v17 & 1) != 0 )
    {
      v18 |= 0x8000000000000000uLL;
    }
  }
  *v16 = v18;
LABEL_11:
  a1[1] = v17;
  return (char)CurrentThread;
}
