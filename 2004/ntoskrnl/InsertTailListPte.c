/*
 * XREFs of InsertTailListPte @ 0x1402B60C0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14033D4E0 (MiExpandSystemCache.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetPteLink @ 0x1402B9B90 (MiGetPteLink.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PteLink; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rdx
  __int64 v20; // rbp
  struct _KTHREAD *result; // rax
  __int64 v22; // rdx
  unsigned __int64 *v23; // rsi
  struct _KTHREAD *v24; // rbx
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9

  v4 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = MiSwizzleInvalidPte((v4 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  v6 = v5;
  if ( !MiPteInShadowRange(v7) )
  {
LABEL_2:
    *a2 = v6;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v9, v8, v10, v11) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
      v6 = v5 | 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140C4DE08) && (v5 & 1) != 0 )
    v6 = v5 | 0x8000000000000000uLL;
  *a2 = v6;
  MiWritePteShadow(a2, v6);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v13 = PteLink;
  if ( qword_140C4DD40 )
  {
    if ( (v5 & 0x10) != 0 )
      LODWORD(v5) = v5 & 0xFFFFFFEF;
    else
      LODWORD(v5) = ~(_DWORD)qword_140C4DD40 & v5;
  }
  v14 = MiSwizzleInvalidPte(v5 & 0xFFFFFFF | (PteLink << 28));
  if ( !MiPteInShadowRange((unsigned __int64)(a2 + 1)) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_7:
    a2[1] = v14;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C4DE08) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  a2[1] = v14;
  MiWritePteShadow(a2 + 1, v14);
LABEL_8:
  v19 = a1[2];
  v20 = (v4 - (__int64)v19 - 0x98000000000LL) >> 3;
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((char *)a2 - (char *)v19) >> 3 << 28);
  if ( v13 != v20 )
  {
    v23 = (unsigned __int64 *)(v22 + 8 * v13);
    v24 = result;
    v25 = (unsigned __int64)result;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v23);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
      {
        if ( !HIBYTE(word_140C4DE08) && ((unsigned __int8)v24 & 1) != 0 )
          v25 |= 0x8000000000000000uLL;
        *v23 = v25;
        result = (struct _KTHREAD *)MiWritePteShadow(v23, v25);
        goto LABEL_11;
      }
      result = KeGetCurrentThread();
      if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && ((unsigned __int8)v24 & 1) != 0 )
      {
        v25 |= 0x8000000000000000uLL;
      }
    }
    *v23 = v25;
LABEL_11:
    a1[1] = v24;
    return result;
  }
  *a1 = result;
  a1[1] = result;
  return result;
}
