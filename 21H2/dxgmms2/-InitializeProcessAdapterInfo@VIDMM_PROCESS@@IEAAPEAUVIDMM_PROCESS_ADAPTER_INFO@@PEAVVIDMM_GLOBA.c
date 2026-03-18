/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009CD60
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0013410 (RtlStringCbPrintfW.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001430C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014B6C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C009B500 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009D21C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C009D380 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A2170 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2)
{
  unsigned __int64 v2; // rbp
  int v5; // r13d
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // r15
  __int64 v14; // rax
  CVirtualAddressAllocator *v15; // r10
  __int64 v16; // r14
  __int64 v17; // rbp
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rbp
  __int64 v20; // r12
  bool v21; // zf
  wchar_t *v22; // r14
  unsigned int v23; // ebp
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v24; // r15d
  __int64 v25; // r13
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v27; // rax
  struct VIDMM_PARTITION **v28; // r15
  NTSTATUS v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  CVirtualAddressAllocator *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+28h] [rbp-80h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  struct _PCW_DATA v45; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  NTSTATUS v48; // [rsp+B8h] [rbp+10h]
  wchar_t *pszDest; // [rsp+C0h] [rbp+18h]

  v2 = *((unsigned int *)a2 + 926);
  v5 = 0;
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(2760LL, 0x33316956u, 256LL);
  if ( !v6 || (v7 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6), (v8 = v7) == 0LL) )
  {
    _InterlockedAdd(&dword_1C006E79C, 1u);
    WdLogSingleEntry1(6LL, 645LL);
    DxgkLogInternalTriageEvent(v41, 262145LL);
    return 0LL;
  }
  *((_DWORD *)v7 + 3) = v2;
  v9 = 184 * v2;
  v10 = (unsigned int)v2;
  if ( !is_mul_ok(v2, 0xB8uLL) )
    v9 = -1LL;
  v11 = (char *)operator new[](v9, 0x34316956u, 256LL);
  v12 = v11;
  if ( v11 )
    `vector constructor iterator'(
      v11,
      184LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v12 = 0LL;
  v13 = (_QWORD *)((char *)v8 + 16);
  *((_QWORD *)v8 + 2) = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_1C006E7A0, 1u);
    WdLogSingleEntry1(6LL, 658LL);
    v38 = 262145LL;
LABEL_43:
    DxgkLogInternalTriageEvent(v37, v38);
    goto LABEL_44;
  }
  if ( (*((_BYTE *)a2 + 40936) & 2) != 0 && ((_DWORD)this[12] & 2) == 0 )
  {
    v14 = operator new(152LL, 0x4B677844u, 256LL);
    v15 = (CVirtualAddressAllocator *)v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 56) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      *(_DWORD *)(v14 + 72) = 0;
      *(_DWORD *)(v14 + 76) = 64;
      *(_DWORD *)(v14 + 80) = 64;
      *(_QWORD *)(v14 + 136) = v14 + 128;
      *(_QWORD *)(v14 + 128) = v14 + 128;
      *(_QWORD *)(v14 + 96) = 0LL;
      *(_QWORD *)(v14 + 104) = 0LL;
      *(_QWORD *)(v14 + 112) = 0LL;
      *(_QWORD *)(v14 + 120) = 0LL;
      *(_DWORD *)(v14 + 144) = 0;
    }
    else
    {
      v15 = 0LL;
    }
    *((_QWORD *)v8 + 63) = v15;
    if ( v15 )
    {
      if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                  v15,
                  1LL << *((_DWORD *)a2 + 10232),
                  *((_DWORD *)a2 + 10245),
                  a2,
                  (struct VIDMM_PROCESS *)this) >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(1LL, 679LL);
    }
    else
    {
      WdLogSingleEntry1(1LL, 667LL);
    }
LABEL_42:
    v38 = 0x40000LL;
    goto LABEL_43;
  }
LABEL_14:
  if ( (_DWORD)v2 )
  {
    v16 = 0LL;
    v17 = 0LL;
    do
    {
      *(_QWORD *)(v16 + *v13) = this;
      *(_DWORD *)(*v13 + v16 + 8) = 0;
      *(_QWORD *)(*v13 + v16 + 16) = 0LL;
      *(_DWORD *)(*v13 + v16 + 168) = *(_DWORD *)(*v13 + v16 + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(*v13 + v16 + 24) = 0LL;
      *(_QWORD *)(*v13 + v16 + 32) = 0LL;
      v18 = (_QWORD *)(v16 + *v13 + 40LL);
      v18[1] = v18;
      *v18 = v18;
      memset((void *)(v17 + *v13 + 56LL), 0, 0x70uLL);
      v17 += 184LL;
      v16 += 184LL;
      --v10;
    }
    while ( v10 );
    v5 = 0;
  }
  v19 = *((unsigned int *)a2 + 1754);
  if ( (unsigned int)v19 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 0x128 )
      goto LABEL_44;
    *((_QWORD *)v8 + 6) = ExAllocatePool2(256LL, 296 * v19, 1265072196LL);
    v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
    *((_QWORD *)v8 + 6) = (char *)v8 + 56;
    if ( (_DWORD)v19 )
      memset((char *)v8 + 56, 0, 296 * v19);
  }
  v21 = *((_QWORD *)v8 + 6) == 0LL;
  *((_DWORD *)v8 + 88) = v19;
  if ( v21 )
  {
LABEL_44:
    v39 = (CVirtualAddressAllocator *)*((_QWORD *)v8 + 63);
    if ( v39 )
      CVirtualAddressAllocator::DestroyVaAllocator(v39);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v8);
    return 0LL;
  }
  pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  v22 = pszDest;
  if ( !pszDest )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_42;
  }
  v23 = 0;
  if ( *((_DWORD *)a2 + 1754) )
  {
    while ( 1 )
    {
      v24 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v25 = *((_QWORD *)v8 + 6) + 296LL * v23;
      *(_QWORD *)(v25 + 16) = v8;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v23, v24++, this[36]);
        v20 += 8LL;
        *(_QWORD *)(v20 + v25 + 16) = *((_QWORD *)SegmentGroupState + 4);
      }
      while ( v24 < 2 );
      v27 = *((_QWORD *)a2 + 3);
      v28 = this;
      v22 = pszDest;
      DestinationString = 0LL;
      LODWORD(v44) = v23;
      LODWORD(v43) = *(_DWORD *)(v27 + 404);
      LODWORD(Data) = *(_DWORD *)(v27 + 408);
      v20 = 0LL;
      v48 = RtlStringCbPrintfW(
              pszDest,
              0x208uLL,
              L"pid_%u_luid_0x%08X_0x%08X_phys_%u",
              *((unsigned int *)this + 2),
              Data,
              v43,
              v44);
      if ( v48 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v45.Data = (const void *)v25;
      v45.Size = 296;
      v29 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v25 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v45);
      v48 = v29;
      if ( v29 < 0 )
        break;
      if ( ++v23 >= *((_DWORD *)a2 + 1754) )
      {
        v5 = v29;
        goto LABEL_30;
      }
    }
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v40, 0x40000LL);
    v5 = v48;
  }
  else
  {
    v28 = this;
  }
LABEL_30:
  operator delete(v22);
  if ( v5 < 0 )
    goto LABEL_44;
  v30 = *((_DWORD *)v8 + 118);
  if ( dword_1C006E308 )
    v31 = v30 & 0xFFFFFFFE;
  else
    v31 = v30 | 1;
  *((_DWORD *)v8 + 118) = v31 | 6;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0 )
  {
    *((_DWORD *)v8 + 121) = 1;
  }
  *(_QWORD *)v8 = a2;
  *((_DWORD *)v8 + 2) = 1;
  *((_QWORD *)v8 + 5) = v28;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41040));
  v32 = (_QWORD *)((char *)a2 + 41088);
  v33 = *((_QWORD *)a2 + 5136);
  v34 = (_QWORD *)((char *)v8 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v33 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41088) )
    __fastfail(3u);
  *v34 = v33;
  *((_QWORD *)v8 + 4) = v32;
  *(_QWORD *)(v33 + 8) = v34;
  *v32 = v34;
  v35 = *((_QWORD *)a2 + 5588);
  *((_QWORD *)a2 + 5588) = v35 + 1;
  *((_QWORD *)v8 + 65) = v35;
  *((_QWORD *)a2 + 5131) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41040, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v8;
}
