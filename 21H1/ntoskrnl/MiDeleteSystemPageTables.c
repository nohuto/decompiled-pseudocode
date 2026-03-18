/*
 * XREFs of MiDeleteSystemPageTables @ 0x14030FF24
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+24h] [rbp-DCh]
  int v13; // [rsp+2Ch] [rbp-D4h]
  __int64 v14; // [rsp+30h] [rbp-D0h]
  _QWORD v15[22]; // [rsp+40h] [rbp-C0h] BYREF

  v12 = 0LL;
  v13 = 0;
  memset(v15, 0, sizeof(v15));
  v11 = a2;
  BYTE2(v15[0]) = 4 * (a5 & 7);
  LOWORD(v15[0]) = 2055;
  v15[19] = MiDeleteSystemPageTable;
  v15[20] = MiDeleteSystemPageTableTail;
  v15[21] = &v11;
  v14 = a6;
  v15[4] = a3;
  v15[5] = a4;
  v15[3] = a1;
  BYTE6(v15[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables((__int64)v15);
  return MiUnlockWorkingSetShared(a1, BYTE6(v15[0]));
}
