/*
 * XREFs of MiFlushValidPteFromTb @ 0x140378EF0
 * Callers:
 *     MiTransformValidPteInPlace @ 0x140378E4C (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140301C90 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiRealVaToFlushType @ 0x140378F9C (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  MiFlushTbList((unsigned int *)v8, v7);
}
