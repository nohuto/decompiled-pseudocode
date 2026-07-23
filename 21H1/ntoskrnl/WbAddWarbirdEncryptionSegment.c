/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x1405CC48C
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     sub_1405CCAA0 @ 0x1405CCAA0 (sub_1405CCAA0.c)
 *     sub_1405CCAD4 @ 0x1405CCAD4 (sub_1405CCAD4.c)
 *     sub_1405CCCFC @ 0x1405CCCFC (sub_1405CCCFC.c)
 *     sub_1406D6C54 @ 0x1406D6C54 (sub_1406D6C54.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // r8d
  int v13; // ebx
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  int v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  int v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v24 = 0;
  v21 = 0LL;
  v20 = 0;
  v23 = v3;
  v22 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(a1 + 176);
  v9 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = sub_1405CCAD4(a1, &v22, &v21, &v20);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_1406D6C54((int)a1 + 136, a2, v12, (unsigned int)&v22, 16, v20);
      if ( v13 >= 0 )
        v13 = sub_1405CCCFC(a2);
    }
  }
  else if ( a3 )
  {
    sub_1405CCCFC(v21);
    v21 = 0LL;
    *a3 = v19;
  }
  sub_1405CCAA0(v21);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  return (unsigned int)v13;
}
