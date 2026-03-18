/*
 * XREFs of MiZeroPageWorkMapping @ 0x1403499BC
 * Callers:
 *     MiPageListCollision @ 0x1403479DC (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14054A388 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiVaIsUltra @ 0x140303130 (MiVaIsUltra.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  unsigned __int64 i; // rcx
  __int64 v16; // r14
  _QWORD v17[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  memset(v17, 0, 0xB8uLL);
  LODWORD(v17[1]) = 20;
  v7 = 0LL;
  v17[3] = 0LL;
  v8 = 1LL;
  v9 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    MiInsertLargeTbFlushEntry((__int64)v17, 2 - v4, a2);
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
    if ( MiVaIsUltra(i) )
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
      MiInsertTbFlushEntry((__int64)v17, v12, v8, 0);
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
      v16 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry((__int64)v17, v12, v7, 0);
        v7 <<= 9;
        v12 = (__int64)((v12 << 25) - v11) >> 16;
        --v16;
      }
      while ( v16 );
    }
    v7 = 512LL;
  }
LABEL_8:
  for ( j = a2 + 8 * v7; a2 < j; a2 += 8LL )
  {
    v14 = 0;
    if ( MiPteInShadowRange(a2) )
      v14 = MiPteHasShadow() != 0;
    *(_QWORD *)a2 = 0LL;
    if ( v14 )
      MiWritePteShadow(a2, 0LL);
  }
  if ( v9 )
    MiFlushTbList((__int64)v17, v6);
}
