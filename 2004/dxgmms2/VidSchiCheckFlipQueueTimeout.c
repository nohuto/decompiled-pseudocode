/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C000B6E0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003D114 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C007F210 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  KSPIN_LOCK *v3; // r14
  _QWORD *v4; // r13
  char v6; // bl
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int64 v11; // r12
  int v12; // ebx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  int i; // r14d
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v19; // rbx
  __int64 v20; // r13
  int v21; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rax
  bool v29; // cc
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+28h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+8h]

  v3 = (KSPIN_LOCK *)(a1 + 1712);
  v4 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
  {
    v9 = a1 + 3104;
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2352LL) )
    {
      ++v8;
      v9 += 8LL;
      if ( v8 >= v7 )
        goto LABEL_6;
    }
    v6 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 40) )
    return 0LL;
LABEL_10:
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 3104 + 8 * v11);
  v14 = (__int64 *)(a1 + 3104 + 8 * v11);
  v34 = v13;
  KeAcquireInStackQueuedSpinLock(v3, &v32);
  for ( i = -1; ; ++i )
  {
    if ( i == *(_DWORD *)(a1 + 144) )
    {
LABEL_17:
      KeReleaseInStackQueuedSpinLock(&v32);
      if ( v12 )
        goto LABEL_46;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 40) )
        return 0LL;
      v3 = (KSPIN_LOCK *)(a1 + 1712);
      goto LABEL_10;
    }
    v16 = *v14;
    v17 = i == -1 ? *(_QWORD *)(v16 + 24) : *(_QWORD *)(v16 + 8LL * i + 32);
    if ( v17 )
    {
      if ( *(int *)(v13 + 4) >= 4 || *(_BYTE *)(a1 + 148) )
        break;
    }
LABEL_15:
    ;
  }
  if ( (*(_DWORD *)v17 & 1) == 0 )
  {
    v19 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v17 + 8) = MEMORY[0xFFFFF78000000320];
    if ( !*(_DWORD *)(v13 + 2340) )
      goto LABEL_32;
    v20 = 1344LL * *(unsigned int *)(v17 + 44);
    v21 = *(_DWORD *)(v20 + v17 + 1140);
    if ( v21 == 5 || v21 == 15 )
    {
      v23 = v19 - *(_QWORD *)(v20 + v17 + 1192);
      v24 = 10000000LL * g_TdrConfig[1];
      if ( v23 * (unsigned __int64)KeQueryTimeIncrement() > v24 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 348LL) & 0x200) == 0 )
          goto LABEL_41;
        v25 = __rdtsc();
        v26 = __readmsr(0x400000F6u);
        v27 = *((unsigned int *)KeGetCurrentPrcb() + 17);
        v31 = 10 * (v25 - v26) / v27;
        v28 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v27, 10 * (v25 - v26) % v27);
        v28[5] = v31;
        v28[3] = v26;
        v28[4] = v25;
        WdLogEvent5_WdPresentTokenEvent(v28);
        v29 = v26 <= v25;
        v14 = (__int64 *)(a1 + 3104 + 8 * v11);
        if ( v29 && v31 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
        {
LABEL_41:
          *(_DWORD *)v17 |= 1u;
          v13 = v34;
          *(_QWORD *)(v17 + 16) = v23;
          v30 = *(_QWORD *)(v20 + v17 + 1192);
          v4 = a2;
          *(_QWORD *)(v17 + 24) = v30;
          if ( a2 )
            *a2 = v30;
LABEL_32:
          v12 = *(_DWORD *)v17 & 1;
          if ( v12 )
            goto LABEL_17;
          goto LABEL_15;
        }
      }
      v13 = v34;
    }
    v4 = a2;
    goto LABEL_32;
  }
  if ( v4 )
    *v4 = *(_QWORD *)(v17 + 24);
  KeReleaseInStackQueuedSpinLock(&v32);
LABEL_46:
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
