/*
 * XREFs of WbGetWarbirdProcess @ 0x14065F2F4
 * Callers:
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_14065D248 @ 0x14065D248 (sub_14065D248.c)
 *     sub_14065F2BC @ 0x14065F2BC (sub_14065F2BC.c)
 *     sub_14065F4CC @ 0x14065F4CC (sub_14065F4CC.c)
 *     WbCreateWarbirdProcess @ 0x1406E2A94 (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  signed __int8 v14; // cf
  __int64 v15; // rdi
  _QWORD *v16; // r14
  char v17; // si
  _QWORD *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140C53C38, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53C38, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53C38, v8, (ULONG_PTR)&qword_140C53C38);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14065F4CC(a1, &v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53C38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53C38);
  KeAbPostRelease((ULONG_PTR)&qword_140C53C38);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_24;
    v9 = WbCreateWarbirdProcess(a1, &v18);
    if ( v9 < 0 )
      goto LABEL_24;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_140C53C38, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53C38, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53C38, v12, (ULONG_PTR)&qword_140C53C38);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v18;
    v9 = sub_14065D248((__int64)&qword_140C53C10, (__int64)v18, v13, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53C38, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53C38);
    KeAbPostRelease((ULONG_PTR)&qword_140C53C38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_24:
    v3 = v18;
    goto LABEL_11;
  }
  *a3 = v18;
LABEL_11:
  sub_14065F2BC((__int64)v3);
  return (unsigned int)v9;
}
