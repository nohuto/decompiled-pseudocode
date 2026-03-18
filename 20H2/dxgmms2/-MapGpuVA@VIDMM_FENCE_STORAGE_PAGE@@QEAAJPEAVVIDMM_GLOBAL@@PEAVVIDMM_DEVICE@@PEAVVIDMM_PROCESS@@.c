/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00865A0
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00864E0 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A764 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A9A4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0071590 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0077948 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007869C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C007A8B4 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00863E4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0086914 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0086D50 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00B3B44 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BDF8C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  VIDMM_PROCESS *v8; // r12
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  char *v15; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v16; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **i; // r15
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v18; // r12
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *j; // rcx
  __int64 v20; // r10
  void **v21; // r11
  struct VIDMM_VAD **v22; // rcx
  int v23; // r14d
  unsigned int v24; // r12d
  unsigned int v25; // r14d
  char *PoolWithTag; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v33; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v34; // rax
  struct VIDMM_MAPPED_VA_RANGE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  bool v41; // zf
  int v42; // eax
  char v43; // cl
  int v44; // edi
  char v45; // r14
  __int64 v46; // rax
  __int64 v47; // r13
  bool v48; // r8
  __int64 v49; // rax
  int v50; // eax
  VIDMM_FENCE_STORAGE_PAGE *v51; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v52; // rax
  VIDMM_FENCE_STORAGE_PAGE **v53; // rdx
  CVirtualAddressAllocator *v54; // rax
  unsigned int v55; // [rsp+78h] [rbp-81h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+80h] [rbp-79h]
  unsigned __int64 v57; // [rsp+88h] [rbp-71h] BYREF
  struct VIDMM_ALLOC *v58; // [rsp+90h] [rbp-69h] BYREF
  _QWORD v59[20]; // [rsp+98h] [rbp-61h] BYREF
  char v61; // [rsp+150h] [rbp+57h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v12 = *((unsigned int *)a2 + 1750);
  v13 = 1;
  if ( (unsigned int)v12 > 1 && (v14 = a7, v13 = (1 << v12) - 1, a7) )
  {
    if ( (~v13 & a7) != 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v12, a2);
      WdLogEvent5_WdWarning(v40);
      return 3221225485LL;
    }
  }
  else
  {
    v14 = v13;
  }
  v55 = 0;
  if ( a8 )
  {
    v41 = !_BitScanForward((unsigned int *)&v42, v14);
    v43 = -1;
    if ( !v41 )
      v43 = v42;
    v55 = v43;
  }
  v15 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  v16 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)((char *)this + 56);
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)this + 7);
        i != v16;
        i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*i )
  {
    if ( a2 == i[6] )
      goto LABEL_9;
  }
  i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v44 = -1073741801;
    v45 = 0;
    goto LABEL_64;
  }
