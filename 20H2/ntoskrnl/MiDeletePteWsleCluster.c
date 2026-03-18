/*
 * XREFs of MiDeletePteWsleCluster @ 0x14031F1DC
 * Callers:
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  return MiDeletePteList((unsigned int *)v10, a2, a3, a4, 0);
}
