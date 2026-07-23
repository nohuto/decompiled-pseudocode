/*
 * XREFs of AlpcpCleanupProcessViews @ 0x14067DACC
 * Callers:
 *     LpcExitProcess @ 0x14067DA88 (LpcExitProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C36D0 (AlpcpForceUnlinkSecureView.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // r13
  volatile signed __int64 *v3; // rsi
  const void *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _QWORD *v14; // [rsp+60h] [rbp+8h]
  const void *v15; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (_QWORD *)(a1 + 2056);
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 2048);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 2048, 0LL);
  v14 = v2;
  while ( (_QWORD *)*v2 != v2 )
  {
    v7 = *v2 - 80LL;
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v4 == (const void *)v7 )
      v9 = v6;
    v5 = 0;
    if ( v4 == (const void *)v7 )
      v5 = v8;
    v10 = *v2 - 80LL;
    if ( v4 == (const void *)v7 )
      v10 = (__int64)v4;
    v15 = (const void *)v10;
    v11 = v7 & -(__int64)(AlpcpReferenceBlob(v7) != 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    if ( v9 )
    {
      v6 = v9;
      if ( v5 > 0x64 )
      {
        v13 = 0xFFFFF780000003B0uLL;
        v12 = MEMORY[0xFFFFF780000003B0];
        v2 = v14;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v9 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v15);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v5 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v13 = 0xFFFFF780000003B0uLL;
      v2 = v14;
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v11 )
    {
      AlpcpForceUnlinkSecureView(v11, v12, v13);
      AlpcpDereferenceBlobEx(v11);
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v4 = v15;
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
