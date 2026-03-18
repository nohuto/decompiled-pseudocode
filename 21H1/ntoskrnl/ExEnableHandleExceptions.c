/*
 * XREFs of ExEnableHandleExceptions @ 0x1406E446C
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1406F5FD0 (PspApplyMitigationOptions.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rcx
  char v7; // cl
  bool v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v13 = *(_DWORD *)(v6 + 8);
    if ( (v13 & 8) == 0 )
    {
      if ( a2 )
        *(_DWORD *)(v6 + 8) = v13 | 8;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 44);
    if ( (v7 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 44) = v7 & 0xFD | (a2 != 0 ? 2 : 0);
LABEL_4:
      v8 = 1;
      goto LABEL_5;
    }
  }
  v8 = a2 != 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
  return v8;
}
