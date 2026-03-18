/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x1403BA47C
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PopPluginRegisterDevice @ 0x140568394 (PopPluginRegisterDevice.c)
 *     PopPepRegisterDevice @ 0x14079D490 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, int a4)
{
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  ULONG_PTR *i; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v9 = PopPluginRegisterDevice(a1, v15, (__int64)&v16);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v9 = PopPluginRegisterDevice((ULONG_PTR)i, v15, (__int64)&v16);
      if ( v9 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  if ( v9 )
  {
    v9 = 2;
    *(_QWORD *)(a3 + 72) = v16;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, a4, v9, a3 + 56);
}
