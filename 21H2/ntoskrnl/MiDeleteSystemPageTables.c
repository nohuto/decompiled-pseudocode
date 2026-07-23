/*
 * XREFs of MiDeleteSystemPageTables @ 0x1403084AC
 * Callers:
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+24h] [rbp-DCh]
  int v16; // [rsp+2Ch] [rbp-D4h]
  __int64 v17; // [rsp+30h] [rbp-D0h]
  _QWORD v18[22]; // [rsp+40h] [rbp-C0h] BYREF

  v15 = 0LL;
  v16 = 0;
  memset(v18, 0, sizeof(v18));
  v14 = a2;
  BYTE2(v18[0]) = 4 * (a5 & 7);
  LOWORD(v18[0]) = 2055;
  v18[19] = MiDeleteSystemPageTable;
  v18[20] = MiDeleteSystemPageTableTail;
  v18[21] = &v14;
  v17 = a6;
  v18[4] = a3;
  v18[5] = a4;
  v18[3] = a1;
  BYTE6(v18[0]) = MiLockWorkingSetShared(a1, v10, v11, v12);
  MiWalkPageTables((__int64)v18);
  return MiUnlockWorkingSetShared(a1, BYTE6(v18[0]));
}
