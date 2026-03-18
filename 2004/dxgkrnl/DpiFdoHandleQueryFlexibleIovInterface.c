/*
 * XREFs of DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02D3070
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058240 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x1C02D3E08 (DpiGetPartitionedInterfaceContextPointer.c)
 */

__int64 __fastcall DpiFdoHandleQueryFlexibleIovInterface(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, PVOID Object)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int16 v8; // si
  unsigned __int16 v9; // bp
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  void *v18; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiFdoHandleQueryFlexibleIovInterface", 0LL);
  if ( Object )
  {
    if ( v8 == 1 )
    {
      if ( v9 >= 0x78u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v5 + 484) )
          DpiCheckForOutstandingD3Requests(v5);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
        if ( *(_BYTE *)(v5 + 5264) )
        {
          qword_1C00B0C28 = 0LL;
          qword_1C00B0C30 = 0LL;
          qword_1C00B0C38 = 0LL;
          if ( *(_QWORD *)(v5 + 5304) )
          {
            qword_1C00B0C28 = (__int64)&DpiIovGetBackingResource;
            qword_1C00B0C30 = (__int64)DpiIovGetMmioRangeCount;
            qword_1C00B0C38 = (__int64)DpiIovGetMmioRanges;
          }
          else
          {
            v18 = 0LL;
            if ( *(_BYTE *)(v5 + 2692) )
              v18 = &DpiIovGetBackingResource;
            qword_1C00B0C28 = (__int64)v18;
          }
          memmove(a4, &unk_1C00B0BF0, 0x78uLL);
          PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v5, Object);
          a4[1] = PartitionedInterfaceContextPointer;
          Object = 0LL;
          DpiGetVirtualGpuType(PartitionedInterfaceContextPointer, &Object);
          ObfReferenceObject(Object);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
        }
        else
        {
          v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
          *(_QWORD *)(v17 + 24) = 0LL;
          WdLogEvent5_WdWarning(v17);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
          v6 = -1073741637;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(a1, a2);
        v6 = -1073741789;
        *(_QWORD *)(v13 + 24) = -1073741789LL;
        WdLogEvent5_WdError(v13);
      }
      return v6;
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v12 + 24) = 0LL;
      WdLogEvent5_WdWarning(v12);
      return 3221225659LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
}
