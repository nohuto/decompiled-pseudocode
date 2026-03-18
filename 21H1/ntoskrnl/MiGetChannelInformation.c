/*
 * XREFs of MiGetChannelInformation @ 0x14066282C
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x14066257C (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x140768D14 (MmGetChannelInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x1402D4978 (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402D4B48 (MiLockDynamicMemoryExclusive.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rbp
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // ecx
  unsigned __int8 *v18; // rdx
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v8 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v8 + 4296, 0LL);
  v9 = MmNumberOfChannels;
  v10 = 0;
  v20 = MmNumberOfChannels;
  if ( MmNumberOfChannels )
  {
    v11 = a3 + 4;
    v12 = (_QWORD *)(v8 + 4144);
    do
    {
      *(_DWORD *)(v11 - 4) = v10;
      if ( (*(_DWORD *)(v8 + 4280) & 1) != 0 )
      {
        v17 = 0;
        v18 = (unsigned __int8 *)(v8 + 4313);
        while ( *v18 != v10 )
        {
          ++v17;
          ++v18;
          if ( v17 >= v9 )
            goto LABEL_5;
        }
        *(_DWORD *)v11 = v17;
      }
      else
      {
        *(_DWORD *)v11 = -1;
      }
LABEL_5:
      *(_QWORD *)(v11 + 4) = *v12;
      MiGetNodeChannelPageCounts(a1, a2, v10++, &v19, &v21, &v22);
      v9 = v20;
      ++v12;
      *(_QWORD *)(v11 + 12) = v19;
      *(_QWORD *)(v11 + 20) = v21;
      *(_QWORD *)(v11 + 28) = v22;
      v11 += 40LL;
    }
    while ( v10 < v9 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 4296), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 4296));
  KeAbPostRelease(v8 + 4296);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
