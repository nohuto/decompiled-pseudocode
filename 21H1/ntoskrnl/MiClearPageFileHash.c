/*
 * XREFs of MiClearPageFileHash @ 0x14031BC04
 * Callers:
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
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
  int v14; // eax
  char v15; // di
  int v16; // r14d
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  BOOL v19; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // edi
  bool v25; // zf
  __int64 updated; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 )
    return;
  v4 = v2 + 4LL * a2;
  v27 = v4;
  v5 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  updated = v6;
  v7 = v6;
  if ( (v6 & 1) == 0 )
  {
    if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DE80;
    updated = MiUpdatePageFileHighInPte(v7, (unsigned int)(HIDWORD(v6) - 1));
    v15 = updated;
    v16 = 0;
    v17 = updated;
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4DF48) )
      {
LABEL_24:
        *v5 = v17;
        if ( v16 )
          MiWritePteShadow((__int64)v5, v17);
        return;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_24;
    }
    if ( (v15 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
    goto LABEL_24;
  }
  *(_DWORD *)v4 = 1;
  v18 = v6;
  v19 = MiPteInShadowRange((unsigned __int64)&updated);
  if ( v19
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 |= 0x20uLL;
      v21 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
      if ( (v21 & 0x20) == 0 )
        v7 = v18;
      if ( (v21 & 0x42) != 0 )
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
  if ( qword_140C4DE80 && (Next & 0x10) == 0 )
    v10 = Next & ~qword_140C4DE80;
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
    v14 = 0;
    goto LABEL_10;
  }
  v14 = 1;
  if ( !HIBYTE(word_140C4DF48) && (v12 & 1) != 0 )
    v13 |= 0x8000000000000000uLL;
LABEL_10:
  v8[1].Next = (_SLIST_ENTRY *)v13;
  if ( v14 )
    MiWritePteShadow((__int64)&v8[1], v13);
  if ( HIDWORD(v10) == 1 )
  {
    --*(_DWORD *)(a1 + 208);
    v22 = ZeroPte;
    v23 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v25 = (ZeroPte & 1) == 0;
          goto LABEL_50;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v25 = (ZeroPte & 1) == 0;
LABEL_50:
        if ( !v25 )
          v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v5 = v22;
    if ( v23 )
      MiWritePteShadow((__int64)v5, v22);
    KeFlushSingleTb(v27, 0LL, 1LL);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v8);
  }
}
