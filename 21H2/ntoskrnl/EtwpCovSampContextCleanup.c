/*
 * XREFs of EtwpCovSampContextCleanup @ 0x140943244
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x140946364 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1409449B4 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1409458D0 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *i; // r8
  _QWORD *v7; // r8
  _QWORD *j; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r10
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *k; // r8
  _QWORD *v14; // r8
  _QWORD *m; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  EtwpCovSampProcessCleanup(a1 + 736, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v3 = *(_QWORD **)(a1 + 688);
  v4 = v3;
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_7;
    v5 = (_QWORD *)*v4;
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
LABEL_7:
      for ( i = v3 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 688) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 684) >> 5) )
        {
          v5 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v4 = (_QWORD *)*i;
      v3 = i;
      v5 = (_QWORD *)*i;
    }
    else
    {
      v4 = v5;
    }
LABEL_12:
    if ( !v5 )
      break;
    v7 = v4;
    for ( j = v3; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v4 )
      {
        v9 = *v4;
        v4 = j;
        *j = v9;
        --*(_DWORD *)(a1 + 680);
        goto LABEL_20;
      }
    }
    v7 = 0LL;
LABEL_20:
    *v7 = 0LL;
  }
  v10 = *(_QWORD **)(a1 + 704);
  v11 = v10;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_27;
    v12 = (_QWORD *)*v11;
    if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v12 = (_QWORD *)*v11;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
LABEL_27:
      for ( k = v10 + 1; ; ++k )
      {
        if ( (unsigned __int64)k >= *(_QWORD *)(a1 + 704) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 700) >> 5) )
        {
          v12 = 0LL;
          goto LABEL_32;
        }
        if ( (*k & 1) == 0 )
          break;
      }
      v11 = (_QWORD *)*k;
      v10 = k;
      v12 = (_QWORD *)*k;
    }
    else
    {
      v11 = v12;
    }
LABEL_32:
    if ( !v12 )
      break;
    v14 = v11;
    for ( m = v10; (*m & 1) == 0; m = (_QWORD *)*m )
    {
      if ( (_QWORD *)*m == v11 )
      {
        v16 = *v11;
        v11 = m;
        *m = v16;
        --*(_DWORD *)(a1 + 696);
        goto LABEL_40;
      }
    }
    v14 = 0LL;
LABEL_40:
    *v14 = 0LL;
  }
  v17 = (_QWORD *)(a1 + 712);
  while ( (_QWORD *)*v17 != v17 )
  {
    *(_DWORD *)(*v17 - 72LL + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1);
  }
  v18 = *(void **)(a1 + 688);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x56777445u);
  *(_QWORD *)(a1 + 672) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 664);
  KeAbPostRelease(a1 + 664);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
}
