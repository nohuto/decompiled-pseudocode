/*
 * XREFs of MiFlushValidPteFromTb @ 0x140376F60
 * Callers:
 *     MiTransformValidPteInPlace @ 0x140376EBC (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14032E450 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiRealVaToFlushType @ 0x14037700C (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
