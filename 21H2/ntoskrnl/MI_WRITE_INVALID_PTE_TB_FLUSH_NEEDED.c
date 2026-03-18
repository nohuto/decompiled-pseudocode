/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140274148
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402746C0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  int v7; // ebp
  unsigned int v8; // ecx
  int v10; // edi
  bool v11; // zf

  v3 = *a1;
  v7 = a3 & 2;
  if ( (a3 & 2) == 0 && (unsigned int)MiPteInShadowRange(a1) && (unsigned int)MiPteHasShadow() )
    goto LABEL_15;
  v8 = ((unsigned int)MiFlags >> 27) & 3;
  if ( v8 > 1 )
  {
    if ( (MiFlags & 0x4000000) != 0 )
      _mm_lfence();
  }
  else
  {
    if ( !v8 )
      goto LABEL_15;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)a1 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v3 & 0x80u) == 0LL )
    {
      LOBYTE(v3) = 32;
    }
  }
  if ( (v3 & 0x20) != 0 )
  {
LABEL_15:
    if ( (a3 & 4) != 0 )
      return 1LL;
    if ( v7 )
    {
      *a1 = a2;
      return 1LL;
    }
    v10 = 0;
    if ( (unsigned int)MiPteInShadowRange(a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v11 = (a2 & 1) == 0;
          goto LABEL_24;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v11 = (a2 & 1) == 0;
LABEL_24:
        if ( !v11 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    *a1 = a2;
    if ( v10 )
      MiWritePteShadow((__int64)a1, a2);
    return 1LL;
  }
  return (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) != 0;
}
