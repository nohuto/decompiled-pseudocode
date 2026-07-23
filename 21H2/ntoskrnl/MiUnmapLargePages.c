/*
 * XREFs of MiUnmapLargePages @ 0x140395434
 * Callers:
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiUnmapLargeDriver @ 0x1408DA8A4 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  unsigned __int64 v4; // rsi
  __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // rbx
  int v11; // r15d
  bool v12; // zf

  v3 = 13;
  v4 = a2;
  if ( a3 != 9 )
    v3 = a3;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = (unsigned __int64 *)(v6 + (a2 >> 21 << 12));
    v8 = v6 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    while ( (unsigned __int64)v7 < v8 )
    {
      if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v7) )
        break;
      v10 = ZeroPte;
      v11 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v7) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v11 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v12 = (ZeroPte & 1) == 0;
            goto LABEL_14;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v12 = (ZeroPte & 1) == 0;
LABEL_14:
          if ( !v12 )
            v10 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v7 = v10;
      if ( v11 )
        MiWritePteShadow((__int64)v7, v10);
      ++v7;
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3);
}
