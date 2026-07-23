/*
 * XREFs of MmRemoveExecuteGrants @ 0x14037E870
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  _KPROCESS *v4; // rdx
  _QWORD v5[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v6, 0, 0xB8uLL);
  memset(v5, 0, sizeof(v5));
  Process = KeGetCurrentThread()->ApcState.Process;
  LOWORD(v5[0]) = -32762;
  Process = (_KPROCESS *)((char *)Process + 1664);
  v5[3] = Process;
  v5[21] = v6;
  LODWORD(v6[0]) = 1;
  v5[19] = MiRevokeExecutePte;
  v5[20] = HalSystemVectorDispatchEntry;
  v5[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v6[0]) = 0;
  v6[2] = 0LL;
  v6[3] = 0LL;
  LODWORD(v6[1]) = 20;
  BYTE6(v5[0]) = MiLockWorkingSetShared((__int64)Process, v1, v2, v3);
  MiWalkPageTables((__int64)v5);
  MiUnlockWorkingSetShared((__int64)Process, BYTE6(v5[0]));
  MiFlushTbList((__int64)v6, v4);
}
