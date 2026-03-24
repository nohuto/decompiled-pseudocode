/*
 * XREFs of MiDeletePteWsleCluster @ 0x1402C0C2C
 * Callers:
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 * Callees:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiDeletePteWsleCluster(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
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
  return MiDeletePteList((__int64)v10, a2, a3, a4, 0);
}
