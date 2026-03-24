/*
 * XREFs of MiZeroPageWorkMapping @ 0x14029A678
 * Callers:
 *     MiPageListCollision @ 0x14029A618 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14054FE78 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiVaIsUltra @ 0x1402754B0 (MiVaIsUltra.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 i; // rcx
  __int64 v20; // r14
  _QWORD v21[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  result = memset(v21, 0, 0xB8uLL);
  LODWORD(v21[1]) = 20;
  v8 = 0LL;
  v21[3] = 0LL;
  v9 = 1LL;
  v10 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    result = (void *)MiInsertLargeTbFlushEntry(v21, (unsigned int)(2 - v4), a2);
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
    result = (void *)MiVaIsUltra(i);
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
      result = (void *)MiInsertTbFlushEntry(v21, v13, v9, 0LL);
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
      v20 = (unsigned int)(2 - v4);
      do
      {
        result = (void *)MiInsertTbFlushEntry(v21, v13, v8, 0LL);
        v8 <<= 9;
        v13 = (__int64)((v13 << 25) - v12) >> 16;
        --v20;
      }
      while ( v20 );
    }
    v8 = 512LL;
  }
LABEL_8:
  for ( j = (_QWORD *)(a2 + 8 * v8); a2 < (unsigned __int64)j; a2 += 8LL )
  {
    v15 = 0;
    result = (void *)MiPteInShadowRange(a2, v7);
    if ( (_DWORD)result )
    {
      result = (void *)MiPteHasShadow(v16, v7, v17, v18);
      v15 = (_DWORD)result != 0;
    }
    *(_QWORD *)a2 = 0LL;
    if ( v15 )
      result = (void *)MiWritePteShadow(a2, 0LL);
  }
  if ( v10 )
    return (void *)MiFlushTbList(v21);
  return result;
}
