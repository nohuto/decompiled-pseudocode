/*
 * XREFs of MiZeroPageWorkMapping @ 0x14031A67C
 * Callers:
 *     MiPageListCollision @ 0x14031869C (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14054A9D8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiVaIsUltra @ 0x14033FF30 (MiVaIsUltra.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  _KPROCESS *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  int v9; // r12d
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 j; // rbp
  BOOL v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 i; // rcx
  __int64 v19; // r14
  _QWORD v20[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  memset(v20, 0, 0xB8uLL);
  LODWORD(v20[1]) = 20;
  v7 = 0LL;
  v20[3] = 0LL;
  v8 = 1LL;
  v9 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    MiInsertLargeTbFlushEntry(v20, (unsigned int)(2 - v4), a2);
    v8 = 1LL;
    v7 = 1LL;
  }
  v10 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( (unsigned int)MiVaIsUltra(i, v6, 1LL, 0xFFFFF68000000000uLL) )
    {
      v9 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v8 )
    {
      v9 = 0;
    }
  }
  if ( !v7 )
  {
    v11 = v10 << 25;
    v12 = (__int64)((a2 << 25) - (v10 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v7 = v8;
LABEL_7:
      MiInsertTbFlushEntry((__int64)v20, v12, v8, 0);
      goto LABEL_8;
    }
    v7 = MiLargePageSizes[v4];
    if ( (_DWORD)v4 == 2 )
    {
      v8 = MiLargePageSizes[v4];
      goto LABEL_7;
    }
    if ( (unsigned int)v4 <= (unsigned int)v8 )
    {
      v19 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry((__int64)v20, v12, v7, 0);
        v7 <<= 9;
        v12 = (__int64)((v12 << 25) - v11) >> 16;
        --v19;
      }
      while ( v19 );
    }
    v7 = 512LL;
  }
LABEL_8:
  for ( j = a2 + 8 * v7; a2 < j; a2 += 8LL )
  {
    v14 = 0;
    if ( MiPteInShadowRange(a2) )
      v14 = MiPteHasShadow(v15, v6, v16, v17) != 0;
    *(_QWORD *)a2 = 0LL;
    if ( v14 )
      MiWritePteShadow(a2, 0LL);
  }
  if ( v9 )
    MiFlushTbList((__int64)v20, v6);
}
