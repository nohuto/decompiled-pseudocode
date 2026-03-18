/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1C01979FC
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01735B0 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00186B0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  __int64 v3; // rdi
  unsigned int v4; // r13d
  unsigned int v5; // r15d
  __int64 v7; // r12
  __int64 *v8; // r14
  __int64 *v9; // rdi
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // r13
  unsigned int *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r13
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+80h] [rbp+8h]
  unsigned int v23; // [rsp+90h] [rbp+18h]

  v2 = *(unsigned int **)(a2 + 56);
  v3 = a2;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  v21 = 4;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 133LL) || *(_BYTE *)(a1 + 480) )
  {
    v20 = -1073741637;
    goto LABEL_4;
  }
  if ( v2 )
    v4 = *v2;
  AcquireMiniportListMutex();
  v7 = qword_1C00B0B40;
  if ( *(_QWORD *)v7 == v7 )
  {
LABEL_44:
    _InterlockedExchange64(&qword_1C00B0B50, 0LL);
    KeReleaseMutex(Mutex, 0);
    return v20;
  }
  v5 = v4;
  while ( *(_BYTE *)(v7 + 133) )
  {
LABEL_43:
    v7 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 == qword_1C00B0B40 )
      goto LABEL_44;
  }
  KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
  v8 = *(__int64 **)(v7 + 56);
  if ( (__int64 *)*v8 == v8 )
  {
LABEL_42:
    KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
    goto LABEL_43;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v8 + 480) && *((_DWORD *)v8 + 4) == 1953656900 )
    {
      if ( *((_DWORD *)v8 + 5) == 2 )
      {
        v9 = v8;
        goto LABEL_20;
      }
      if ( *((_DWORD *)v8 + 5) == 3 )
      {
        v10 = v8[341];
        if ( v10 )
          break;
      }
    }
LABEL_41:
    v8 = (__int64 *)*v8;
    if ( *v8 == *(_QWORD *)(v7 + 56) )
      goto LABEL_42;
  }
  v9 = *(__int64 **)(v10 + 64);
LABEL_20:
  KeEnterCriticalRegion();
  if ( *((_BYTE *)v9 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9[3] + 64) + 4080LL));
  ExAcquireResourceSharedLite((PERESOURCE)v9[21], 1u);
  v11 = *((_DWORD *)v9 + 59);
  if ( v11 != 2 && (*((_DWORD *)v9 + 60) != 2 || ((v11 - 3) & 0xFFFFFFFC) != 0 || v11 == 4)
    || (v9[488] & 2) == 0
    || (*((_BYTE *)v9 + 3905) & 0x20) != 0 )
  {
    goto LABEL_38;
  }
  if ( v4 >= v5 + 1 )
    goto LABEL_37;
  v12 = v21 + v4;
  v23 = v12;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v12 + 15, 0x74727044u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v2 && v5 )
      memmove(PoolWithTag, v2, 8LL * (v5 - 1) + 16);
    else
      *PoolWithTag = 0;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v2 = v18;
    *(_QWORD *)(a2 + 56) = v18;
    v4 = v23;
    v21 *= 2;
LABEL_37:
    ObfReferenceObject((PVOID)v8[19]);
    ++v5;
    *(_QWORD *)&v2[2 * (*v2)++ + 2] = v8[19];
LABEL_38:
    if ( *((_BYTE *)v9 + 484) )
      DpiEnableD3Requests(v9[3]);
    ExReleaseResourceLite((PERESOURCE)v9[21]);
    KeLeaveCriticalRegion();
    goto LABEL_41;
  }
  v20 = -1073741801;
  v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
  *(_QWORD *)(v19 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v19);
  if ( *((_BYTE *)v9 + 484) )
    DpiEnableD3Requests(v9[3]);
  ExReleaseResourceLite((PERESOURCE)v9[21]);
  KeLeaveCriticalRegion();
  KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
  _InterlockedExchange64(&qword_1C00B0B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  v3 = a2;
LABEL_4:
  if ( v2 )
  {
    while ( v5 )
      ObfDereferenceObject(*(PVOID *)&v2[2 * --v5 + 2]);
    ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
  return v20;
}
