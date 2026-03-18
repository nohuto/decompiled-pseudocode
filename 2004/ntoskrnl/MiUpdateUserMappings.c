/*
 * XREFs of MiUpdateUserMappings @ 0x140991DE8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiRevertQuasiPte @ 0x140360E20 (MiRevertQuasiPte.c)
 *     MiMakeQuasiPte @ 0x140360E34 (MiMakeQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  __int64 *i; // rdi
  __int64 v1; // rax
  unsigned __int64 result; // rax
  unsigned __int64 QuasiPte; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // r8
  bool v7; // zf

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
        if ( !HIBYTE(word_140C4DE08) )
        {
          v7 = (v4 & 1) == 0;
LABEL_11:
          if ( !v7 )
            v4 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v7 = (v4 & 1) == 0;
        goto LABEL_11;
      }
    }
    *i = v4;
    if ( v5 )
      MiWritePteShadow((__int64)i, v4, v6);
LABEL_4:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
