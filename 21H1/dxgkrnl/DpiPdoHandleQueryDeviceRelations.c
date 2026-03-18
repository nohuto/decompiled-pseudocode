/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C01581B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // r14
  unsigned int i; // ebp
  __int64 v19; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v12 = 0;
      *(_QWORD *)(a2 + 56) = v11;
      return v12;
    }
LABEL_7:
    v12 = -1073741801;
    v14 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
    return v12;
  }
  if ( v5 != 2 )
    return *(unsigned int *)(a2 + 48);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v15 = *(_DWORD *)(v4 + 236);
  if ( v15 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v15 - 3) & 0xFFFFFFFC) != 0 || v15 == 4)
    || (v16 = *(_DWORD *)(v4 + 2736), v16 < 2) )
  {
    v12 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v17 = ExAllocatePoolWithTag(PagedPool, 8LL * (v16 - 2) + 16, 0x74727044u);
    if ( !v17 )
      goto LABEL_7;
    for ( i = 1; i < *(_DWORD *)(v4 + 2736); ++i )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8LL * i) + 64LL);
      *(_QWORD *)&v17[2 * i] = *(_QWORD *)(v19 + 152);
      ObfReferenceObject(*(PVOID *)(v19 + 152));
    }
    v12 = 0;
    *v17 = i - 1;
    *(_QWORD *)(a2 + 56) = v17;
  }
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v12;
}
