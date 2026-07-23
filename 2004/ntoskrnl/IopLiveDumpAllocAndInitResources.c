/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x14089393C
 * Callers:
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     RtlClearAllBitsEx @ 0x14034F2B0 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x140360E6C (VslIsSecureKernelRunning.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403C7B94 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x1403C7FE0 (RtlSetAllBitsEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140503504 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140503628 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140893FD4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408943F4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1408949E4 (IopLiveDumpAllocateIptBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140894BEC (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140894D0C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpReleaseResources @ 0x14089546C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A941C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x1409AA6C8 (IopLiveDumpResetCorralContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  unsigned int v2; // r12d
  char *v3; // r13
  int MappingResources; // ebx
  char *PhysicalMemoryBlock; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  PVOID PoolWithTag; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  SIZE_T v12; // rsi
  PVOID v13; // rax
  void *v14; // r10
  __int64 v15; // r15
  __int64 v16; // rax
  PVOID v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  PVOID v21; // rax
  __int64 v22; // r10
  __int64 i; // rbx
  __int64 v24; // r15
  __int64 v25; // r14
  PVOID v26; // rax
  __int64 v27; // rax
  SIZE_T v28; // rsi
  __int64 v29; // r14
  PVOID v30; // rax
  PVOID v31; // rax
  __int64 v32; // r10
  char v33; // al
  char v35; // [rsp+40h] [rbp-71h] BYREF
  __int64 v36; // [rsp+48h] [rbp-69h] BYREF
  __int64 v37; // [rsp+50h] [rbp-61h] BYREF
  __int64 v38; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+68h] [rbp-49h] BYREF
  __int64 *v41; // [rsp+88h] [rbp-29h]
  __int64 v42; // [rsp+90h] [rbp-21h]
  char *v43; // [rsp+98h] [rbp-19h]
  __int64 v44; // [rsp+A0h] [rbp-11h]
  __int64 *v45; // [rsp+A8h] [rbp-9h]
  __int64 v46; // [rsp+B0h] [rbp-1h]
  __int64 *v47; // [rsp+B8h] [rbp+7h]
  __int64 v48; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 *v49; // [rsp+C8h] [rbp+17h]
  __int64 v50; // [rsp+D0h] [rbp+1Fh]

  v2 = 0;
  v3 = 0LL;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
  {
    MappingResources = -1073741248;
    goto LABEL_44;
  }
  *(_QWORD *)(a1 + 304) = a1;
  IopLiveDumpResetCorralContext();
  PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
  v3 = PhysicalMemoryBlock;
  if ( !PhysicalMemoryBlock )
    goto LABEL_4;
  v6 = *(_DWORD *)PhysicalMemoryBlock;
  if ( !v6 )
  {
    MappingResources = -1073741595;
    goto LABEL_44;
  }
  v7 = *(_QWORD *)&v3[16 * (v6 - 1) + 16] + *(_QWORD *)&v3[16 * (v6 - 1) + 24];
  *(_QWORD *)(a1 + 88) = v7;
  v8 = (((unsigned __int64)(v7 + 7) >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 592) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
  {
LABEL_9:
    MappingResources = -1073741248;
    goto LABEL_44;
  }
  *(_QWORD *)(a1 + 576) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 584) = v10;
  RtlSetAllBitsEx((_QWORD *)(a1 + 576));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 592), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  if ( VslIsSecureKernelRunning() )
    v11 += 2 * v8;
  v12 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x706D644Cu);
  *(_QWORD *)(a1 + 560) = v13;
  if ( !v13 )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    goto LABEL_9;
  *(_QWORD *)(a1 + 568) = v12;
  memset(v14, 0, v12);
  v15 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(v15 + 8224) = v12;
  v16 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(v15 + 8240) = v16;
  *(_QWORD *)(a1 + 544) = v16;
  *(_QWORD *)(a1 + 552) = v15 + 8248;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 544));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 560), *(_QWORD *)(a1 + 568));
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 648) = v17;
  if ( !v17 )
    goto LABEL_4;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    goto LABEL_9;
  *(_QWORD *)(a1 + 600) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 608) = v18;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 600));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 648), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  if ( VslIsSecureKernelRunning() )
  {
    *(_QWORD *)(a1 + 632) = v19;
    *(_QWORD *)(a1 + 640) = v8 + v15 + 8248;
    *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 624) = v15 + 8248 + 2 * v8;
  }
  else
  {
    *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v19;
    v20 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 640) = v20;
  }
  v21 = ExAllocatePoolWithTag(NonPagedPoolNx, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 672) = v21;
  if ( !v21 )
  {
LABEL_4:
    MappingResources = -1073741670;
    goto LABEL_44;
  }
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    goto LABEL_9;
  *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 664) = v22;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 656));
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 672), (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(i + 16), *(unsigned int *)(i + 24));
  MappingResources = IopLiveDumpAllocateMappingResources(a1);
  if ( MappingResources >= 0 )
  {
    if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
      goto LABEL_9;
    MappingResources = IopLiveDumpEstimateMemoryPages(a1);
    if ( MappingResources < 0 )
      goto LABEL_44;
    MappingResources = IopLiveDumpAllocateDumpBuffers(a1);
    if ( MappingResources >= 0 )
    {
      MappingResources = IopLiveDumpAllocateExtraBuffers(a1);
      if ( MappingResources >= 0 )
      {
        if ( IptInterface )
          MappingResources = IopLiveDumpAllocateIptBuffers(a1);
        if ( MappingResources >= 0 )
          IopLiveDumpTraceBufferAllocation();
      }
    }
    v24 = (unsigned int)KeNumberProcessors_0;
    v25 = (unsigned int)KeNumberProcessors_0;
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)KeNumberProcessors_0, 0x706D644Cu);
    *(_QWORD *)(a1 + 1016) = v26;
    if ( v26 )
    {
      v27 = (unsigned int)BufferChunkSizeInPages;
      *(_DWORD *)(a1 + 1008) = v24;
      v28 = (8 * v27 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (_DWORD)v24 )
      {
        v29 = 0LL;
        while ( 1 )
        {
          *(_QWORD *)(v29 + *(_QWORD *)(a1 + 1016)) = ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x706D644Cu);
          if ( !*(_QWORD *)(v29 + *(_QWORD *)(a1 + 1016)) )
            break;
          ++v2;
          v29 += 8LL;
          if ( v2 >= (unsigned int)v24 )
          {
            v25 = v24;
            goto LABEL_40;
          }
        }
      }
      else
      {
LABEL_40:
        v30 = ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x706D644Cu);
        *(_QWORD *)(a1 + 1024) = v30;
        if ( v30 )
        {
          v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x706D644Cu);
          *(_QWORD *)(a1 + 1032) = v31;
          if ( v31 )
          {
            if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
            {
              IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1016), v28 * v25);
              IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1024), v28);
              IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1032), v28);
              goto LABEL_44;
            }
            goto LABEL_9;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 1008) = 0;
    }
    goto LABEL_4;
  }
LABEL_44:
  if ( (unsigned int)dword_140C04498 > 5 && tlgKeywordOn((__int64)&dword_140C04498, 0x200000000000LL) )
  {
    v36 = *(_QWORD *)(a1 + 680);
    v42 = 8LL;
    v41 = &v36;
    v33 = *(_BYTE *)(a1 + 44) & 1;
    v44 = 1LL;
    v35 = v33;
    v43 = &v35;
    v37 = *(_QWORD *)(a1 + 696);
    v45 = &v37;
    v38 = *(_QWORD *)(a1 + 704);
    v47 = &v38;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    v49 = &v39;
    v39 = (MEMORY[0xFFFFF78000000008] - v32) / 0x2710uLL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04498,
      (unsigned __int8 *)&word_140023AF6,
      (const GUID *)(a1 + 864),
      (const GUID *)(a1 + 848),
      7u,
      &v40);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( MappingResources < 0 )
    IopLiveDumpReleaseResources(a1);
  return (unsigned int)MappingResources;
}
