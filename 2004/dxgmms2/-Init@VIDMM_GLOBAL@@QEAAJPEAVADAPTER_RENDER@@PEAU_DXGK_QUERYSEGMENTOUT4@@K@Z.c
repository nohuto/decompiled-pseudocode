/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0093C98
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0093A94 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AA4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001D1C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000ECC8 (RtlStringCbPrintfW.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0011AFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0015798 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0094490 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C00946E8 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0094DDC (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00B1528 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00BDEB0 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BE004 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  unsigned int *v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  bool v12; // cf
  SIZE_T v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rdi
  unsigned int v17; // eax
  char v18; // cl
  int v19; // edx
  char v20; // al
  unsigned int v21; // r13d
  unsigned int v22; // r14d
  __int64 v23; // rdi
  _DWORD *v24; // r13
  __int64 v25; // r12
  UINT *p_PagingBufferSegmentId; // rsi
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // rdx
  const struct DXGADAPTER_GPUMMUCAPS *v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // r10d
  char *v34; // r8
  char v35; // cl
  __int16 v36; // ax
  int v37; // ecx
  char v38; // al
  int v39; // ecx
  bool v40; // cl
  int v41; // edi
  HANDLE *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // r8
  SIZE_T v47; // rax
  PVOID v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  wchar_t *v53; // r12
  unsigned int v54; // esi
  UCHAR **p_pSegmentDescriptor; // r13
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v56; // r9
  __int64 v57; // r14
  int inited; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r8
  bool v66; // zf
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  struct _RTL_BALANCED_NODE *v70; // rax
  VIDMM_PARTITION *i; // rsi
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  _QWORD *v76; // rax
  _QWORD *v77; // rbx
  VIDMM_PARTITION *v79; // rcx
  VIDMM_PARTITION *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  SIZE_T v83; // rax
  PVOID v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rcx
  unsigned __int64 v89; // rsi
  _QWORD *v90; // rax
  void (__fastcall ***v91)(_QWORD, __int64); // r8
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rax
  SIZE_T v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  SIZE_T v101; // rax
  PVOID v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // esi
  unsigned int v107; // ecx
  __int64 v108; // r12
  const struct DXGADAPTER_GPUMMUCAPS *v109; // r13
  unsigned int *v110; // r14
  const struct DXGK_PHYSICALADAPTERINFO *v111; // r10
  int v112; // eax
  __int64 v113; // rax
  VIDMM_PARTITION **v114; // rax
  _QWORD *v115; // rax
  PPCW_DATA Data; // [rsp+28h] [rbp-79h]
  struct DXGK_PHYSICALADAPTERINFO *v117; // [rsp+30h] [rbp-71h]
  struct _PCW_DATA v118; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v119; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING Name; // [rsp+70h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  unsigned int v123; // [rsp+108h] [rbp+67h]

  *((_QWORD *)this + 2) = a2;
  v4 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v4;
  *((_DWORD *)this + 8) = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v7 = *(_DWORD *)(v4 + 348);
  v119 = 0LL;
  v8 = v7 >> 9;
  LOBYTE(v8) = v8 & 1;
  byte_1C00514F0 |= v8;
  v9 = (unsigned int *)*((_QWORD *)this + 3);
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40937) |= 4u;
  v10 = v9[70];
  *((_DWORD *)this + 1750) = v10;
  if ( (unsigned int)v10 > 0x40 )
  {
    v81 = WdLogNewEntry5_WdAssertion(v8, a2, a3);
    *(_QWORD *)(v81 + 24) = 64LL;
LABEL_65:
    WdLogEvent5_WdAssertion(v81);
    return 3221225485LL;
  }
  v11 = 1584 * v10;
  if ( !is_mul_ok(v10, 0x630uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = (char *)operator new(v13, 0x30356956u, (__int64)a3, (POOL_TYPE)512);
  if ( v14 )
  {
    v16 = v14 + 8;
    *(_QWORD *)v14 = v10;
    `vector constructor iterator'(
      v14 + 8,
      1584LL,
      (unsigned int)v10,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 5027) = v16;
  if ( v16 )
  {
    v17 = v9[509];
    if ( (v17 & 0x20) != 0 )
    {
      *((_BYTE *)this + 40936) ^= (*((_BYTE *)this + 40936) ^ (v17 >> 5)) & 2;
      v18 = *((_BYTE *)this + 40936) ^ (*((_BYTE *)this + 40936) ^ (v9[509] >> 5)) & 4;
      *((_BYTE *)this + 40936) = v18;
      if ( (v18 & 4) != 0 )
      {
        if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
          || (v19 = *(_DWORD *)(*((_QWORD *)this + 3) + 348LL), (v19 & 4) != 0)
          || (v19 & 8) != 0 )
        {
          v20 = 0;
        }
        else
        {
          v20 = 8;
        }
        v18 = v20 | v18 & 0xF7;
        *((_BYTE *)this + 40936) = v18;
      }
      if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
        *((_BYTE *)this + 40936) = v18 | 0x80;
    }
    v21 = 0;
    v22 = 0;
    v123 = 0;
    *((_BYTE *)this + 4624) = (v9[508] & 0x20) == 0;
    if ( (_DWORD)v10 )
    {
      v118.Data = 0LL;
      v23 = 0LL;
      v24 = (_DWORD *)((char *)this + 372);
      v25 = 0LL;
      p_PagingBufferSegmentId = &a3->PagingBufferSegmentId;
      while ( 1 )
      {
        VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v22);
        GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v22);
        v30 = *((_QWORD *)this + 5027);
        v31 = GpuMmuCaps;
        *(_DWORD *)(v23 + v30 + 20) = v123;
        *(_DWORD *)(v23 + v30 + 24) = *(p_PagingBufferSegmentId - 4);
        v32 = *(p_PagingBufferSegmentId - 4);
        if ( (unsigned int)v32 > 0x20 )
          break;
        if ( *p_PagingBufferSegmentId > (unsigned int)v32 )
        {
          v81 = WdLogNewEntry5_WdAssertion(v32, v30, v28);
          *(_QWORD *)(v81 + 24) = 1539LL;
          goto LABEL_65;
        }
        v33 = v32 + v123;
        v123 = v33;
        if ( v33 >= 0xFFFE )
        {
          v81 = WdLogNewEntry5_WdAssertion(v32, v30, v28);
          *(_QWORD *)(v81 + 24) = 1546LL;
          goto LABEL_65;
        }
        v34 = (char *)v118.Data;
        *((_BYTE *)v118.Data + (unsigned __int64)this + 52) = *(_BYTE *)p_PagingBufferSegmentId;
        *(v24 - 64) = p_PagingBufferSegmentId[1];
        *v24 = p_PagingBufferSegmentId[2];
        *(_BYTE *)(v23 + v30 + 436) ^= (*(_BYTE *)(v23 + v30 + 436) ^ (2 * *(_BYTE *)(v25 + v29 + 16))) & 2;
        v35 = *(_BYTE *)(v23 + v30 + 436) ^ (*(_BYTE *)(v23 + v30 + 436) ^ (*(_DWORD *)(v25 + v29 + 16) >> 1)) & 1;
        *(_BYTE *)(v23 + v30 + 436) = v35;
        if ( (v35 & 3) != 0 )
        {
          ++*(_DWORD *)(v23 + v30 + 24);
          v36 = v33;
          v123 = v33 + 1;
        }
        else
        {
          v36 = -1;
        }
        v37 = *(_DWORD *)(v23 + v30 + 24);
        *(_WORD *)(v23 + v30 + 28) = v36;
        *(_DWORD *)(v23 + v30 + 16) = (1 << v37) - 1;
        if ( v31 )
          *((_BYTE *)this + 40169) &= (*((_BYTE *)v31 + 20) & 1) == 0;
        v38 = *((_BYTE *)this + 40937);
        ++v22;
        v39 = *(_DWORD *)(v25 + v29 + 16) >> 5;
        ++v24;
        v25 += 360LL;
        v118.Data = v34 + 1;
        v23 += 1584LL;
        p_PagingBufferSegmentId += 10;
        *((_BYTE *)this + 40937) = v38 ^ (v38 ^ (v38 | (16 * v39))) & 0x10;
        if ( v22 >= (unsigned int)v10 )
        {
          v21 = v123;
          goto LABEL_30;
        }
      }
      v81 = WdLogNewEntry5_WdAssertion(v32, v30, v28);
      *(_QWORD *)(v81 + 24) = 1534LL;
      goto LABEL_65;
    }
LABEL_30:
    if ( dword_1C0051360 == 2 )
      v40 = (*(_DWORD *)(*((_QWORD *)this + 3) + 2020LL) & 4) != 0;
    else
      v40 = dword_1C0051360 == 1;
    *((_BYTE *)this + 7144) = v40;
    *((_QWORD *)this + 5576) = qword_1C0051468;
    v41 = dword_1C005131C;
    if ( dword_1C005131C )
    {
      v83 = 360LL * (unsigned int)dword_1C005131C;
      if ( !is_mul_ok((unsigned int)dword_1C005131C, 0x168uLL) )
        v83 = -1LL;
      v84 = operator new[](v83, 0x6D4D6956u, (POOL_TYPE)512);
      *((_QWORD *)this + 984) = v84;
      if ( v84 )
      {
        *((_DWORD *)this + 1970) = 0;
        *((_DWORD *)this + 1971) = 0;
        *((_DWORD *)this + 1966) = v41;
      }
    }
    *((_QWORD *)this + 876) = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    v42 = (HANDLE *)((char *)this + 7016);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v45) = ZwOpenSection((PHANDLE)this + 877, 0xF001Fu, &ObjectAttributes);
    if ( (int)v45 < 0 )
    {
      v85 = WdLogNewEntry5_WdAssertion(v44, v43, v46);
      *(_QWORD *)(v85 + 24) = 1648LL;
      WdLogEvent5_WdAssertion(v85);
    }
    else
    {
      v47 = 8LL * v21;
      if ( !is_mul_ok(v21, 8uLL) )
        v47 = -1LL;
      v48 = operator new[](v47, 0x36306956u, (POOL_TYPE)512);
      *((_QWORD *)this + 464) = v48;
      if ( v48 )
      {
        v53 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
        if ( v53 )
        {
          v54 = 0;
          if ( (_DWORD)v10 )
          {
            p_pSegmentDescriptor = &a3->pSegmentDescriptor;
            while ( 1 )
            {
              v56 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
              v57 = *((_QWORD *)this + 5027) + 1584LL * v54;
              *(_OWORD *)(v57 + 496) = 0LL;
              *(_OWORD *)(v57 + 512) = 0LL;
              *(_OWORD *)(v57 + 528) = 0LL;
              inited = VIDMM_GLOBAL::InitSegments(this, v54, (struct VIDMM_PHYSICAL_ADAPTER *)v57, v56, &v119);
              v45 = inited;
              if ( inited < 0 )
                break;
              LODWORD(v117) = v54;
              Name = 0LL;
              v61 = *((_QWORD *)a2 + 2);
              LODWORD(Data) = *(_DWORD *)(v61 + 316);
              LODWORD(v45) = RtlStringCbPrintfW(
                               v53,
                               0x208uLL,
                               L"luid_0x%08X_0x%08X_phys_%u",
                               *(unsigned int *)(v61 + 320),
                               Data,
                               v117);
              if ( (int)v45 < 0
                || (RtlInitUnicodeString(&Name, v53),
                    v118.Data = (const void *)v57,
                    v118.Size = 1584,
                    LODWORD(v45) = PcwCreateInstance(
                                     (PPCW_INSTANCE *)(v57 + 1576),
                                     GpuPerformanceCounterSetAdapterMemory,
                                     &Name,
                                     1u,
                                     &v118),
                    (int)v45 < 0) )
              {
                v92 = WdLogNewEntry5_WdAssertion(v63, v62, v64);
                WdLogEvent5_WdAssertion(v92);
                goto LABEL_44;
              }
              ++v54;
              p_pSegmentDescriptor += 5;
              if ( v54 >= (unsigned int)v10 )
                goto LABEL_44;
            }
            v93 = WdLogNewEntry5_WdWarning(v60, v59);
            *(_QWORD *)(v93 + 24) = v45;
            WdLogEvent5_WdWarning(v93);
LABEL_44:
            v21 = v123;
          }
          operator delete(v53);
          if ( (int)v45 < 0 )
            goto LABEL_85;
          v12 = v119 + qword_1C00511D8 < *(_QWORD *)(*((_QWORD *)this + 3) + 2592LL);
          *((_DWORD *)this + 926) = v21;
          v66 = (*((_BYTE *)this + 40936) & 2) == 0;
          *((_BYTE *)this + 40168) = v12;
          if ( v66 )
          {
LABEL_47:
            LODWORD(v45) = VIDMM_GLOBAL::CreateWorkerThread(this);
            if ( (int)v45 >= 0 )
            {
              ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              v70 = VIDMM_PARTITION::_PartitionTree;
              i = 0LL;
              while ( v70 )
              {
                i = (VIDMM_PARTITION *)v70;
                v70 = v70->Children[0];
              }
              while ( i )
              {
                v72 = VIDMM_PARTITION::EnsureAdapter(i, this);
                v45 = v72;
                if ( v72 < 0 )
                {
                  v115 = (_QWORD *)WdLogNewEntry5_WdAssertion(v74, v73, v75);
                  v115[3] = this;
                  v115[4] = i;
                  v115[5] = v45;
                  WdLogEvent5_WdAssertion(v115);
                  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                  goto LABEL_85;
                }
                v114 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
                v80 = i;
                if ( v114 )
                {
                  v79 = *v114;
                  for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v79; v79 = *(VIDMM_PARTITION **)v79 )
                    i = v79;
                }
                else
                {
                  while ( 1 )
                  {
                    i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !i || *(VIDMM_PARTITION **)i == v80 )
                      break;
                    v80 = i;
                  }
                }
              }
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              *((_QWORD *)this + 988) = MEMORY[0xFFFFF78000000014];
              *((_QWORD *)this + 989) = MEMORY[0xFFFFF78000000014];
              ExAcquirePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
              v76 = (_QWORD *)qword_1C0051838;
              v77 = (_QWORD *)((char *)this + 44712);
              if ( *(struct _LIST_ENTRY **)qword_1C0051838 != &VIDMM_GLOBAL::_AdapterListHead )
                __fastfail(3u);
              *v77 = &VIDMM_GLOBAL::_AdapterListHead;
              v77[1] = v76;
              *v76 = v77;
              qword_1C0051838 = (__int64)v77;
              ExReleasePushLockExclusiveEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
              return (unsigned int)v45;
            }
            v113 = WdLogNewEntry5_WdAssertion(v68, v67, v69);
            *(_QWORD *)(v113 + 24) = 1816LL;
            WdLogEvent5_WdAssertion(v113);
            goto LABEL_85;
          }
          if ( !dword_1C00513AC )
            goto LABEL_111;
          v94 = (unsigned int)dword_1C00513AC;
          v95 = 24LL * (unsigned int)dword_1C00513AC;
          if ( !is_mul_ok((unsigned int)dword_1C00513AC, 0x18uLL) )
            v95 = -1LL;
          v12 = __CFADD__(v95, 8LL);
          v96 = v95 + 8;
          if ( v12 )
            v96 = -1LL;
          v97 = operator new(v96, 0x32356956u, v65, PagedPool);
          if ( v97 )
            *v97++ = v94;
          *((_QWORD *)this + 5123) = v97;
          if ( !v97 )
          {
            v87 = WdLogNewEntry5_WdAssertion(v99, v98, v100);
            *(_QWORD *)(v87 + 24) = 1741LL;
            goto LABEL_84;
          }
          v101 = 48LL * (unsigned int)dword_1C00513B0;
          if ( !is_mul_ok((unsigned int)dword_1C00513B0, 0x30uLL) )
            v101 = -1LL;
          v102 = operator new(v101, 0x32356956u, v100, PagedPool);
          *((_QWORD *)this + 5128) = v102;
          if ( v102 )
          {
LABEL_111:
            *((_DWORD *)this + 10233) = 0;
            v106 = 0;
            *((_BYTE *)this + 40936) &= 0xBEu;
            LOBYTE(v107) = 0;
            if ( (_DWORD)v10 )
            {
              v108 = 0LL;
              while ( 1 )
              {
                v109 = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v106);
                v110 = (unsigned int *)(v108 + *((_QWORD *)this + 5027));
                LODWORD(v45) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                                 (VIDMM_PHYSICAL_ADAPTER *)v110,
                                 this,
                                 v106,
                                 (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v110[5]),
                                 v109,
                                 v111,
                                 v110[6]);
                if ( (int)v45 < 0 )
                  break;
                v107 = v110[17];
                if ( v107 <= *((_DWORD *)this + 10233) )
                  LOBYTE(v107) = *((_DWORD *)this + 10233);
                else
                  *((_DWORD *)this + 10233) = v107;
                if ( v110[107] == 1 )
                  *((_BYTE *)this + 40936) |= 0x40u;
                if ( (*(_DWORD *)v109 & 0x40) != 0 )
                  *((_BYTE *)this + 40936) |= 1u;
                ++v106;
                v108 += 1584LL;
                if ( v106 >= (unsigned int)v10 )
                  goto LABEL_122;
              }
            }
            else
            {
LABEL_122:
              if ( a4 >= 0x5023 )
                v112 = dword_1C00513B4;
              else
                v112 = 4096 << v107;
              *((_DWORD *)this + 10245) = v112;
              LODWORD(v45) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40384), this);
              if ( (int)v45 >= 0 )
                goto LABEL_47;
            }
LABEL_85:
            v42 = (HANDLE *)((char *)this + 7016);
            goto LABEL_86;
          }
          v87 = WdLogNewEntry5_WdAssertion(v104, v103, v105);
          *(_QWORD *)(v87 + 24) = 1748LL;
        }
        else
        {
          v87 = WdLogNewEntry5_WdAssertion(v51, v50, v52);
        }
LABEL_84:
        WdLogEvent5_WdAssertion(v87);
        LODWORD(v45) = -1073741801;
        goto LABEL_85;
      }
      _InterlockedIncrement(&dword_1C00516F4);
      v86 = WdLogNewEntry5_WdLowResource(v49);
      *(_QWORD *)(v86 + 24) = 1660LL;
      WdLogEvent5_WdLowResource(v86);
      LODWORD(v45) = -1073741801;
    }
LABEL_86:
    v88 = (_QWORD *)*((_QWORD *)this + 464);
    if ( v88 )
    {
      v89 = 0LL;
      if ( v123 )
      {
        v90 = (_QWORD *)*((_QWORD *)this + 464);
        do
        {
          v91 = (void (__fastcall ***)(_QWORD, __int64))v88[v89];
          if ( v91 )
          {
            (**v91)(v88[v89], 1LL);
            v88 = (_QWORD *)*((_QWORD *)this + 464);
            v90 = v88;
          }
          ++v89;
        }
        while ( v89 < v123 );
        v88 = v90;
      }
      operator delete(v88);
      *((_QWORD *)this + 464) = 0LL;
    }
    VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
    if ( *v42 )
    {
      ZwClose(*v42);
      *v42 = 0LL;
    }
    operator delete(*((void **)this + 876));
    *((_QWORD *)this + 876) = 0LL;
    return (unsigned int)v45;
  }
  _InterlockedIncrement(&dword_1C00516BC);
  v82 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v82 + 24) = 1492LL;
  WdLogEvent5_WdLowResource(v82);
  return 3221225495LL;
}
