/*
 * XREFs of NtChangeProcessState @ 0x1409AEC10
 * Callers:
 *     <none>
 * Callees:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtChangeProcessState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char PreviousMode; // bl
  int v10; // eax
  PVOID v11; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // rdi
  volatile signed __int64 *v14; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v17 = 0LL;
  if ( a3 > 1 )
    return (unsigned int)-1073741821;
  if ( a5 )
    return (unsigned int)-1073741820;
  if ( a4 || a6 )
    return (unsigned int)-1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 1, PspProcessStateChangeType, PreviousMode, 0x63507350u, &v17, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = ObpReferenceObjectByHandleWithTag(
            a2,
            2048,
            (__int64)PsProcessType,
            PreviousMode,
            0x63507350u,
            &Object,
            0LL,
            0LL);
    v11 = Object;
    v8 = v10;
    if ( v10 < 0 )
      goto LABEL_25;
    if ( *(PVOID *)v17 != Object )
    {
      v8 = -1073741811;
LABEL_25:
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x63507350u);
      goto LABEL_27;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = v17;
    v14 = (volatile signed __int64 *)((char *)v17 + 8);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v17 + 8, 0LL);
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( !v13[4] )
        {
          v8 = -1073741811;
LABEL_22:
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14);
          KeAbPostRelease((ULONG_PTR)v14);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v11 = Object;
          goto LABEL_25;
        }
        PsThawMultiProcess((ULONG_PTR)Object, 0LL, 1u);
        --v13[4];
      }
    }
    else
    {
      if ( v13[4] == -1 )
      {
        v8 = -1073741750;
        goto LABEL_22;
      }
      if ( !PsFreezeProcess((ULONG_PTR)Object, 0) )
      {
        v8 = -1073741558;
        goto LABEL_22;
      }
      ++v13[4];
    }
    v8 = 0;
    goto LABEL_22;
  }
LABEL_27:
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x63507350u);
  return (unsigned int)v8;
}
