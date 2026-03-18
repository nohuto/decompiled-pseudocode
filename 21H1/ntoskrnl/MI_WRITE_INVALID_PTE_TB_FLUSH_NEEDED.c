/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402F3DC0
 * Callers:
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402F3E4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx

  v4 = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow() )
  {
    LOBYTE(v4) = v4 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v4) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v4 & 0x20) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DF48) && (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
        *a1 = a2;
        MiWritePteShadow((__int64)a1, a2);
        return 1LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (a2 & 1) != 0 )
        a2 |= 0x8000000000000000uLL;
    }
    *a1 = a2;
    return 1LL;
  }
  return (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) != 0;
}
