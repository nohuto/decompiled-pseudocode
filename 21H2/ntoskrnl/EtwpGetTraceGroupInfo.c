/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x140934924
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, ULONG *a4)
{
  ULONG v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // edi
  int v9; // ebp
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _OWORD *v15; // rdx
  _OWORD *v16; // rax
  _QWORD *v17; // r14
  ULONG v18; // ecx
  _QWORD *v19; // rbx
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _OWORD *v29; // [rsp+20h] [rbp-48h]
  int *v30; // [rsp+28h] [rbp-40h]
  ULONG pulResult; // [rsp+80h] [rbp+18h] BYREF
  ULONG *v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v4 = *a4;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  LODWORD(v13) = 4;
  GuidEntryByGuid[52] = KeGetCurrentThread();
  v14 = 8LL;
  if ( v4 >= 4 )
    *a3 = 8;
  v15 = a3 + 1;
  v16 = GuidEntryByGuid + 16;
  do
  {
    v13 = (unsigned int)(v13 + 32);
    if ( (unsigned int)v13 <= v4 )
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15 += 2;
    }
    v16 += 2;
    --v14;
  }
  while ( v14 );
  v17 = (_QWORD *)GuidEntryByGuid[7];
  v30 = (_DWORD *)((char *)a3 + v13);
  v18 = v13 + 4;
  v19 = (_QWORD *)((char *)a3 + v18);
  pulResult = v18;
  v29 = v19;
  while ( v17 != GuidEntryByGuid + 7 )
  {
    if ( RtlULongAdd(v18, 0x10u, &pulResult) < 0 )
    {
      v6 = -2147483643;
      goto LABEL_29;
    }
    v18 = pulResult;
    ++v8;
    if ( pulResult <= v4 )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v17[2] + 408LL, 0LL);
      *(_QWORD *)(v17[2] + 416LL) = KeGetCurrentThread();
      *v29 = *(_OWORD *)(v17[2] + 40LL);
      *(_QWORD *)(v17[2] + 416LL) = 0LL;
      ExReleasePushLockEx(v17[2] + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
      ++v29;
      v18 = pulResult;
    }
    v17 = (_QWORD *)*v17;
  }
  if ( v18 > v4 )
  {
    v6 = -1073741789;
  }
  else
  {
    if ( v8 == 1 )
    {
      v9 = 1;
    }
    else if ( v8 > 1 )
    {
      qsort(v19, v8, 0x10uLL, EtwpCompareGuid);
      v24 = v19 + 2;
      v9 = 1;
      v25 = v8 - 1;
      do
      {
        if ( *v24 != *v19 || v24[1] != v19[1] )
        {
          v19 += 2;
          if ( v19 != v24 )
            *(_OWORD *)v19 = *(_OWORD *)v24;
          ++v9;
        }
        v24 += 2;
        --v25;
      }
      while ( v25 );
    }
    *v30 = v9;
  }
LABEL_29:
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *v32 = pulResult;
  return v6;
}
