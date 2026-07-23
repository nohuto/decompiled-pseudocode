/*
 * XREFs of ExRegisterExtension @ 0x14079DA00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpFindHost @ 0x14079DD78 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140956CBC (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v6; // rdi
  __int64 Host; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // ecx
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // rsi
  _RTL_BALANCED_NODE *v15; // rax
  _RTL_BALANCED_NODE *v16; // rbp
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  PVOID v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD); // rax
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) && a3[2] )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v6, (ULONG_PTR)&ExpHostListLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( !Host )
    return 3221226021LL;
  v11 = a3[2];
  if ( (unsigned __int16)v11 < *(_WORD *)(Host + 28) )
  {
    v26 = -1073741811;
LABEL_40:
    ExpDereferenceHost(Host);
    return v26;
  }
  v12 = 0;
  if ( a3[2] )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v12) )
    {
      if ( ++v12 >= v11 )
        goto LABEL_14;
    }
    v26 = -1073741790;
    goto LABEL_40;
  }
LABEL_14:
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = (volatile signed __int64 *)(Host + 72);
  v15 = KeAbPreAcquire(Host + 72, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v15, Host + 72);
  if ( v16 )
    BYTE2(v16[1].Left) |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Host + 72);
    KeAbPostRelease(Host + 72);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
    v26 = -1073741771;
    goto LABEL_40;
  }
  v17 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v17 )
    v17(0LL, *(_QWORD *)(Host + 56));
  v18 = (PVOID)*((_QWORD *)a3 + 1);
  if ( !v18 )
    v18 = MmBadPointer;
  *(_QWORD *)(Host + 80) = v18;
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v19 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v19 )
    v19(1LL, *(_QWORD *)(Host + 56));
  v20 = _InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
    ExfTryToWakePushLock(Host + 72);
  KeAbPostRelease(Host + 72);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
  v24 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v24 )
    *v24 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
