/*
 * XREFs of MmAssignProcessToJob @ 0x14062DE50
 * Callers:
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14062E4F0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14022E3A8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14022E5AC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14069F850 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  _OWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v7 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v7 || (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v8 = *(_QWORD *)(a1 + 1608);
    *(_QWORD *)(a1 + 1256) = *(_QWORD *)(a1 + 1296);
    v9 = PspChangeJobMemoryUsageByProcess(a3 | 3u, v8, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v9 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v7, 0LL);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v11, 0);
  return v9;
}
