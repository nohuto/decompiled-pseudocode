/*
 * XREFs of MiFreePatchTableProtos @ 0x1408C9EC4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiUnlockPagedAddress @ 0x1405369F0 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePatchTableProtos(unsigned __int64 *P)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *v3; // rsi
  BOOL v4; // eax
  unsigned __int64 i; // rbp
  unsigned __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // r8
  bool v9; // zf

  v1 = 0LL;
  v3 = P;
  v4 = (dword_140C4CCB0 & 0xFFF) != 0;
  for ( i = ((unsigned int)dword_140C4CCB0 >> 12) + v4; i; --i )
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
        if ( !HIBYTE(word_140C4E008) )
        {
          v9 = (ZeroPte & 1) == 0;
          goto LABEL_9;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v9 = (ZeroPte & 1) == 0;
LABEL_9:
        if ( !v9 )
          v6 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v3 = v6;
    if ( v7 )
      MiWritePteShadow((__int64)v3, v6, v8);
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
