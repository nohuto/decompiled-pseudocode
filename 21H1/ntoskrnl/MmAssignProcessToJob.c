/*
 * XREFs of MmAssignProcessToJob @ 0x140671C70
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140671ACC (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402A2E58 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1402A305C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B4DD0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int8 v10; // di
  __int64 v11; // r8
  _DWORD *v12; // r9
  _OWORD v14[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v14, a4);
  }
  v8 = MiLockVadRange(a1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
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
  MiUnlockVadRange(a1, 0xFFFFFFFFFFFFFFFFuLL, v8, 0);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v14, 0LL, v11, v12);
  return v10;
}
