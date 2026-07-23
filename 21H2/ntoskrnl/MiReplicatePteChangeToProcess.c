/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x1403A47F8
 * Callers:
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x140295830 (MiShadowTopLevelPxes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140378BA8 (MiTransformValidPteInPlace.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  volatile signed __int64 *i; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  BOOL v12; // r14d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v17; // rdx
  __int64 v18; // rax

  v4 = a2;
  v5 = ((__int64)(a3 - a2) >> 3) + 1;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  }
  else
  {
    v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_QWORD *)v14;
    if ( MiPteInShadowRange(v14)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v17 = v15 | 0x20;
        v18 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
        if ( (v18 & 0x20) == 0 )
          v17 = v15;
        v15 = v17;
        if ( (v18 & 0x42) != 0 )
          v15 = v17 | 0x42;
      }
    }
    v7 = (v15 >> 12) & 0xFFFFFFFFFLL;
  }
  v8 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000);
  for ( i = (volatile signed __int64 *)(v8 + 8 * ((v4 >> 3) & 0x1FF)); v4 <= a3; ++i )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v4);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v10 != v11 )
    {
      if ( (v10 & 1) == 0 )
      {
        v12 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
          v12 = MiPteHasShadow() != 0;
        goto LABEL_8;
      }
      if ( (v11 & 1) == 0 )
      {
        v12 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v12 = 1;
            if ( !HIBYTE(word_140C4E048) )
LABEL_31:
              v10 |= 0x8000000000000000uLL;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_31;
          }
        }
LABEL_8:
        *i = v10;
        if ( v12 )
          MiWritePteShadow((__int64)i, v10);
        goto LABEL_10;
      }
      MiTransformValidPteInPlace(i, v4, v10, 3u);
    }
LABEL_10:
    v4 += 8LL;
  }
  MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0x80000000);
  return MiShadowTopLevelPxes(a1, v4 - 8LL * v5, v5);
}
