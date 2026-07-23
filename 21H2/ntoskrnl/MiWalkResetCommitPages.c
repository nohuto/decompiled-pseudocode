/*
 * XREFs of MiWalkResetCommitPages @ 0x14052CD38
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v10; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v11[22]; // [rsp+30h] [rbp-69h] BYREF

  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11[21] = &v10;
  Process = (_KPROCESS *)((char *)Process + 1664);
  LOWORD(v11[0]) = 7;
  v11[19] = &MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v11[3] = Process;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v11[4] = v5 << 12;
  v11[5] = v6;
  BYTE6(v11[0]) = MiLockWorkingSetShared((__int64)Process, v6, v7, v8);
  MiWalkPageTables((__int64)v11);
  MiUnlockWorkingSetShared((__int64)Process, BYTE6(v11[0]));
  return v10;
}
