/*
 * XREFs of MiReplicatePfnDatabaseMappings @ 0x14052940C
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402F26B0 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall MiReplicatePfnDatabaseMappings(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _KPROCESS *v5; // rdx
  _QWORD v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v6, 0, 0xB8uLL);
  v4 = 3LL;
  do
  {
    a1 = (__int64)(a1 << 25) >> 16;
    a2 = (__int64)(a2 << 25) >> 16;
    --v4;
  }
  while ( v4 );
  MiReplicatePteChange(a1, a2);
  v6[3] = 0LL;
  LODWORD(v6[1]) = 20;
  while ( a1 <= a2 )
  {
    MiInsertRecursiveTbFlushEntries((__int64)v6, 3, a1);
    a1 += 8LL;
  }
  MiFlushTbList((__int64)v6, v5);
}
