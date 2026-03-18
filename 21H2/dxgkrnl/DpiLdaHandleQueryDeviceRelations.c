/*
 * XREFs of DpiLdaHandleQueryDeviceRelations @ 0x1C0396180
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  int v5; // edi
  __int64 v6; // rax
  unsigned int *Information; // rdi
  __int64 v8; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r14

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length != 3 )
    goto LABEL_20;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 4088LL));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v6 = *(_QWORD *)(v3 + 2728);
  if ( v6 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    v8 = *(_QWORD *)(v6 + 64);
    if ( Information )
      v2 = *Information;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v2 + 16, 0x74727044u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v2 + 16);
      *v10 = v2 + 1;
      if ( v2 )
        memmove(v10 + 2, Information + 2, 8LL * v2);
      *(_QWORD *)&v10[2 * v2 + 2] = *(_QWORD *)(v8 + 152);
      ObfReferenceObject(*(PVOID *)(v8 + 152));
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v10;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
    }
  }
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    a2->IoStatus.Status = v5;
    goto LABEL_20;
  }
  if ( v5 == -1073741637 )
  {
LABEL_20:
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 160), a2);
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v5;
}
