/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x1403A1188
 * Callers:
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x1403286F4 (MiShadowTopLevelPxes.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransformValidPteInPlace @ 0x1403760AC (MiTransformValidPteInPlace.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  volatile signed __int64 *i; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  BOOL v14; // r14d
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v19; // rdx
  __int64 v20; // rax

  v5 = a2;
  v6 = ((__int64)(a3 - a2) >> 3) + 1;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 40) >> 12;
  }
  else
  {
    v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = *(_QWORD *)v16;
    if ( MiPteInShadowRange(v16)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v19 = v17 | 0x20;
        v20 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
        if ( (v20 & 0x20) == 0 )
          v19 = v17;
        v17 = v19;
        if ( (v20 & 0x42) != 0 )
          v17 = v19 | 0x42;
      }
    }
    v8 = (v17 >> 12) & 0xFFFFFFFFFLL;
  }
  v10 = MiMapPageInHyperSpaceWorker(v8, 0LL, 0x80000000, a4);
  for ( i = (volatile signed __int64 *)(v10 + 8 * ((v5 >> 3) & 0x1FF)); v5 <= a3; ++i )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v5);
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v12 != v13 )
    {
      if ( (v12 & 1) == 0 )
      {
        v14 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
          v14 = MiPteHasShadow() != 0;
        goto LABEL_8;
      }
      if ( (v13 & 1) == 0 )
      {
        v14 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v14 = 1;
            if ( !HIBYTE(word_140C4DF48) )
LABEL_31:
              v12 |= 0x8000000000000000uLL;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_31;
          }
        }
LABEL_8:
        *i = v12;
        if ( v14 )
          MiWritePteShadow((__int64)i, v12);
        goto LABEL_10;
      }
      MiTransformValidPteInPlace(i, v5, v12, 3u);
    }
LABEL_10:
    v5 += 8LL;
  }
  LOBYTE(v9) = 17;
  MiUnmapPageInHyperSpaceWorker(v10, v9, 0x80000000);
  return MiShadowTopLevelPxes(a1, v5 - 8LL * v6, v6);
}
