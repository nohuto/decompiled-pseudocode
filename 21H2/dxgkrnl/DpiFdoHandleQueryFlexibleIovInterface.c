/*
 * XREFs of DpiFdoHandleQueryFlexibleIovInterface @ 0x1C03907F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065D24 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x1C0391484 (DpiGetPartitionedInterfaceContextPointer.c)
 */

__int64 __fastcall DpiFdoHandleQueryFlexibleIovInterface(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        _QWORD *a4,
        PVOID Object)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  void *v11; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiFdoHandleQueryFlexibleIovInterface", 0LL);
  if ( Object )
  {
    if ( a3 == 1 )
    {
      if ( a2 >= 0x78u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v5 + 484) )
          DpiCheckForOutstandingD3Requests(v5);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
        if ( *(_BYTE *)(v5 + 5192) )
        {
          qword_1C012FCD8 = 0LL;
          qword_1C012FCE0 = 0LL;
          qword_1C012FCE8 = 0LL;
          if ( *(_QWORD *)(v5 + 5232) )
          {
            qword_1C012FCD8 = (__int64)&DpiIovGetBackingResource;
            qword_1C012FCE0 = (__int64)DpiIovGetMmioRangeCount;
            qword_1C012FCE8 = (__int64)DpiIovGetMmioRanges;
          }
          else
          {
            v11 = 0LL;
            if ( *(_BYTE *)(v5 + 2692) )
              v11 = &DpiIovGetBackingResource;
            qword_1C012FCD8 = (__int64)v11;
          }
          memmove(a4, &unk_1C012FCA0, 0x78uLL);
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
          WdLogSingleEntry1(3LL, 0LL);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
          v6 = -1073741637;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
      }
      return v6;
    }
    else
    {
      WdLogSingleEntry1(3LL, 0LL);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225485LL;
  }
}
