/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C68 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C004B39C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C004B43C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C016BC84 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01E7508 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0317E84 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C037522C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  _QWORD *Pool2; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 v15; // rbx
  DXGCONTEXT *v16; // rax
  __int64 v17; // r10
  unsigned int v18; // edi
  __int64 v19; // r9
  char v20; // r11
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  char v24; // al
  int v25; // eax
  unsigned __int64 v26; // rcx
  struct _LOOKASIDE_LIST_EX *v27; // rax
  NTSTATUS v28; // eax
  char v29; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edx
  int v36; // edx
  unsigned int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  SIZE_T *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v47; // rax
  int v48; // eax
  __int64 v49; // r14
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v52; // rax
  int v53; // eax
  struct DXGGLOBAL *v54; // rax
  __int64 v55; // r14
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 result; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v62; // eax
  _QWORD *v63; // rdx
  _QWORD *v64; // r8
  _QWORD *v65; // rax
  int v66; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v67; // rax
  int v68; // eax
  struct DXGGLOBAL *Global; // rax
  enum _D3DKMT_CLIENTHINT v70; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v71; // ebx
  unsigned int v72; // esi
  unsigned int v73; // r14d
  __int64 v74; // rcx
  unsigned int v75; // edi
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v78; // rbx
  const wchar_t *v79; // r9
  __int64 v80; // r14
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rbx
  unsigned int v85; // ecx
  __int64 v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rcx
  bool v89; // al
  __m128i v90; // xmm1
  __m128i v91; // xmm1
  __m128i v92; // xmm1
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // eax
  PVOID PoolWithTag; // rax
  SIZE_T v99; // r8
  PVOID v100; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-168h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-168h]
  SIZE_T Size; // [rsp+28h] [rbp-160h]
  SIZE_T Sizea; // [rsp+28h] [rbp-160h]
  ULONG Tag[2]; // [rsp+30h] [rbp-158h]
  ULONG Taga[2]; // [rsp+30h] [rbp-158h]
  USHORT Depth[4]; // [rsp+38h] [rbp-150h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-150h]
  void *v109; // [rsp+40h] [rbp-148h]
  void *v110; // [rsp+40h] [rbp-148h]
  __int64 v112; // [rsp+88h] [rbp-100h]
  unsigned int v113; // [rsp+88h] [rbp-100h]
  _OWORD v115[3]; // [rsp+A0h] [rbp-E8h] BYREF
  _DXGKARG_CREATECONTEXT v116; // [rsp+D0h] [rbp-B8h] BYREF
  __m256i v117; // [rsp+120h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v112 = v5;
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v5, this, 1, *((_DWORD *)this + 98));
  if ( *(int *)(v5 + 2424) >= 9472 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1265072196LL, v6);
    *((_QWORD *)this + 60) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(6LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"DXGCONTEXT (0x%p) failed to allocate m_pDxgkrnlContextHandle",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *Pool2 = this;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v117, Current);
  v9 = HMGRTABLE::AllocHandle(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 280LL, this, 7LL, 0LL, 0);
  v10 = v9;
  *((_DWORD *)this + 6) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v117);
    return 3221225495LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 296) )
  {
    v13 = *(_QWORD *)(v11 + 280);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (unsigned int)v10 >> 30 == ((v14 >> 5) & 3) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v117);
  if ( *(_BYTE *)(v5 + 209) )
  {
    *((_BYTE *)this + 441) = 1;
    v70 = *((_DWORD *)this + 36);
    v71.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 101);
    v72 = *((_DWORD *)this + 99);
    v73 = *((_DWORD *)this + 98);
    v74 = *((_QWORD *)this + 2);
    v75 = *(_DWORD *)(v74 + 440);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v74 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v112 + 4344),
                       HostProcess,
                       v75,
                       v73,
                       v72,
                       v71,
                       v70,
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v80 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v81 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v80 + 248));
      v82 = ((unsigned int)v81 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v82 < *(_DWORD *)(v80 + 296) )
      {
        v83 = *(_QWORD *)(v80 + 280);
        if ( (((unsigned int)v81 >> 25) & 0x60) == (*(_BYTE *)(v83 + 16 * v82 + 8) & 0x60)
          && (*(_DWORD *)(v83 + 16 * v82 + 8) & 0x1F) != 0 )
        {
          v84 = 2 * ((v81 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v83 + 8 * v84 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v83 = *(_QWORD *)(v80 + 280);
          }
          *(_DWORD *)(v83 + 8 * v84 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v80 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v80 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v85 = *((_DWORD *)this + 6);
        v117 = *(__m256i *)((char *)this + 200);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v110) = v117.m256i_i32[2];
          *(_DWORD *)Deptha = v117.m256i_i32[1];
          Taga[0] = v117.m256i_i32[0];
          LODWORD(Sizea) = *((_DWORD *)this + 99);
          Flagsa[0] = *((_DWORD *)this + 98);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            HIDWORD(v117.m256i_i64[0]),
            &EventCreateContext,
            v117.m256i_i64[0],
            *((_QWORD *)this + 2),
            *(_QWORD *)Flagsa,
            Sizea,
            *(_QWORD *)Taga,
            *(_QWORD *)Deptha,
            v110,
            v117.m256i_i32[3],
            v117.m256i_i32[4],
            0,
            this,
            v85,
            0LL);
        }
      }
      return 0LL;
    }
    v78 = 943LL;
    WdLogSingleEntry1(2LL, 943LL);
    v79 = L"Failed to create context on the host";
    goto LABEL_125;
  }
  LODWORD(v15) = 0;
  memset(&v116, 0, sizeof(v116));
  if ( *(int *)(v5 + 2424) < 9472 )
    v16 = this;
  else
    v16 = (DXGCONTEXT *)*((_QWORD *)this + 60);
  *((_QWORD *)this + 24) = v16;
  v116.hContext = v16;
  v17 = *((unsigned int *)this + 98);
  v116.NodeOrdinal = *((_DWORD *)this + 98);
  v116.EngineAffinity = *((_DWORD *)this + 99);
  v116.pPrivateDriverData = a2;
  v18 = a3;
  v116.PrivateDriverDataSize = a3;
  v19 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v19 + 1869) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v116.Flags.Value |= 2u;
  v20 = *((_BYTE *)this + 438);
  v116.Flags.Value ^= (*(_BYTE *)&v116.Flags.0 ^ (unsigned __int8)(4 * v20)) & 4;
  v21 = *((unsigned int *)this + 101);
  if ( (v21 & 8) != 0 )
  {
    v21 = (unsigned int)v21 & 0xFFFFFFEF;
    *((_DWORD *)this + 101) = v21;
  }
  else
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    if ( (v21 & 0x10) != 0 )
    {
      if ( *(int *)(v22 + 2692) < 2500 )
      {
        v78 = 1012LL;
        WdLogSingleEntry1(2LL, 1012LL);
        v79 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
        goto LABEL_125;
      }
      v86 = 344LL * *((unsigned int *)this + 100);
      v87 = *(_QWORD *)(v86 + *(_QWORD *)(v22 + 2680) + 32);
      if ( !v87 || (*(_BYTE *)(74 * v17 + v87 + 68) & 1) == 0 )
      {
        v78 = 1018LL;
        WdLogSingleEntry1(2LL, 1018LL);
        v79 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
        goto LABEL_125;
      }
      if ( !v20 )
      {
        v78 = 1024LL;
        WdLogSingleEntry1(2LL, 1024LL);
        v79 = L"Only virtual contexts can use HwQueueSupported flag";
        goto LABEL_125;
      }
      if ( (unsigned int)v21 >= 0x40 )
      {
        v78 = 1030LL;
        WdLogSingleEntry1(2LL, 1030LL);
        v79 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_125;
      }
      v116.Flags.Value |= 0x10u;
      v88 = *(_QWORD *)(v86 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 2680LL) + 32);
      if ( v88 )
        v89 = (*(_BYTE *)(74 * v17 + v88 + 68) & 2) != 0;
      else
        v89 = 0;
      *((_BYTE *)this + 296) = v89;
      v18 = a3;
    }
    else
    {
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 2680) + 344LL * *((unsigned int *)this + 100) + 32);
      if ( v23 )
        v24 = *(_BYTE *)(74 * v17 + v23 + 68) & 1;
      else
        v24 = 0;
      if ( v24 )
      {
        v78 = 1042LL;
        WdLogSingleEntry1(2LL, 1042LL);
        v79 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
        goto LABEL_125;
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 2152LL) & 1) == 0 )
  {
    v116.hContext = *(HANDLE *)(v19 + 584);
    v90 = *(__m128i *)(v19 + 592);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 608);
    v116.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v90);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 608);
    v116.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v19 + 592));
    v91 = *(__m128i *)(v19 + 592);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 608);
    v91.m128i_i64[0] = _mm_srli_si128(v91, 8).m128i_u64[0];
    v26 = HIDWORD(v91.m128i_i64[0]);
    v116.ContextInfo.AllocationListSize = v91.m128i_u32[1];
    *(_OWORD *)v117.m256i_i8 = *(_OWORD *)(v19 + 592);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 608);
    v116.ContextInfo.PatchLocationListSize = v117.m256i_u32[4];
    v92 = *(__m128i *)(v19 + 592);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 608);
    v116.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(v92, 8));
    *((_DWORD *)this + 10) &= ~1u;
    goto LABEL_26;
  }
  if ( (v21 & 0x20) == 0 )
  {
    if ( (v21 & 8) != 0 )
    {
      v116.hContext = 0LL;
    }
    else
    {
      v25 = ADAPTER_RENDER::DdiCreateContext(*(ADAPTER_RENDER **)(v19 + 16), *(void **)(v19 + 584), &v116);
      v15 = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry1(2LL, v25);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateContext() failed with status 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    goto LABEL_25;
  }
  result = CheckNoKmdAccessPrivateData(v18, a2, 0xFF000003);
  LODWORD(v15) = result;
  if ( (int)result >= 0 )
  {
    v116.hContext = 0LL;
    v116.ContextInfo.DmaBufferPrivateDataSize = 264;
LABEL_25:
    *((_DWORD *)this + 10) |= 1u;
    LODWORD(v26) = v116.ContextInfo.AllocationListSize;
LABEL_26:
    if ( (int)v15 < 0 )
      return (unsigned int)v15;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2) && (_DWORD)v26 != 256 )
    {
      WdLogSingleEntry2(3LL, 256LL, (unsigned int)v26);
      v116.ContextInfo.AllocationListSize = 256;
    }
    *((_QWORD *)this + 23) = v116.hContext;
    *(DXGK_CONTEXTINFO *)((char *)this + 200) = v116.ContextInfo;
    if ( !*((_DWORD *)this + 52) )
    {
LABEL_32:
      v29 = (char)v116.ContextInfo.Caps.0;
      if ( (*(_BYTE *)&v116.ContextInfo.Caps.0 & 2) != 0 )
      {
        v30 = *((_QWORD *)this + 2);
        *(_BYTE *)(v30 + 1871) = 1;
        *(_BYTE *)(*(_QWORD *)(v30 + 40) + 337LL) = 1;
        v29 = (char)v116.ContextInfo.Caps.0;
      }
      LOBYTE(v21) = *((_BYTE *)this + 438);
      if ( (_BYTE)v21 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2680LL)
                        + 344LL * *((unsigned int *)this + 100)
                        + 32);
        if ( v31 )
          LOBYTE(v19) = *(_BYTE *)(74LL * *((unsigned int *)this + 98) + v31 + 73);
        else
          LOBYTE(v19) = 0;
        if ( v31 )
          v32 = *(_BYTE *)(74LL * *((unsigned int *)this + 98) + v31 + 72);
        else
          v32 = 0;
        if ( (v29 & 4) != 0 || (_BYTE)v19 && !v32 )
        {
          if ( !(_BYTE)v19 )
          {
            WdLogSingleEntry1(3LL, 1160LL);
            return 3221225473LL;
          }
          *((_BYTE *)this + 439) = 1;
        }
        else
        {
          *((_BYTE *)this + 440) = 1;
        }
      }
      else
      {
        LOBYTE(v21) = 0;
        if ( !*((_DWORD *)this + 50) )
        {
          WdLogSingleEntry1(1LL, 1171LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_bUseGpuVa || m_ContextInfo.DmaBufferSize",
            1171LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LOBYTE(v21) = *((_BYTE *)this + 438);
        }
        if ( !(_BYTE)v21 )
        {
          LOBYTE(v21) = 0;
          if ( !*((_DWORD *)this + 53) )
          {
            WdLogSingleEntry1(1LL, 1172LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_bUseGpuVa || m_ContextInfo.AllocationListSize",
              1172LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LOBYTE(v21) = *((_BYTE *)this + 438);
          }
          if ( !(_BYTE)v21 && !*((_DWORD *)this + 54) )
          {
            WdLogSingleEntry1(1LL, 1173LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_bUseGpuVa || m_ContextInfo.PatchLocationListSize",
              1173LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
      }
      if ( bTracingEnabled )
      {
        v33 = *((unsigned int *)this + 6);
        v117 = *(__m256i *)((char *)this + 200);
        v19 = *((_QWORD *)this + 2);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v109) = v117.m256i_i32[2];
          *(_DWORD *)Depth = v117.m256i_i32[1];
          Tag[0] = v117.m256i_i32[0];
          LODWORD(Size) = *((_DWORD *)this + 99);
          Flags[0] = *((_DWORD *)this + 98);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            HIDWORD(v117.m256i_i64[0]),
            &EventCreateContext,
            v117.m256i_i64[0],
            v19,
            *(_QWORD *)Flags,
            Size,
            *(_QWORD *)Tag,
            *(_QWORD *)Depth,
            v109,
            v117.m256i_i32[3],
            v117.m256i_i32[4],
            0,
            this,
            v33,
            0LL);
        }
      }
      v34 = *((_QWORD *)this + 2);
      if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
      {
        v117.m256i_i32[0] = 0;
        *(__int64 *)((char *)&v117.m256i_i64[1] + 4) = 0LL;
        v117.m256i_i32[6] = 0;
        v117.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v34 + 40) + 432LL);
        v117.m256i_i32[1] = *((_DWORD *)this + 98);
        v117.m256i_i32[2] = *((_DWORD *)this + 100);
        v117.m256i_i32[0] = 2
                          * (*((_DWORD *)this + 101) & 1 | (4
                                                          * (*((_DWORD *)this + 101) & 4 | (16
                                                                                          * (*((_DWORD *)this + 101) & 0x28 | 0x11)))));
        v94 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                                                               + 8LL)
                                                                                   + 224LL))(
                this,
                &v117,
                v21,
                v19);
        *((_QWORD *)this + 35) = v94;
        if ( v94 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            McTemplateK0pppp_EtwWriteTransfer(v95, v94, v96, this, v94, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
            v94 = *((_QWORD *)this + 35);
          }
          memset(v115, 0, sizeof(v115));
          v97 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                                                         + 8LL)
                                                                             + 232LL))(
                  0LL,
                  v94,
                  v115,
                  (char *)this + 288);
          v15 = v97;
          if ( v97 < 0 )
            goto LABEL_154;
