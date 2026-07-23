/*
 * XREFs of ExEnableHandleExceptions @ 0x140618C5C
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406AFCFC (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
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
