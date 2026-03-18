/*
 * XREFs of MiUpdateUserMappings @ 0x140990EA8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiRevertQuasiPte @ 0x140323354 (MiRevertQuasiPte.c)
 *     MiMakeQuasiPte @ 0x140323368 (MiMakeQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  __int64 *i; // rdi
  __int64 v1; // rax
  unsigned __int64 result; // rax
  unsigned __int64 QuasiPte; // rax
  __int64 v4; // rbx
  int v5; // esi
  bool v6; // zf

  for ( i = (__int64 *)0xFFFFF6FB7DBED000LL; (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL; ++i )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( (v1 & 1) != 0 )
    {
      QuasiPte = MiMakeQuasiPte(v1);
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_4;
      QuasiPte = MiRevertQuasiPte(v1);
    }
    v4 = QuasiPte;
    v5 = 0;
    if ( MiPteInShadowRange((unsigned __int64)i) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v5 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v6 = (v4 & 1) == 0;
LABEL_11:
          if ( !v6 )
            v4 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v6 = (v4 & 1) == 0;
        goto LABEL_11;
      }
    }
    *i = v4;
    if ( v5 )
      MiWritePteShadow((__int64)i, v4);
LABEL_4:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
