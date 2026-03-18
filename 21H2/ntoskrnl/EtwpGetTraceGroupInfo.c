/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x140883164
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  int v8; // r15d
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // r13
  unsigned int v17; // ebx
  int *v18; // r13
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  unsigned int v22; // r13d
  struct _KTHREAD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  _OWORD *v27; // [rsp+20h] [rbp-48h]
  int *v28; // [rsp+28h] [rbp-40h]
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v29 = 0;
  v5 = *a4;
  v6 = 0;
  v8 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  v12 = 4;
  GuidEntryByGuid[52] = KeGetCurrentThread();
  v13 = 8LL;
  if ( v5 >= 4 )
    *a3 = 8;
  v14 = a3 + 1;
  v15 = GuidEntryByGuid + 16;
  do
  {
    v12 += 32;
    if ( v12 <= v5 )
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14 += 2;
    }
    v15 += 2;
    --v13;
  }
  while ( v13 );
  v16 = v12;
  v17 = v12 + 4;
  v18 = (_DWORD *)((char *)a3 + v16);
  v19 = (_QWORD *)((char *)a3 + v17);
  v28 = v18;
  v20 = GuidEntryByGuid + 7;
  v27 = v19;
  v21 = (_QWORD *)GuidEntryByGuid[7];
  if ( v21 == GuidEntryByGuid + 7 )
  {
LABEL_16:
    if ( v17 > v5 )
    {
      v29 = -1073741789;
    }
    else
    {
      if ( v6 == 1 )
      {
        v8 = 1;
      }
      else if ( v6 > 1 )
      {
        qsort(v19, v6, 0x10uLL, EtwpCompareGuid);
        v24 = v19 + 2;
        v8 = 1;
        v25 = v6 - 1;
        do
        {
          v26 = *v24 - *v19;
          if ( *v24 == *v19 )
            v26 = v24[1] - v19[1];
          if ( v26 )
          {
            v19 += 2;
            if ( v19 != v24 )
              *(_OWORD *)v19 = *(_OWORD *)v24;
            ++v8;
          }
          v24 += 2;
          --v25;
        }
        while ( v25 );
      }
      *v18 = v8;
    }
  }
  else
  {
    v22 = v17 + 16;
    while ( v22 >= v17 )
    {
      v17 += 16;
      v22 += 16;
      ++v6;
      if ( v17 <= v5 )
      {
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v21[2] + 408LL, 0LL);
        *(_QWORD *)(v21[2] + 416LL) = KeGetCurrentThread();
        *v27 = *(_OWORD *)(v21[2] + 40LL);
        *(_QWORD *)(v21[2] + 416LL) = 0LL;
        ExReleasePushLockEx(v21[2] + 408LL, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ++v27;
        v20 = GuidEntryByGuid + 7;
      }
      v21 = (_QWORD *)*v21;
      if ( v21 == v20 )
      {
        v18 = v28;
        goto LABEL_16;
      }
    }
    v17 = -1;
    v29 = -2147483643;
  }
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *a4 = v17;
  return v29;
}
