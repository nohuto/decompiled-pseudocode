/*
 * XREFs of MiDeleteSystemPageTables @ 0x14026E468
 * Callers:
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+24h] [rbp-DCh]
  int v14; // [rsp+2Ch] [rbp-D4h]
  __int64 v15; // [rsp+30h] [rbp-D0h]
  _QWORD v16[22]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0LL;
  v14 = 0;
  memset(v16, 0, sizeof(v16));
  v12 = a2;
  BYTE4(v16[0]) = 4 * (a5 & 7);
  v16[19] = MiDeleteSystemPageTable;
  v16[20] = MiDeleteSystemPageTableTail;
  v16[21] = &v12;
  v15 = a6;
  LODWORD(v16[0]) = 2055;
  v16[4] = a3;
  v16[5] = a4;
  v16[3] = a1;
  HIBYTE(v16[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables(v16);
  LOBYTE(v10) = HIBYTE(v16[0]);
  return MiUnlockWorkingSetShared(a1, v10);
}