LABEL_54:
          if ( !*((_BYTE *)this + 438) || *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2 )
          {
            v66 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
            v15 = v66;
            if ( v66 < 0 )
            {
LABEL_154:
              WdLogSingleEntry2(3LL, this, v15);
              return (unsigned int)v15;
            }
          }
          v43 = (SIZE_T *)((char *)this + 48);
          *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
          *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
          *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
          if ( *((_BYTE *)this + 438) )
          {
            if ( *((_QWORD *)this + 44) )
            {
              WdLogSingleEntry1(1LL, 1314LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"NULL == m_pCommandDmaBuffer",
                1314LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 436LL) & 0x10) != 0
              && a2
              && a3 == 16 )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              v62 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
                      -1LL,
                      (char *)this + 56,
                      0LL,
                      (char *)this + 48,
                      12288,
                      4);
              v49 = v62;
              if ( v62 < 0 )
                goto LABEL_165;
              v63 = (_QWORD *)a2[1];
              v64 = (_QWORD *)*a2;
              v65 = v63;
              if ( (unsigned __int64)v63 >= MmUserProbeAddress )
                v65 = (_QWORD *)MmUserProbeAddress;
              if ( !v63 || *v65 < 8uLL || !v64 )
              {
                WdLogSingleEntry2(3LL, this, -1073741811LL);
                return 3221225485LL;
              }
              if ( (unsigned __int64)v64 >= MmUserProbeAddress )
                v64 = (_QWORD *)MmUserProbeAddress;
              *v64 = *((_QWORD *)this + 7);
              if ( (unsigned __int64)v63 >= MmUserProbeAddress )
                v63 = (_QWORD *)MmUserProbeAddress;
              *v63 = *v43;
            }
          }
          else
          {
            v67 = DxgkGetVirtualMemoryInterface();
            v68 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v67)(
                    -1LL,
                    (char *)this + 56,
                    0LL,
                    (char *)this + 48,
                    12288,
                    4);
            v49 = v68;
            if ( v68 < 0 )
              goto LABEL_165;
            Global = DXGGLOBAL_GetGlobal();
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)Global + 1716),
                   *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v43, 0x4B677844u);
              *((_QWORD *)this + 8) = PoolWithTag;
              if ( !PoolWithTag )
              {
                v99 = *v43;
LABEL_168:
                WdLogSingleEntry3(3LL, this, v99, -1073741801LL);
                return 3221225495LL;
              }
            }
          }
          v44 = *((unsigned int *)this + 18);
          if ( (_DWORD)v44 )
          {
            v45 = (unsigned int)v44;
            v46 = 8 * v44;
            if ( v46 > 0xFFFFFFFF )
              goto LABEL_170;
            v43 = (SIZE_T *)((char *)this + 80);
            *((_QWORD *)this + 10) = (unsigned int)v46;
            v47 = DxgkGetVirtualMemoryInterface();
            v48 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v47)(
                    -1LL,
                    (char *)this + 88,
                    0LL,
                    (char *)this + 80,
                    12288,
                    4);
            v49 = v48;
            if ( v48 < 0 )
              goto LABEL_165;
            *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v43, 4u);
            if ( !*((_QWORD *)this + 12) )
            {
LABEL_118:
              WdLogSingleEntry2(3LL, this, -1073741801LL);
              return 3221225495LL;
            }
          }
          v50 = *((unsigned int *)this + 26);
          if ( !(_DWORD)v50 )
          {
LABEL_70:
            v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
            v56 = *((unsigned int *)this + 6);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v55 + 248));
            v57 = ((unsigned int)v56 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v57 < *(_DWORD *)(v55 + 296) )
            {
              v58 = *(_QWORD *)(v55 + 280);
              if ( (((unsigned int)v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60)
                && (*(_DWORD *)(v58 + 16 * v57 + 8) & 0x1F) != 0 )
              {
                v59 = 2 * ((v56 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v58 + 8 * v59 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry1(1LL, 217LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    217LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v58 = *(_QWORD *)(v55 + 280);
                }
                *(_DWORD *)(v58 + 8 * v59 + 8) &= ~0x2000u;
              }
            }
            *(_QWORD *)(v55 + 256) = 0LL;
            ExReleasePushLockExclusiveEx(v55 + 248, 0LL);
            KeLeaveCriticalRegion();
            return 0LL;
          }
          v45 = (unsigned int)v50;
          v51 = 24 * v50;
          if ( v51 <= 0xFFFFFFFF )
          {
            v43 = (SIZE_T *)((char *)this + 112);
            *((_QWORD *)this + 14) = (unsigned int)v51;
            v52 = DxgkGetVirtualMemoryInterface();
            v53 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v52)(
                    -1LL,
                    (char *)this + 120,
                    0LL,
                    (char *)this + 112,
                    12288,
                    4);
            v49 = v53;
            if ( v53 >= 0 )
            {
              *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v43, 4u);
              if ( *((_QWORD *)this + 17) )
              {
                v54 = DXGGLOBAL_GetGlobal();
                if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v54 + 1716),
                       *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
                {
                  v100 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
                  *((_QWORD *)this + 16) = v100;
                  if ( !v100 )
                  {
                    v99 = *((_QWORD *)this + 14);
                    goto LABEL_168;
                  }
                }
                goto LABEL_70;
              }
              goto LABEL_118;
            }
