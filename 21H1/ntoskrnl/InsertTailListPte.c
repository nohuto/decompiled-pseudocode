/*
 * XREFs of InsertTailListPte @ 0x140223440
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x140300998 (MiExpandSystemCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetPteLink @ 0x140226F10 (MiGetPteLink.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 PteLink; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rdx
  __int64 v17; // rbp
  struct _KTHREAD *result; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rsi
  struct _KTHREAD *v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx

  v4 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = MiSwizzleInvalidPte((v4 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  v6 = v5;
  if ( !(unsigned int)MiPteInShadowRange(v7, v7) )
  {
LABEL_2:
    *a2 = v6;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v9, v8) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
      v6 = v5 | 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140C4DF48) && (v5 & 1) != 0 )
    v6 = v5 | 0x8000000000000000uLL;
  *a2 = v6;
  MiWritePteShadow(a2, v6);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v11 = PteLink;
  if ( qword_140C4DE80 )
  {
    if ( (v5 & 0x10) != 0 )
      LODWORD(v5) = v5 & 0xFFFFFFEF;
    else
      LODWORD(v5) = ~(_DWORD)qword_140C4DE80 & v5;
  }
  v12 = MiSwizzleInvalidPte(v5 & 0xFFFFFFF | (PteLink << 28));
  if ( !(unsigned int)MiPteInShadowRange(a2 + 1, v13) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v15, v14) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v12 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
LABEL_7:
    a2[1] = v12;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C4DF48) && (v12 & 1) != 0 )
    v12 |= 0x8000000000000000uLL;
  a2[1] = v12;
  MiWritePteShadow(a2 + 1, v12);
LABEL_8:
  v16 = a1[2];
  v17 = (v4 - (__int64)v16 - 0x98000000000LL) >> 3;
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((char *)a2 - (char *)v16) >> 3 << 28);
  if ( v11 != v17 )
  {
    v20 = (unsigned __int64 *)(v19 + 8 * v11);
    v21 = result;
    v22 = (unsigned __int64)result;
    result = (struct _KTHREAD *)MiPteInShadowRange(v20, v19);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v23) )
      {
        if ( !HIBYTE(word_140C4DF48) && ((unsigned __int8)v21 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        *v20 = v22;
        result = (struct _KTHREAD *)MiWritePteShadow(v20, v22);
        goto LABEL_11;
      }
      result = KeGetCurrentThread();
      if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && ((unsigned __int8)v21 & 1) != 0 )
      {
        v22 |= 0x8000000000000000uLL;
      }
    }
    *v20 = v22;
LABEL_11:
    a1[1] = v21;
    return result;
  }
  *a1 = result;
  a1[1] = result;
  return result;
}
