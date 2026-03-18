/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403309C0
 * Callers:
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140330A4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // r8

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
        if ( !HIBYTE(word_140C4DE08) && (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
        *a1 = a2;
        MiWritePteShadow((__int64)a1, a2, v6);
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
