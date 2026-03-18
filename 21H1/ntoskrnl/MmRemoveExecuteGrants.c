/*
 * XREFs of MmRemoveExecuteGrants @ 0x14037BBF0
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  _KPROCESS *v1; // rdx
  _QWORD v2[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v3[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v3, 0, 0xB8uLL);
  memset(v2, 0, sizeof(v2));
  Process = KeGetCurrentThread()->ApcState.Process;
  LOWORD(v2[0]) = -32762;
  Process = (_KPROCESS *)((char *)Process + 1664);
  v2[3] = Process;
  v2[21] = v3;
  LODWORD(v3[0]) = 1;
  v2[19] = MiRevokeExecutePte;
  v2[20] = HalSystemVectorDispatchEntry;
  v2[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v3[0]) = 0;
  v3[2] = 0LL;
  v3[3] = 0LL;
  LODWORD(v3[1]) = 20;
  BYTE6(v2[0]) = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((__int64)v2);
  MiUnlockWorkingSetShared((__int64)Process, BYTE6(v2[0]));
  MiFlushTbList((__int64)v3, v1);
}
