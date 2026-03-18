/*
 * XREFs of MiClearSystemAccessBits @ 0x1403C9494
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  signed __int64 v8; // rax
  __int64 i; // rdi
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v10[3] = 0LL;
  LODWORD(v10[1]) = 20;
  v6 = (__int64)(a1 << 25) >> 16;
  if ( a2 )
  {
    v7 = a2;
    do
    {
      v8 = MI_READ_PTE_LOCK_FREE(a1);
      if ( (v8 & 0x20) != 0 )
      {
        if ( (MiFlags & 0x4000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8);
      }
      a1 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
  {
    for ( i = a1 - 8 * a2; a2; --a2 )
    {
      MiInsertLargeTbFlushEntry((__int64)v10, a3, i);
      i += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry((__int64)v10, v6, a2, 0);
  }
  MiFlushTbList((__int64)v10);
}
