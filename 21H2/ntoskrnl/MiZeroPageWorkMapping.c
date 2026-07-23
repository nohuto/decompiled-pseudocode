/*
 * XREFs of MiZeroPageWorkMapping @ 0x14021987C
 * Callers:
 *     MiPageListCollision @ 0x14021981C (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x1405500B8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiVaIsUltra @ 0x140263450 (MiVaIsUltra.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  int v10; // r12d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  _QWORD *j; // rbp
  BOOL v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 i; // rcx
  __int64 v19; // r14
  _QWORD v20[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  result = memset(v20, 0, 0xB8uLL);
  LODWORD(v20[1]) = 20;
  v8 = 0LL;
  v20[3] = 0LL;
  v9 = 1LL;
  v10 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    result = (void *)MiInsertLargeTbFlushEntry(v20, (unsigned int)(2 - v4), a2);
    v9 = 1LL;
    v8 = 1LL;
  }
  v11 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    result = (void *)MiVaIsUltra(i, v7, 1LL, 0xFFFFF68000000000uLL);
    if ( (_DWORD)result )
    {
      v10 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v9 )
    {
      v10 = 0;
    }
  }
  if ( !v8 )
  {
    v12 = v11 << 25;
    v13 = (__int64)((a2 << 25) - (v11 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v8 = v9;
LABEL_7:
      result = (void *)MiInsertTbFlushEntry(v20, v13, v9, 0LL);
      goto LABEL_8;
    }
    v8 = MiLargePageSizes[v4];
    if ( (_DWORD)v4 == 2 )
    {
      v9 = MiLargePageSizes[v4];
      goto LABEL_7;
    }
    if ( (unsigned int)v4 <= (unsigned int)v9 )
    {
      v19 = (unsigned int)(2 - v4);
      do
      {
        result = (void *)MiInsertTbFlushEntry(v20, v13, v8, 0LL);
        v8 <<= 9;
        v13 = (__int64)((v13 << 25) - v12) >> 16;
        --v19;
      }
      while ( v19 );
    }
    v8 = 512LL;
  }
LABEL_8:
  for ( j = (_QWORD *)(a2 + 8 * v8); a2 < (unsigned __int64)j; a2 += 8LL )
  {
    v15 = 0;
    result = (void *)MiPteInShadowRange(a2);
    if ( (_DWORD)result )
    {
      result = (void *)MiPteHasShadow(v17, v16);
      v15 = (_DWORD)result != 0;
    }
    *(_QWORD *)a2 = 0LL;
    if ( v15 )
      result = (void *)MiWritePteShadow(a2);
  }
  if ( v10 )
    return (void *)MiFlushTbList(v20);
  return result;
}
