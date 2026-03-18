/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009ABBC
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009AAFC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007B820 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C009B124 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C009B234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009B3B4 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C009B7EC (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B85BC (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00D931C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
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
  struct VIDMM_PROCESS *v8; // r13
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // edi
  bool v15; // r14
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  __int64 v19; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // rsi
  int v21; // edi
  int v22; // r14d
  VIDMM_PROCESS *v23; // r9
  char *v24; // r13
  char *j; // rcx
  __int64 v26; // r10
  struct CVirtualAddressAllocator *v27; // rcx
  __int64 Pool2; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KTHREAD **v35; // rcx
  char **v36; // rcx
  char *v37; // rax
  unsigned int v38; // r13d
  unsigned int v39; // r14d
  void *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rcx
  struct VIDMM_ALLOC *v43; // rax
  int v44; // eax
  bool v45; // r8
  int v46; // eax
  VIDMM_FENCE_STORAGE_PAGE *v47; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v48; // rax
  VIDMM_FENCE_STORAGE_PAGE **v49; // rdx
  char *v50; // rcx
  CVirtualAddressAllocator *v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rcx
  unsigned int v55; // [rsp+78h] [rbp-81h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+80h] [rbp-79h]
  PVOID P; // [rsp+88h] [rbp-71h] BYREF
  char *v58; // [rsp+90h] [rbp-69h]
  _QWORD v59[20]; // [rsp+98h] [rbp-61h] BYREF
  struct VIDMM_ALLOC *v61; // [rsp+150h] [rbp+57h] BYREF
  struct VIDMM_DEVICE *v62; // [rsp+158h] [rbp+5Fh]
  VIDMM_PROCESS *v63; // [rsp+160h] [rbp+67h]

  v63 = a4;
  v62 = a3;
  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v11 = *((_DWORD *)a2 + 1754);
  v12 = 1;
  if ( v11 > 1 && (v13 = a7, v12 = (1 << v11) - 1, a7) )
  {
    if ( (~v12 & a7) != 0 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225485LL;
    }
  }
  else
  {
    v13 = v12;
  }
  v15 = a8;
  v55 = 0;
  if ( a8 )
  {
    v16 = !_BitScanForward((unsigned int *)&v17, v13);
    v18 = -1;
    LODWORD(v61) = 0;
    if ( !v16 )
      v18 = v17;
    v55 = v18;
  }
  v19 = 0LL;
  v58 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)*((_QWORD *)this + 7);
        i != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56);
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( a2 == *((struct VIDMM_GLOBAL **)i + 6) )
      goto LABEL_17;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v21 = -1073741801;
    LOBYTE(v22) = 0;
    goto LABEL_63;
  }
