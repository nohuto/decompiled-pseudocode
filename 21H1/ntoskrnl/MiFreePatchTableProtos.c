/*
 * XREFs of MiFreePatchTableProtos @ 0x1408C5574
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUnlockPagedAddress @ 0x140530ED0 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  v4 = (dword_140C4CBF0 & 0xFFF) != 0;
  for ( i = ((unsigned int)dword_140C4CBF0 >> 12) + v4; i; --i )
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
        if ( !HIBYTE(word_140C4DF48) )
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
