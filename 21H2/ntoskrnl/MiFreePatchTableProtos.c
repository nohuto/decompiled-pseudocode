/*
 * XREFs of MiFreePatchTableProtos @ 0x1408CA024
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUnlockPagedAddress @ 0x140536C30 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePatchTableProtos(unsigned __int64 *P)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *v3; // rsi
  BOOL v4; // eax
  unsigned __int64 i; // rbp
  unsigned __int64 v6; // rbx
  int v7; // r15d
  bool v8; // zf

  v1 = 0LL;
  v3 = P;
  v4 = (dword_140C4CCF0 & 0xFFF) != 0;
  for ( i = ((unsigned int)dword_140C4CCF0 >> 12) + v4; i; --i )
  {
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v3) )
      break;
    v6 = ZeroPte;
    v7 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v7 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v8 = (ZeroPte & 1) == 0;
          goto LABEL_9;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v8 = (ZeroPte & 1) == 0;
LABEL_9:
        if ( !v8 )
          v6 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v3 = v6;
    if ( v7 )
      MiWritePteShadow((__int64)v3, v6);
    ++v3;
  }
  if ( 8 * i )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)&P[v1]);
      v1 += 512LL;
    }
    while ( v1 < i );
  }
  ExFreePoolWithTag(P, 0);
}
