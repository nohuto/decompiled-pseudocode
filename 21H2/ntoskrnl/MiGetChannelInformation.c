/*
 * XREFs of MiGetChannelInformation @ 0x14067D1AC
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x14067CEFC (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x14077DE54 (MmGetChannelInformation.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x1402747D0 (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402749A0 (MiLockDynamicMemoryExclusive.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rbp
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // r13
  unsigned int v14; // ecx
  unsigned __int8 *v15; // rdx
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  int v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v8 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v8 + 4296, 0LL);
  v9 = MmNumberOfChannels;
  v10 = 0;
  v17 = MmNumberOfChannels;
  if ( MmNumberOfChannels )
  {
    v11 = a3 + 4;
    v12 = (_QWORD *)(v8 + 4144);
    do
    {
      *(_DWORD *)(v11 - 4) = v10;
      if ( (*(_DWORD *)(v8 + 4280) & 1) != 0 )
      {
        v14 = 0;
        v15 = (unsigned __int8 *)(v8 + 4313);
        while ( *v15 != v10 )
        {
          ++v14;
          ++v15;
          if ( v14 >= v9 )
            goto LABEL_5;
        }
        *(_DWORD *)v11 = v14;
      }
      else
      {
        *(_DWORD *)v11 = -1;
      }
LABEL_5:
      *(_QWORD *)(v11 + 4) = *v12;
      MiGetNodeChannelPageCounts(a1, a2, v10++, &v16, &v18, &v19);
      v9 = v17;
      ++v12;
      *(_QWORD *)(v11 + 12) = v16;
      *(_QWORD *)(v11 + 20) = v18;
      *(_QWORD *)(v11 + 28) = v19;
      v11 += 40LL;
    }
    while ( v10 < v9 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 4296), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 4296));
  KeAbPostRelease(v8 + 4296);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
