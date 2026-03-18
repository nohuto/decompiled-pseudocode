/*
 * XREFs of MmAssignProcessToJob @ 0x140682D84
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14030B538 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14030B6D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FECE0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int8 v10; // di
  _OWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v12, a4);
  }
  v8 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v8 || (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v9 = *(_QWORD *)(a1 + 1608);
    *(_QWORD *)(a1 + 1256) = *(_QWORD *)(a1 + 1296);
    v10 = PspChangeJobMemoryUsageByProcess(a3 | 3u, v9, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v10 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v8, 0LL);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v12, 0LL);
  return v10;
}
