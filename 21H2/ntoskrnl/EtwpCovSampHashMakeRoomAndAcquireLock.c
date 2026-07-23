/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140944F10
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140942FBC (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCovSampHashLookupInTable @ 0x140944E30 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1409462D0 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140946508 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, __int64 **a3)
{
  __int64 *Table; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r14
  struct _KTHREAD *v18; // rax
  __int64 *v19; // rdi
  unsigned int v20; // edx
  __int64 *v21; // rcx
  __int64 **v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 **v31; // rcx
  struct _KTHREAD *v32; // rax
  _QWORD *v34; // [rsp+50h] [rbp+8h] BYREF

  v34 = 0LL;
  Table = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v8 = 0;
  v9 = *(_QWORD *)(BugCheckParameter2 + 1152);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v10 = *(_DWORD *)(v9 + 20);
  v11 = a2 + *(_DWORD *)(v9 + 16);
  if ( v11 >= (7 * v10) >> 3 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( v10 < v12 )
      {
        v13 = 2 * v10;
        if ( !v10 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 36);
        while ( (7 * v13) >> 3 < v11 )
          v13 *= 2;
        if ( v13 >= v12 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 40);
        v12 = v13;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1184) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_34;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      if ( Table )
        EtwpCoverageSamplerFreeTable(Table);
      Table = (__int64 *)EtwpCoverageSamplerAllocateTable(v12);
      v17 = Table;
      if ( !Table )
        goto LABEL_36;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v19 = *(__int64 **)(BugCheckParameter2 + 1152);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v20 = *((_DWORD *)v19 + 5);
      if ( a2 + *((_DWORD *)v19 + 4) < (7 * v20) >> 3 )
        goto LABEL_34;
      if ( v20 >= v12 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1152) = Table;
      Table = v19;
      v21 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 )
        goto LABEL_31;
      v22 = (__int64 **)v19[1];
      if ( *v22 != v19 )
        goto LABEL_31;
      *v22 = v21;
      v21[1] = (__int64)v22;
      v23 = *(_QWORD **)(BugCheckParameter2 + 1176);
      v24 = *(_QWORD **)(BugCheckParameter2 + 1152);
      if ( *v23 != BugCheckParameter2 + 1168 )
        goto LABEL_31;
      *v24 = BugCheckParameter2 + 1168;
      v25 = 0LL;
      v24[1] = v23;
      *v23 = v24;
      *(_QWORD *)(BugCheckParameter2 + 1176) = v24;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL) = *((_DWORD *)v19 + 4);
            (unsigned int)v25 < *((_DWORD *)v19 + 5);
            v25 = (unsigned int)(v25 + 1) )
      {
        v26 = v19[3];
        v27 = (_QWORD *)(v26 + 8 * v25);
        if ( *v27 )
        {
          EtwpCovSampHashLookupInTable(*(_QWORD *)(BugCheckParameter2 + 1152), (unsigned __int8 *)(v26 + 8 * v25), &v34);
          *v34 = *v27;
          if ( (*((_DWORD *)v19 + 4))-- == 1 )
            break;
        }
      }
      if ( v8 < 0x14 )
      {
        v29 = *(_QWORD *)(BugCheckParameter2 + 1152);
        ++v8;
        v10 = *(_DWORD *)(v29 + 20);
        v11 = a2 + *(_DWORD *)(v29 + 16);
        if ( v11 >= (7 * v10) >> 3 )
          continue;
      }
      goto LABEL_34;
    }
    v30 = *(_DWORD *)(BugCheckParameter2 + 1184);
    if ( v30 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_34:
      if ( Table )
        *a3 = Table;
      goto LABEL_36;
    }
    *(_QWORD *)(BugCheckParameter2 + 1152) = Table;
    Table = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1184) = v30 + 1;
    v31 = *(__int64 ***)(BugCheckParameter2 + 1176);
    if ( *v31 != (__int64 *)(BugCheckParameter2 + 1168) )
LABEL_31:
      __fastfail(3u);
    *v17 = BugCheckParameter2 + 1168;
    v17[1] = (__int64)v31;
    *v31 = v17;
    *(_QWORD *)(BugCheckParameter2 + 1176) = v17;
    if ( *(_DWORD *)(BugCheckParameter2 + 1184) == 2 )
    {
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1160), 0, 0);
      goto LABEL_34;
    }
  }
LABEL_36:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  return *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL) < (unsigned int)(7
                                                                                   * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152)
                                                                                               + 20LL)) >> 3
       ? ((unsigned int)(7 * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 20LL)) >> 3)
       - *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1152) + 16LL)
       : 0;
}
