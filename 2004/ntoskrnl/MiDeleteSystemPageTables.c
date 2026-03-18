/*
 * XREFs of MiDeleteSystemPageTables @ 0x14034D5B4
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  MiWalkPageTables((__int16 *)v15);
  return MiUnlockWorkingSetShared(a1, BYTE6(v15[0]));
}
