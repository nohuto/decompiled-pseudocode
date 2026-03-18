/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0080E24
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00828C8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AA4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     RtlStringCbPrintfW @ 0x1C000ECC8 (RtlStringCbPrintfW.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0011AFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0011C9C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081478 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0082A88 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0083A08 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C0083C40 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0084B98 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  NTSTATUS v6; // r12d
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v10; // rbx
  unsigned __int64 v11; // r14
  SIZE_T v12; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rbp
  _QWORD *v18; // rcx
  unsigned int v19; // ebp
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  wchar_t *v23; // rbp
  __int64 v24; // r8
  unsigned int v25; // esi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v26; // r14d
  __int64 v27; // r15
  __int64 v28; // r12
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v30; // rcx
  struct VIDMM_PARTITION *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // eax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // r8
  CVirtualAddressAllocator *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  CVirtualAddressAllocator *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  CVirtualAddressAllocator *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v57; // [rsp+28h] [rbp-60h]
  __int64 v58; // [rsp+30h] [rbp-58h]
  struct _PCW_DATA v59; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF

  v3 = *((unsigned int *)a2 + 926);
  v6 = 0;
  v7 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x210uLL, 0x33316956u, a3, PagedPool);
  if ( v7 )
    v10 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v7);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C00516EC);
    v51 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v51 + 24) = 636LL;
    WdLogEvent5_WdLowResource(v51);
    return 0LL;
  }
  *((_DWORD *)v10 + 3) = v3;
  v11 = v3;
  v12 = 184 * v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v12 = -1LL;
  v13 = (char *)operator new(v12, 0x34316956u, v9, PagedPool);
  v15 = v13;
  if ( v13 )
    `vector constructor iterator'(
      v13,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v15 = 0LL;
  *((_QWORD *)v10 + 2) = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_1C00516F0);
    v52 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v52 + 24) = 649LL;
    WdLogEvent5_WdLowResource(v52);
LABEL_45:
    v53 = (CVirtualAddressAllocator *)*((_QWORD *)v10 + 63);
    if ( v53 )
      CVirtualAddressAllocator::DestroyVaAllocator(v53);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v10);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 40936) & 2) != 0 && ((_DWORD)this[12] & 2) == 0 )
  {
    v43 = (CVirtualAddressAllocator *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
    if ( v43 )
      v47 = CVirtualAddressAllocator::CVirtualAddressAllocator(v43);
    else
      v47 = 0LL;
    *((_QWORD *)v10 + 63) = v47;
    if ( !v47 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
      *(_QWORD *)(v54 + 24) = 658LL;
      goto LABEL_51;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                v47,
                1LL << *((_DWORD *)a2 + 10232),
                *((_DWORD *)a2 + 10245),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v49, v48, v50);
      *(_QWORD *)(v54 + 24) = 670LL;
LABEL_51:
      WdLogEvent5_WdAssertion(v54);
      goto LABEL_45;
    }
  }
  if ( (_DWORD)v3 )
  {
    v16 = 0LL;
    v17 = 0LL;
    do
    {
      *(_QWORD *)(v16 + *((_QWORD *)v10 + 2)) = this;
      *(_DWORD *)(v16 + *((_QWORD *)v10 + 2) + 8) = 0;
      *(_QWORD *)(v16 + *((_QWORD *)v10 + 2) + 16) = 0LL;
      *(_DWORD *)(v16 + *((_QWORD *)v10 + 2) + 168) = *(_DWORD *)(v16 + *((_QWORD *)v10 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v16 + *((_QWORD *)v10 + 2) + 24) = 0LL;
      *(_QWORD *)(v16 + *((_QWORD *)v10 + 2) + 32) = 0LL;
      v18 = (_QWORD *)(v16 + *((_QWORD *)v10 + 2) + 40LL);
      v18[1] = v18;
      *v18 = v18;
      memset((void *)(v17 + *((_QWORD *)v10 + 2) + 56LL), 0, 0x70uLL);
      v17 += 184LL;
      v16 += 184LL;
      --v11;
    }
    while ( v11 );
  }
  v19 = *((_DWORD *)a2 + 1750);
  if ( v19 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 0x128 )
      goto LABEL_45;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 296LL * v19, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (char *)v10 + 56;
  }
  *((_QWORD *)v10 + 6) = PoolWithTag;
  *((_DWORD *)v10 + 88) = v19;
  if ( !PoolWithTag )
    goto LABEL_45;
  memset(PoolWithTag, 0, 296LL * v19);
  if ( !*((_QWORD *)v10 + 6) )
    goto LABEL_45;
  v23 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v23 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v22, v21, v24);
    goto LABEL_51;
  }
  v25 = 0;
  if ( *((_DWORD *)a2 + 1750) )
  {
    while ( 1 )
    {
      v26 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v27 = *((_QWORD *)v10 + 6) + 296LL * v25;
      v28 = 0LL;
      *(_QWORD *)(v27 + 16) = v10;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v25, v26++, this[36]);
        v28 += 8LL;
        *(_QWORD *)(v28 + v27 + 16) = *((_QWORD *)SegmentGroupState + 4);
      }
      while ( v26 < 2 );
      v30 = *((_QWORD *)a2 + 3);
      v31 = this[1];
      DestinationString = 0LL;
      LODWORD(v58) = v25;
      LODWORD(v57) = *(_DWORD *)(v30 + 316);
      LODWORD(Data) = *(_DWORD *)(v30 + 320);
      v6 = RtlStringCbPrintfW(v23, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", v31, Data, v57, v58);
      if ( v6 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v23);
      v59.Data = (const void *)v27;
      v59.Size = 296;
      v6 = PcwCreateInstance(
             (PPCW_INSTANCE *)(v27 + 248),
             GpuPerformanceCounterSetProcessMemory,
             &DestinationString,
             1u,
             &v59);
      if ( v6 < 0 )
        break;
      if ( ++v25 >= *((_DWORD *)a2 + 1750) )
        goto LABEL_24;
    }
    v55 = WdLogNewEntry5_WdAssertion(v33, v32, v34);
    WdLogEvent5_WdAssertion(v55);
  }
LABEL_24:
  operator delete(v23);
  if ( v6 < 0 )
    goto LABEL_45;
  v35 = *((_DWORD *)v10 + 118);
  if ( dword_1C0051298 )
    v36 = v35 & 0xFFFFFFF8 | 6;
  else
    v36 = v35 | 7;
  *((_DWORD *)v10 + 118) = v36;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 346) : 0 )
      *((_DWORD *)v10 + 121) = 1;
  }
  *(_QWORD *)v10 = a2;
  *((_DWORD *)v10 + 2) = 1;
  *((_QWORD *)v10 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41040));
  v38 = (_QWORD *)((char *)a2 + 41088);
  v39 = *((_QWORD *)a2 + 5136);
  v40 = (_QWORD *)((char *)v10 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v39 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41088) )
    __fastfail(3u);
  *v40 = v39;
  *((_QWORD *)v10 + 4) = v38;
  *(_QWORD *)(v39 + 8) = v40;
  *v38 = v40;
  v41 = *((_QWORD *)a2 + 5587);
  *((_QWORD *)a2 + 5587) = v41 + 1;
  *((_QWORD *)v10 + 65) = v41;
  *((_QWORD *)a2 + 5131) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41040, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v10;
}
