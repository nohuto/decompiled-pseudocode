/*
 * XREFs of NtChangeThreadState @ 0x1409AEE00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsMultiResumeThread @ 0x1402EEA18 (PsMultiResumeThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsSuspendThread @ 0x1406E21F0 (PsSuspendThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtChangeThreadState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char PreviousMode; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v14; // rsi
  volatile signed __int64 *v15; // r15
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v18; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v18 = 0LL;
  if ( a3 <= 1 )
  {
    if ( a5 )
      return (unsigned int)-1073741820;
    if ( a4 )
      return (unsigned int)-1073741811;
  }
  if ( a6 )
    return (unsigned int)-1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 1, PspThreadStateChangeType, PreviousMode, 0x63547350u, &v18, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = 2;
    if ( a3 > 1 )
      v10 = 0;
    v11 = ObpReferenceObjectByHandleWithTag(
            a2,
            v10,
            (__int64)PsThreadType,
            PreviousMode,
            0x63547350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( *(PVOID *)v18 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v14 = v18;
        v15 = (volatile signed __int64 *)((char *)v18 + 8);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v18 + 8, 0LL);
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            if ( v14[4] )
            {
              v8 = PsMultiResumeThread((__int64)Object, 0LL, 1u);
              if ( v8 >= 0 )
                --v14[4];
            }
            else
            {
              v8 = -1073741811;
            }
          }
        }
        else if ( v14[4] == 0x7FFFFFFF )
        {
          v8 = -1073741750;
        }
        else
        {
          v8 = PsSuspendThread((__int64)Object, 0LL);
          if ( v8 >= 0 )
            ++v14[4];
        }
        if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v15);
        KeAbPostRelease((ULONG_PTR)v15);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        v12 = Object;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x63547350u);
  }
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x63547350u);
  return (unsigned int)v8;
}
