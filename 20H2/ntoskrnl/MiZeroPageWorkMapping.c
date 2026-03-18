/*
 * XREFs of MiZeroPageWorkMapping @ 0x140351698
 * Callers:
 *     MiPageListCollision @ 0x140350B60 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14054E3A8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiVaIsUltra @ 0x1402513B4 (MiVaIsUltra.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  __int64 v15; // r8
  unsigned __int64 i; // rcx
  __int64 v17; // r14
  _QWORD v18[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  memset(v18, 0, 0xB8uLL);
  LODWORD(v18[1]) = 20;
  v7 = 0LL;
  v18[3] = 0LL;
  v8 = 1LL;
  v9 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    MiInsertLargeTbFlushEntry((__int64)v18, 2 - v4, a2);
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
      MiInsertTbFlushEntry((__int64)v18, v12, v8, 0);
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
      v17 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry((__int64)v18, v12, v7, 0);
        v7 <<= 9;
        v12 = (__int64)((v12 << 25) - v11) >> 16;
        --v17;
      }
      while ( v17 );
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
      MiWritePteShadow(a2, 0LL, v15);
  }
  if ( v9 )
    MiFlushTbList((unsigned int *)v18, v6);
}
