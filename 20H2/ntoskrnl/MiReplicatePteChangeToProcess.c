/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x1403A3DE8
 * Callers:
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x1403353C0 (MiShadowTopLevelPxes.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransformValidPteInPlace @ 0x140378E4C (MiTransformValidPteInPlace.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  volatile signed __int64 *i; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  BOOL v13; // r14d
  __int64 v14; // r8
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
  v9 = MiMapPageInHyperSpaceWorker(v8, 0LL, 0x80000000, a4);
  for ( i = (volatile signed __int64 *)(v9 + 8 * ((v5 >> 3) & 0x1FF)); v5 <= a3; ++i )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v11 != v12 )
    {
      if ( (v11 & 1) == 0 )
      {
        v13 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
          v13 = MiPteHasShadow() != 0;
        goto LABEL_8;
      }
      if ( (v12 & 1) == 0 )
      {
        v13 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v13 = 1;
            if ( !HIBYTE(word_140C4DE88) )
LABEL_31:
              v11 |= 0x8000000000000000uLL;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_31;
          }
        }
LABEL_8:
        *i = v11;
        if ( v13 )
          MiWritePteShadow((__int64)i, v11, v14);
        goto LABEL_10;
      }
      MiTransformValidPteInPlace(i, v5, v11, 3u);
    }
LABEL_10:
    v5 += 8LL;
  }
  MiUnmapPageInHyperSpaceWorker(v9, 0x11u, 0x80000000);
  return MiShadowTopLevelPxes(a1, v5 - 8LL * v6, v6);
}
