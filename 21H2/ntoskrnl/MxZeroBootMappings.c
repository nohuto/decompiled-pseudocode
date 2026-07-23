/*
 * XREFs of MxZeroBootMappings @ 0x140A5867C
 * Callers:
 *     MiZeroBootMappings @ 0x140A5761C (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140A5867C (MxZeroBootMappings.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MxZeroBootMappings @ 0x140A5867C (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x140A587A4 (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // esi
  bool v10; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v14 = v6;
      v7 = v6;
      if ( v6 )
        break;
LABEL_4:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
    {
      if ( a3 > 1 )
        MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
      if ( MiPteInShadowRange((unsigned __int64)&v14)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF));
          v13 = v7 | 0x20;
          if ( (v12 & 0x20) == 0 )
            v13 = v7;
          v7 = v13;
          if ( (v12 & 0x42) != 0 )
            v7 = v13;
        }
      }
      MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFLL);
    }
    v8 = ZeroPte;
    v9 = 0;
    if ( !MiPteInShadowRange(v5) )
    {
LABEL_13:
      *(_QWORD *)v5 = v8;
      if ( v9 )
        MiWritePteShadow(v5, v8);
      goto LABEL_4;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_13;
      v10 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
      v10 = (ZeroPte & 1) == 0;
    }
    if ( !v10 )
      v8 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_13;
  }
}
