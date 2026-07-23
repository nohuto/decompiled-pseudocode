/*
 * XREFs of MiClearSystemAccessBits @ 0x1403BA2AC
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  _KPROCESS *v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  signed __int64 v9; // rax
  __int64 i; // rdi
  _QWORD v11[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v11, 0, 0xB8uLL);
  v11[3] = 0LL;
  LODWORD(v11[1]) = 20;
  v7 = (__int64)(a1 << 25) >> 16;
  if ( a2 )
  {
    v8 = a2;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(a1);
      if ( (v9 & 0x20) != 0 )
        _InterlockedCompareExchange64((volatile signed __int64 *)a1, v9 & 0xFFFFFFFFFFFFFFDFuLL, v9);
      a1 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  if ( a3 )
  {
    for ( i = a1 - 8 * a2; a2; --a2 )
    {
      MiInsertLargeTbFlushEntry((__int64)v11, a3, i);
      i += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry((__int64)v11, v7, a2, 0);
  }
  MiFlushTbList((__int64)v11, v6);
}