LABEL_165:
            WdLogSingleEntry3(3LL, this, *v43, v49);
            return (unsigned int)v49;
          }
LABEL_170:
          WdLogSingleEntry2(3LL, this, v45);
          return 3221225621LL;
        }
LABEL_164:
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        return 3221225495LL;
      }
      memset(&v117, 0, 24);
      v117.m256i_i32[3] = 0;
      *(__int64 *)((char *)&v117.m256i_i64[2] + 4) = *(unsigned int *)(*(_QWORD *)(v34 + 40) + 432LL);
      v117.m256i_i32[1] = *((_DWORD *)this + 98);
      v117.m256i_i32[2] = *((_DWORD *)this + 100);
      v35 = 2 * (*((_DWORD *)this + 101) & 1 | ((*((_DWORD *)this + 101) & 0x20) << 6));
      v117.m256i_i32[0] = v35;
      if ( *((_BYTE *)this + 438) )
        v117.m256i_i32[0] = v35 | 0x80;
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
LABEL_51:
        v41 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *))(*(_QWORD *)(*(_QWORD *)(v38 + 624) + 8LL) + 216LL))(
                this,
                &v117);
        *((_QWORD *)this + 32) = v41;
        if ( v41 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            McTemplateK0pppp_EtwWriteTransfer(v41, v40, v42, this, v41, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
          goto LABEL_54;
        }
        goto LABEL_164;
      }
      if ( v37 < 0x40 )
      {
        v117.m256i_i32[0] = v36 & 0xFFFFFBDF | (8 * (v37 & 4 | (16 * (v37 & 8))));
        v38 = *(_QWORD *)(v39 + 16);
        goto LABEL_51;
      }
      v78 = 1261LL;
      WdLogSingleEntry1(2LL, 1261LL);
      v79 = L"Context is setting non-zero Reserved flags at the creation time.";
LABEL_125:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v79, v78, 0LL, 0LL, 0LL, 0LL);
      return 3221225473LL;
    }
    v27 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x64507844u, 64LL, v19);
    *((_QWORD *)this + 62) = v27;
    if ( v27 )
    {
      v28 = ExInitializeLookasideListEx(
              v27,
              0LL,
              0LL,
              (POOL_TYPE)512,
              0,
              (unsigned int)(*((_DWORD *)this + 52) + 16),
              0x64507844u,
              0);
      v113 = v28;
      if ( v28 < 0 )
      {
        v93 = v28;
        WdLogSingleEntry1(2LL, v28);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to initialize lookaside list for private driver data 0x%x",
          v93,
          0LL,
          0LL,
          0LL,
          0LL);
        operator delete(*((void **)this + 62));
        *((_QWORD *)this + 62) = 0LL;
        return v113;
      }
      goto LABEL_32;
    }
    WdLogSingleEntry1(2LL, 1124LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate lookaside list for private driver data",
      1124LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
