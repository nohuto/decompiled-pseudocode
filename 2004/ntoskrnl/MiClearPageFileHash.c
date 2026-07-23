/*
 * XREFs of MiClearPageFileHash @ 0x1403597D4
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _SLIST_ENTRY *v8; // r13
  __int64 Next; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  char v16; // di
  int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  BOOL v21; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  int v25; // edi
  __int64 v27; // r8
  bool v28; // zf
  __int64 updated; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 )
    return;
  v4 = v2 + 4LL * a2;
  v30 = v4;
  v5 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  updated = v6;
  v7 = v6;
  if ( (v6 & 1) == 0 )
  {
    if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DD40;
    updated = MiUpdatePageFileHighInPte(v7, (unsigned int)(HIDWORD(v6) - 1));
    v16 = updated;
    v17 = 0;
    v18 = updated;
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DE08) )
      {
LABEL_24:
        *v5 = v18;
        if ( v17 )
          MiWritePteShadow((__int64)v5, v18, v19);
        return;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_24;
    }
    if ( (v16 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_24;
  }
  *(_DWORD *)v4 = 1;
  v20 = v6;
  v21 = MiPteInShadowRange((unsigned __int64)&updated);
  if ( v21
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 |= 0x20uLL;
      v23 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
      if ( (v23 & 0x20) == 0 )
        v7 = v20;
      if ( (v23 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
    else
    {
      v7 = updated;
    }
  }
  v8 = (_SLIST_ENTRY *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  Next = (__int64)v8[1].Next;
  HIDWORD(v10) = HIDWORD(Next);
  if ( qword_140C4DD40 && (Next & 0x10) == 0 )
    v10 = Next & ~qword_140C4DD40;
  v11 = MiUpdatePageFileHighInPte(Next, (unsigned int)(HIDWORD(v10) - 1));
  v12 = v11;
  updated = v11;
  v13 = v11;
  if ( !MiPteInShadowRange((unsigned __int64)&v8[1]) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v12 & 1) != 0 )
      v13 |= 0x8000000000000000uLL;
LABEL_9:
    v15 = 0;
    goto LABEL_10;
  }
  v15 = 1;
  if ( !HIBYTE(word_140C4DE08) && (v12 & 1) != 0 )
    v13 |= 0x8000000000000000uLL;
LABEL_10:
  v8[1].Next = (_SLIST_ENTRY *)v13;
  if ( v15 )
    MiWritePteShadow((__int64)&v8[1], v13, v14);
  if ( HIDWORD(v10) == 1 )
  {
    --*(_DWORD *)(a1 + 208);
    v24 = ZeroPte;
    v25 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v25 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v28 = (ZeroPte & 1) == 0;
          goto LABEL_50;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v28 = (ZeroPte & 1) == 0;
LABEL_50:
        if ( !v28 )
          v24 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v5 = v24;
    if ( v25 )
      MiWritePteShadow((__int64)v5, v24, v27);
    KeFlushSingleTb(v30, 0, 1u);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v8);
  }
}
