/*
 * XREFs of MmRemoveExecuteGrants @ 0x140258CE0
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // rdx
  _QWORD v3[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v4[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v4, 0, 0xB8uLL);
  memset(v3, 0, sizeof(v3));
  Process = KeGetCurrentThread()->ApcState.Process;
  v3[21] = v4;
  Process = (_KPROCESS *)((char *)Process + 1664);
  LODWORD(v3[0]) = 32774;
  v3[19] = MiRevokeExecutePte;
  v3[3] = Process;
  v3[20] = HalSystemVectorDispatchEntry;
  v3[5] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v4[0]) = 0;
  v4[2] = 0LL;
  v4[3] = 0LL;
  LODWORD(v4[0]) = 1;
  LODWORD(v4[1]) = 20;
  HIBYTE(v3[0]) = MiLockWorkingSetShared(Process);
  MiWalkPageTables(v3);
  LOBYTE(v1) = HIBYTE(v3[0]);
  MiUnlockWorkingSetShared(Process, v1);
  return MiFlushTbList(v4);
}
