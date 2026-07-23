/*
 * XREFs of WbGetWarbirdProcess @ 0x14065EEC0
 * Callers:
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_14065EE88 @ 0x14065EE88 (sub_14065EE88.c)
 *     sub_14065F098 @ 0x14065F098 (sub_14065F098.c)
 *     sub_1406D6C54 @ 0x1406D6C54 (sub_1406D6C54.c)
 *     WbCreateWarbirdProcess @ 0x1406ECC7C (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  signed __int8 v17; // cf
  __int64 v18; // rdi
  volatile signed __int64 *v19; // r14
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  volatile signed __int64 *v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140C53CB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53CB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53CB8, v8, (ULONG_PTR)&qword_140C53CB8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14065F098(a1, &v24);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53CB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53CB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53CB8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_24;
    v9 = WbCreateWarbirdProcess(a1, &v24);
    if ( v9 < 0 )
      goto LABEL_24;
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&qword_140C53CB8, 0LL, 0);
    v17 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53CB8, 0LL);
    v18 = v15;
    if ( v17 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53CB8, v15, (ULONG_PTR)&qword_140C53CB8);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v19 = v24;
    v9 = sub_1406D6C54((unsigned int)&qword_140C53C90, (_DWORD)v24, v16, *v24, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v19 + 29);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53CB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53CB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53CB8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_24:
    v3 = v24;
    goto LABEL_11;
  }
  *a3 = v24;
LABEL_11:
  sub_14065EE88(v3);
  return (unsigned int)v9;
}
