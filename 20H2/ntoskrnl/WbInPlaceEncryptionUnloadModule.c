/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x14065C010
 * Callers:
 *     WbProcessModuleUnload @ 0x14065BF28 (WbProcessModuleUnload.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_1405D4314 @ 0x1405D4314 (sub_1405D4314.c)
 *     sub_14065D1C4 @ 0x14065D1C4 (sub_14065D1C4.c)
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
  __int64 v12; // rbp

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
    v12 = *(_QWORD *)(i * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152));
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 32) == a2 )
      {
        v3 = sub_14065D1C4((int)a1 + 136, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_1405D4314((volatile signed __int64 *)v12);
          --i;
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
