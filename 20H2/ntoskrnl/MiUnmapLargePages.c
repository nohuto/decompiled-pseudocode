/*
 * XREFs of MiUnmapLargePages @ 0x140394E74
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiUnmapLargeDriver @ 0x1408DCF84 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
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
  __int64 v12; // r8
  bool v13; // zf

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
          if ( !HIBYTE(word_140C4DE88) )
          {
            v13 = (ZeroPte & 1) == 0;
            goto LABEL_14;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (ZeroPte & 1) == 0;
LABEL_14:
          if ( !v13 )
            v10 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v7 = v10;
      if ( v11 )
        MiWritePteShadow((__int64)v7, v10, v12);
      ++v7;
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3);
}
