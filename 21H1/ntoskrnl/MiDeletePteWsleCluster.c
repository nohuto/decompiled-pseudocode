/*
 * XREFs of MiDeletePteWsleCluster @ 0x140310EB8
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiDeletePteWsleCluster(__int64 a1, _KPROCESS *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v8; // rdx
  _QWORD v10[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    return 0LL;
  WORD2(v10[0]) = 0;
  v10[2] = 0LL;
  v10[3] = 0LL;
  LODWORD(v10[0]) = 1;
  LODWORD(v10[1]) = 20;
  MiInsertTbFlushEntry((__int64)v10, v8 << 25 >> 16, *(_QWORD *)(a1 + 16), 0);
  MiTerminateWsleCluster(a1);
  return MiDeletePteList((__int64)v10, a2, a3, a4, 0);
}
