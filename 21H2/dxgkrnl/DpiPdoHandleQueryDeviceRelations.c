/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C01E7F40
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // r14
  unsigned int i; // ebp
  __int64 v14; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v8 = 0;
      *(_QWORD *)(a2 + 56) = v7;
      return v8;
    }
LABEL_7:
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    return v8;
  }
  if ( v5 != 2 )
    return *(unsigned int *)(a2 + 48);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v10 = *(_DWORD *)(v4 + 236);
  if ( v10 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v10 - 3) & 0xFFFFFFFC) != 0 || v10 == 4)
    || (v11 = *(_DWORD *)(v4 + 2736), v11 < 2) )
  {
    v8 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v12 = ExAllocatePoolWithTag(PagedPool, 8LL * (v11 - 2) + 16, 0x74727044u);
    if ( !v12 )
      goto LABEL_7;
    for ( i = 1; i < *(_DWORD *)(v4 + 2736); ++i )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8LL * i) + 64LL);
      *(_QWORD *)&v12[2 * i] = *(_QWORD *)(v14 + 152);
      ObfReferenceObject(*(PVOID *)(v14 + 152));
    }
    v8 = 0;
    *v12 = i - 1;
    *(_QWORD *)(a2 + 56) = v12;
  }
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v8;
}
