/*
 * XREFs of EtwQueryProcessTelemetryCoverage @ 0x140934F1C
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935928 (EtwpCoverageUserIsAdmin.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryCoverage(_KPROCESS *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 *v10; // r15
  __int64 *i; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 *j; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v22; // [rsp+24h] [rbp-44h]

  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    if ( EtwpCoverageContext )
    {
      if ( (unsigned __int8)EtwpCoverageUserIsAdmin() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
        EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
        v8 = EtwpCoverageContext;
        v9 = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 16LL);
        v10 = (__int64 *)(EtwpCoverageContext + 48);
        for ( i = *(__int64 **)(EtwpCoverageContext + 48); i != v10; i = (__int64 *)*i )
          v9 = *((_DWORD *)i + 6) - (_DWORD)i + v9 - 40;
        if ( a4 )
          *a4 = v9;
        v12 = *(_DWORD **)(v8 + 16);
        v13 = v12[4];
        if ( a3 < v13 )
          v13 = a3;
        if ( v13 )
        {
          v14 = v13;
          memmove(a2, v12, v13);
          a2 += v14;
        }
        if ( a3 < v9 )
        {
          v22 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v10; j != v10; j = (__int64 *)*j )
          {
            v16 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v17 = v16;
              memmove(a2, j + 5, v16);
              a2 += v17;
            }
          }
          v22 = 0;
        }
      }
      else
      {
        v22 = -1073741790;
      }
    }
    else
    {
      v22 = -1073741641;
    }
  }
  else
  {
    v22 = -1073741637;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  return v22;
}
