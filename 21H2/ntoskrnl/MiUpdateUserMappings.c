/*
 * XREFs of MiUpdateUserMappings @ 0x140995E58
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiRevertQuasiPte @ 0x140252130 (MiRevertQuasiPte.c)
 *     MiMakeQuasiPte @ 0x140252144 (MiMakeQuasiPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
        if ( !HIBYTE(word_140C4E048) )
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
