/*
 * XREFs of MiDeletePteWsleCluster @ 0x14023F0C8
 * Callers:
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 * Callees:
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiDeletePteWsleCluster(__int64 a1, int a2, int a3, int a4)
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
  MiInsertTbFlushEntry(v10, v8 << 25 >> 16, *(_QWORD *)(a1 + 16), 0LL);
  MiTerminateWsleCluster(a1);
  return MiDeletePteList((unsigned int)v10, a2, a3, a4, 0);
}
