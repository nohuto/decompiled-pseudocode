/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x1405CD85C
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1405CDD24 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     sub_1405CDE70 @ 0x1405CDE70 (sub_1405CDE70.c)
 *     sub_1405CDEA4 @ 0x1405CDEA4 (sub_1405CDEA4.c)
 *     sub_1405CE0CC @ 0x1405CE0CC (sub_1405CE0CC.c)
 *     sub_1406DA264 @ 0x1406DA264 (sub_1406DA264.c)
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
  __int64 v16; // rdx
  int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v21 = 0;
  v18 = 0LL;
  v17 = 0;
  v20 = v3;
  v19 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(a1 + 176);
  v9 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = sub_1405CDEA4(a1, &v19, &v18, &v17);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_1406DA264((int)a1 + 136, a2, v12, (unsigned int)&v19, 16, v17);
      if ( v13 >= 0 )
        v13 = sub_1405CE0CC(a2);
    }
  }
  else if ( a3 )
  {
    sub_1405CE0CC(v18);
    v18 = 0LL;
    *a3 = v16;
  }
  sub_1405CDE70(v18);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
