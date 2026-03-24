/*
 * XREFs of MiFlushValidPteFromTb @ 0x1403790FC
 * Callers:
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiInsertRecursiveTbFlushEntries @ 0x1402974A8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiRealVaToFlushType @ 0x1403791A8 (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, unsigned int a3)
{
  unsigned __int64 LeafVa; // rax
  _KPROCESS *v7; // rdx
  _QWORD v8[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v8, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a1);
  LODWORD(v8[0]) = MiRealVaToFlushType(LeafVa);
  LODWORD(v8[1]) = 20;
  WORD2(v8[0]) = 0;
  v8[2] = 0LL;
  v8[3] = 0LL;
  if ( a2 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v8, a3, a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v8, a3, a1);
  MiFlushTbList((__int64)v8, v7);
}