LABEL_9:
  v18 = i + 4;
  for ( j = i[4]; j != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v18; j = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)j )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)j - 1) && (!a8 || *((_DWORD *)j + 5) == v14) )
    {
      ++*((_DWORD *)j + 4);
      v15 = (char *)j - 32;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 232LL), v55);
  v22 = (struct VIDMM_VAD **)VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v61 = 1, *(_BYTE *)(v20 + 2635) != (_BYTE)v21) )
    v61 = (char)v21;
  v23 = (int)v21;
  if ( v15 )
  {
    v23 = *((_DWORD *)v15 + 13);
    *((_DWORD *)v15 + 13) = v14 | v23;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x65616956u);
    v21 = 0LL;
    v15 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v44 = -1073741801;
      v45 = 0;
      goto LABEL_63;
    }
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 1;
    *((_QWORD *)PoolWithTag + 3) = a4;
    *((_QWORD *)PoolWithTag + 1) = i;
    *((_DWORD *)PoolWithTag + 13) = v14;
    ++*((_DWORD *)i + 16);
    if ( v61 )
    {
      v28 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        v15[17] = 1;
        v29 = *((_QWORD *)a2 + 5118);
        v30 = *((_QWORD *)a2 + 5119);
      }
      else
      {
        v29 = *(_QWORD *)(v28 + 2544);
        v30 = *(_QWORD *)(v28 + 2552);
      }
      v57 = 0LL;
      v44 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v27,
              v29,
              v30,
              0x1000u,
              &v57);
      if ( v44 < 0 )
      {
LABEL_51:
        v46 = WdLogNewEntry5_WdWarning(v32, v31);
        WdLogEvent5_WdWarning(v46);
        goto LABEL_56;
      }
      *(_QWORD *)v15 = v57;
      v15[16] = 1;
      VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)a4, a2);
      v21 = 0LL;
    }
    else
    {
      *(_QWORD *)PoolWithTag = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      PoolWithTag[16] = 0;
    }
    v33 = i[5];
    v34 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v15 + 32);
    if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v33 != v18 )
      goto LABEL_69;
    *((_QWORD *)v15 + 5) = v33;
    *(_QWORD *)v34 = v18;
    *(_QWORD *)v33 = v34;
    v22 = (struct VIDMM_VAD **)VirtualAddressAllocator;
    i[5] = v34;
  }
  if ( v61 == (_BYTE)v21 || (v24 = (unsigned int)v21, (v25 = *((_DWORD *)v15 + 13) & ~v23) == 0) )
  {
LABEL_20:
    *a6 = *(_QWORD *)v15 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = v21;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v25 & 1) == 0 )
      goto LABEL_36;
    v35 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v22,
                                            (__int64)this + 120,
                                            0LL,
                                            2u,
                                            0x1000uLL,
                                            *(_QWORD *)v15,
                                            (unsigned __int64)v21,
                                            (unsigned __int64)v21,
                                            0x1000u,
                                            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                                            (__int64)v21,
                                            v24,
                                            v21);
    v38 = v35;
    if ( !v35 )
      break;
    if ( v15[17] )
    {
      v47 = *((_QWORD *)this + 15);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v58 = 0LL;
        v39 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)v35,
                v24,
                0,
                0LL,
                v47,
                0,
                &v58,
                0LL);
      }
      else
      {
        memset(v59, 0, 0x58uLL);
        v59[5] = VirtualAddressAllocator;
        LODWORD(v59[0]) = 113;
        v59[6] = v38;
        HIDWORD(v59[0]) = v24;
        v59[7] = v47;
        v39 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v59, v48);
      }
    }
    else
    {
      v39 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 176LL * v24),
              v35,
              0,
              *((struct _MDL **)this + 15),
              0LL,
              0LL);
    }
    v21 = 0LL;
    v44 = v39;
    if ( v39 < 0 )
      goto LABEL_51;
LABEL_36:
    ++v24;
    v25 >>= 1;
    if ( !v25 )
      goto LABEL_20;
    v22 = (struct VIDMM_VAD **)VirtualAddressAllocator;
  }
  v49 = WdLogNewEntry5_WdWarning(v37, v36);
  WdLogEvent5_WdWarning(v49);
  v44 = -1073741823;
LABEL_56:
  v50 = *((_DWORD *)v15 + 12);
  v45 = 0;
  if ( v50 != 1 )
    goto LABEL_62;
  v51 = (VIDMM_FENCE_STORAGE_PAGE *)(v15 + 32);
  v45 = 1;
  v52 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v15 + 4);
  if ( !v52 )
    goto LABEL_61;
  if ( v52[1] != v51 || (v53 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v15 + 5), *v53 != v51) )
LABEL_69:
    __fastfail(3u);
  *v53 = (VIDMM_FENCE_STORAGE_PAGE *)v52;
  v52[1] = (VIDMM_FENCE_STORAGE_PAGE *)v53;
LABEL_61:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v51, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)i);
  v50 = *((_DWORD *)v15 + 12);
LABEL_62:
  *((_DWORD *)v15 + 12) = v50 - 1;
LABEL_63:
  v8 = a4;
LABEL_64:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v45 )
  {
    if ( v15[16] )
    {
      v54 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 232LL), v55);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v54, *(_QWORD *)v15);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)v8, a2);
    }
    ExFreePoolWithTag(v15, 0);
  }
  return (unsigned int)v44;
}
