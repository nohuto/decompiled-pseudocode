/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x1406D54B0
 * Callers:
 *     WbProcessModuleUnload @ 0x1406D53C8 (WbProcessModuleUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_1405CCAA0 @ 0x1405CCAA0 (sub_1405CCAA0.c)
 *     sub_1406D5844 @ 0x1406D5844 (sub_1406D5844.c)
 */

__int64 __fastcall WbInPlaceEncryptionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 176);
  v7 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v15 = *(_QWORD *)(i * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152));
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 32) == a2 )
      {
        v3 = sub_1406D5844((int)a1 + 136, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_1405CCAA0((volatile signed __int64 *)v15);
          --i;
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return (unsigned int)v3;
}