LABEL_17:
  v23 = v63;
  v24 = (char *)i + 32;
  for ( j = (char *)*((_QWORD *)i + 4); j != v24; j = *(char **)j )
  {
    if ( v63 == *((VIDMM_PROCESS **)j - 1) && (!v15 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v19 = (__int64)(j - 32);
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v23,
                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                              v55);
  v27 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v16 = *(_BYTE *)(v26 + 2731) == 0, LOBYTE(v61) = 1, !v16) )
    LOBYTE(v61) = 0;
  v22 = 0;
  if ( v19 )
  {
    v22 = *(_DWORD *)(v19 + 52);
    *(_DWORD *)(v19 + 52) = v13 | v22;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1700882774LL);
    v19 = Pool2;
    if ( !Pool2 )
    {
      v21 = -1073741801;
      goto LABEL_62;
    }
    *(_DWORD *)(Pool2 + 48) = 1;
    *(_QWORD *)(Pool2 + 24) = v63;
    *(_QWORD *)(Pool2 + 8) = i;
    *(_DWORD *)(Pool2 + 52) = v13;
    ++*((_DWORD *)i + 18);
    if ( (_BYTE)v61 )
    {
      v30 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        *(_BYTE *)(v19 + 17) = 1;
        v31 = *((_QWORD *)a2 + 5118);
        v32 = *((_QWORD *)a2 + 5119);
      }
      else
      {
        v31 = *(_QWORD *)(v30 + 2640);
        v32 = *(_QWORD *)(v30 + 2648);
      }
      P = 0LL;
      v21 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v29,
              v31,
              v32,
              0x1000u,
              (unsigned __int64 *)&P);
      if ( v21 < 0 )
      {
LABEL_36:
        WdLogSingleEntry0(3LL);
        goto LABEL_55;
      }
      v35 = (struct _KTHREAD **)v63;
      *(_QWORD *)v19 = P;
      *(_BYTE *)(v19 + 16) = 1;
      VIDMM_PROCESS::OpenAdapter(v35, a2, v33, v34);
    }
    else
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      *(_BYTE *)(Pool2 + 16) = 0;
    }
    v36 = (char **)*((_QWORD *)i + 5);
    v37 = (char *)(v19 + 32);
    if ( *v36 != v24 )
      goto LABEL_68;
    *(_QWORD *)(v19 + 40) = v36;
    *(_QWORD *)v37 = v24;
    *v36 = v37;
    v27 = VirtualAddressAllocator;
    *((_QWORD *)i + 5) = v37;
  }
  if ( !(_BYTE)v61 || (v38 = 0, (v39 = *(_DWORD *)(v19 + 52) & ~v22) == 0) )
  {
LABEL_69:
    v54 = v58;
    *a6 = *(_QWORD *)v19 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v54 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v54, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v39 & 1) == 0 )
      goto LABEL_51;
    v40 = (void *)CVirtualAddressAllocator::MapVirtualAddressRange(
                    v27,
                    (__int64)i,
                    0LL,
                    2u,
                    0x1000uLL,
                    *(_QWORD *)v19,
                    0LL,
                    0LL,
                    0x1000u,
                    (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                    0LL,
                    v38,
                    0LL,
                    1);
    P = v40;
    v41 = (__int64)v40;
    if ( !v40 )
      break;
    if ( *(_BYTE *)(v19 + 17) )
    {
      v42 = *(_QWORD *)a2;
      v43 = (struct VIDMM_ALLOC *)*((_QWORD *)i + 7);
      v61 = v43;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v42 + 8) )
      {
        v61 = 0LL;
        v44 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                v41,
                v38,
                0,
                0LL,
                (__int64)v43,
                0,
                &v61,
                0LL);
      }
      else
      {
        memset(v59, 0, 0x58uLL);
        v59[5] = VirtualAddressAllocator;
        v59[7] = v61;
        LODWORD(v59[0]) = 113;
        v59[6] = v41;
        HIDWORD(v59[0]) = v38;
        v44 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v59, v45);
      }
    }
    else
    {
      v44 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)v62 + 10) + 176LL * v38),
              (struct VIDMM_MAPPED_VA_RANGE *)v40,
              0,
              *((struct _MDL **)i + 7),
              0LL,
              0LL);
    }
    v21 = v44;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)P, VirtualAddressAllocator);
    if ( v21 < 0 )
      goto LABEL_36;
LABEL_51:
    ++v38;
    v39 >>= 1;
    if ( !v39 )
      goto LABEL_69;
    v27 = VirtualAddressAllocator;
  }
  WdLogSingleEntry0(3LL);
  v21 = -1073741823;
LABEL_55:
  v46 = *(_DWORD *)(v19 + 48);
  LOBYTE(v22) = 0;
  if ( v46 != 1 )
    goto LABEL_61;
  v47 = (VIDMM_FENCE_STORAGE_PAGE *)(v19 + 32);
  LOBYTE(v22) = 1;
  v48 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v19 + 32);
  if ( !v48 )
    goto LABEL_60;
  if ( v48[1] != v47 || (v49 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v19 + 40), *v49 != v47) )
LABEL_68:
    __fastfail(3u);
  *v49 = (VIDMM_FENCE_STORAGE_PAGE *)v48;
  v48[1] = (VIDMM_FENCE_STORAGE_PAGE *)v49;
LABEL_60:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v47, i);
  v46 = *(_DWORD *)(v19 + 48);
LABEL_61:
  *(_DWORD *)(v19 + 48) = v46 - 1;
LABEL_62:
  v8 = v63;
LABEL_63:
  v50 = v58;
  *((_QWORD *)v58 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v50, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v22 )
  {
    if ( *(_BYTE *)(v19 + 16) )
    {
      v51 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), v55);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v51, *(_QWORD *)v19);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)v8, a2, v52, v53);
    }
    ExFreePoolWithTag((PVOID)v19, 0);
  }
  return (unsigned int)v21;
}
