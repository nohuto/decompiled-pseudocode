/*
 * XREFs of MiDeletePteWsleCluster @ 0x14034E960
 * Callers:
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 * Callees:
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiDeletePteWsleCluster(__int64 *a1, _KPROCESS *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v8; // rdx
  _QWORD v10[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v8 = a1[1];
  if ( !v8 )
    return 0LL;
  WORD2(v10[0]) = 0;
  v10[2] = 0LL;
  v10[3] = 0LL;
  LODWORD(v10[0]) = 1;
  LODWORD(v10[1]) = 20;
  MiInsertTbFlushEntry((__int64)v10, v8 << 25 >> 16, a1[2], 0);
  MiTerminateWsleCluster(a1);
  return MiDeletePteList((__int64)v10, a2, a3, a4, 0);
}
