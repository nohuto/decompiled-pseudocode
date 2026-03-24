/*
 * XREFs of MiClearPageFileHash @ 0x1402CB854
 * Callers:
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  struct _SLIST_ENTRY *v9; // r13
  __int64 Next; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  char v19; // di
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  int v25; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  int v29; // edi
  __int64 v31; // r8
  bool v32; // zf
  __int64 updated; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 )
    return;
  v4 = v2 + 4LL * a2;
  v34 = v4;
  v5 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE(v5);
  updated = v6;
  v8 = v6;
  if ( (v6 & 1) == 0 )
  {
    if ( qword_140C4DF40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DF40;
    updated = MiUpdatePageFileHighInPte(v8, (unsigned int)(HIDWORD(v6) - 1));
    v19 = updated;
    v20 = 0;
    v21 = updated;
    if ( !(unsigned int)MiPteInShadowRange(v5, v22) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C4E008) )
      {
LABEL_24:
        *v5 = v21;
        if ( v20 )
          MiWritePteShadow((__int64)v5, v21, v23);
        return;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_24;
    }
    if ( (v19 & 1) != 0 )
      v21 |= 0x8000000000000000uLL;
    goto LABEL_24;
  }
  *(_DWORD *)v4 = 1;
  v24 = v6;
  v25 = MiPteInShadowRange(&updated, v7);
  if ( v25
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 |= 0x20uLL;
      v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
      if ( (v27 & 0x20) == 0 )
        v8 = v24;
      if ( (v27 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
    else
    {
      v8 = updated;
    }
  }
  v9 = (struct _SLIST_ENTRY *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  Next = (__int64)v9[1].Next;
  HIDWORD(v11) = HIDWORD(Next);
  if ( qword_140C4DF40 && (Next & 0x10) == 0 )
    v11 = Next & ~qword_140C4DF40;
  v12 = MiUpdatePageFileHighInPte(Next, (unsigned int)(HIDWORD(v11) - 1));
  v13 = v12;
  updated = v12;
  v14 = v12;
  if ( !(unsigned int)MiPteInShadowRange(&v9[1], v15) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v13 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_9:
    v18 = 0;
    goto LABEL_10;
  }
  v18 = 1;
  if ( !HIBYTE(word_140C4E008) && (v13 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
LABEL_10:
  v9[1].Next = (_SLIST_ENTRY *)v14;
  if ( v18 )
    MiWritePteShadow((__int64)&v9[1], v14, v17);
  if ( HIDWORD(v11) == 1 )
  {
    --*(_DWORD *)(a1 + 208);
    v28 = ZeroPte;
    v29 = 0;
    if ( (unsigned int)MiPteInShadowRange(v5, v16) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v29 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v32 = (ZeroPte & 1) == 0;
          goto LABEL_50;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (ZeroPte & 1) == 0;
LABEL_50:
        if ( !v32 )
          v28 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v5 = v28;
    if ( v29 )
      MiWritePteShadow((__int64)v5, v28, v31);
    KeFlushSingleTb(v34, 0, 1u);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v9);
  }
}
