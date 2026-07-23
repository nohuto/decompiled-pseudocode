/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x1405CC954
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405CC5BC @ 0x1405CC5BC (sub_1405CC5BC.c)
 *     sub_1405CCAA0 @ 0x1405CCAA0 (sub_1405CCAA0.c)
 *     sub_1405CCAD4 @ 0x1405CCAD4 (sub_1405CCAD4.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  char v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v17 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_1405CCAD4(a1, a2, &v19, &v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v9 == -1073741198 )
  {
    v15 = sub_1405CC5BC(a2, &v19);
    v13 = v19;
    v9 = v15;
    if ( v15 < 0 )
      goto LABEL_11;
    v9 = WbAddWarbirdEncryptionSegment(a1, v19, &v17);
    if ( v9 < 0 )
      goto LABEL_11;
    v16 = v17;
    if ( v17 )
    {
      sub_1405CCAA0(v13);
      v13 = v16;
    }
  }
  else
  {
    v13 = v19;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  if ( a3 )
  {
    *a3 = v13;
    v13 = 0LL;
  }
LABEL_11:
  sub_1405CCAA0(v13);
  sub_1405CCAA0(v17);
  return (unsigned int)v9;
}
