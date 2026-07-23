/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x140945A10
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14094224C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampContextAddAddresses @ 0x140942EC0 (EtwpCovSampContextAddAddresses.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x140945CC4 (EtwpCovSampProcessUpperBoundModule.c)
 */

__int64 __fastcall EtwpCovSampProcessMapAddresses(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r15
  __int64 v9; // rdi
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // r12
  unsigned __int64 *v16; // r13
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  _QWORD *v21; // rcx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rax
  int v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]
  unsigned int v29; // [rsp+70h] [rbp+8h]

  v7 = a7;
  v9 = a2;
  v11 = MEMORY[0xFFFFF78000000320];
  *a7 = 0;
  v27 = v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( v9 != *(_QWORD *)a1 || !a6 )
    goto LABEL_22;
  v14 = 0LL;
  v15 = 0LL;
  v29 = 0;
  v16 = 0LL;
  v28 = 0LL;
  if ( !a4 )
    goto LABEL_21;
  v17 = a3;
  while ( 1 )
  {
    v18 = *v17;
    v19 = 0LL;
    if ( v16 )
    {
      if ( v18 < v14 || v18 >= *v16 )
        v16 = 0LL;
      else
        v19 = v16[1];
      if ( v19 )
        break;
    }
    v20 = EtwpCovSampProcessUpperBoundModule(a1, *v17);
    if ( v20 >= *(_DWORD *)(a1 + 32) )
    {
      v14 = v28;
    }
    else
    {
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v20);
      v19 = v21[1];
      v14 = *v21 - *(_QWORD *)(v19 + 40);
      v28 = v14;
      if ( v18 >= v14 )
      {
        v16 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16LL * v20);
        break;
      }
    }
LABEL_19:
    v17 = a3 + 1;
    ++v29;
    ++a3;
    if ( v29 >= a4 )
      goto LABEL_20;
  }
  v22 = *(_DWORD *)(v19 + 132) == 0;
  *(_DWORD *)(v19 + 136) = v27;
  if ( v22 )
    _InterlockedExchange((volatile __int32 *)(v19 + 132), 1);
  v23 = *(_DWORD *)(v19 + 124);
  *(_DWORD *)(a5 + 8 * v15 + 4) = v18 - v14;
  *(_DWORD *)(a5 + 8 * v15) = v23;
  v15 = (unsigned int)(v15 + 1);
  if ( (unsigned int)v15 < a6 )
    goto LABEL_19;
LABEL_20:
  v9 = a2;
  v13 = (volatile signed __int64 *)(a1 + 8);
  v7 = a7;
LABEL_21:
  *v7 = v15;
LABEL_22:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
  }
  if ( a1 == v9 + 736 )
  {
    v24 = 624LL;
    v25 = (volatile signed __int32 *)(v9 + 620);
  }
  else
  {
    v24 = 616LL;
    v25 = (volatile signed __int32 *)(v9 + 612);
  }
  _InterlockedExchangeAdd(v25, a4);
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + v24), *v7);
}
