/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00F2188
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F2020 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000A264 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C003DF18 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DFB8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00F16A4 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C014FDBC (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C0242C88 (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // r15
  struct _KTHREAD **Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 v15; // rbx
  DXGCONTEXT *v16; // rax
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int8 v19; // r11
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r11
  char v25; // al
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 AllocationListSize; // rdx
  struct _LOOKASIDE_LIST_EX *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  char v34; // r10
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // r9
  __int64 v45; // r10
  unsigned __int64 *v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // r8
  SIZE_T *v49; // r15
  ULONG64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  SIZE_T *v53; // r15
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r12
  HANDLE v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  SIZE_T *v63; // rbx
  NTSTATUS v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r15
  HANDLE v69; // rax
  __int64 v70; // rdx
  struct DXGADAPTER *v71; // rbx
  struct DXGGLOBAL *v72; // rax
  __int64 v73; // r14
  unsigned __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 result; // rax
  NTSTATUS v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  struct DXGADAPTER *v85; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v87; // rax
  _OWORD *PoolWithTag; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  NTSTATUS VirtualMemory; // eax
  unsigned __int64 *v94; // rax
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  SIZE_T v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned int v102; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r15
  unsigned __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r15
  __int64 v118; // rcx
  __int64 v119; // rcx
  bool v120; // al
  __int64 v121; // rax
  __m128i v122; // xmm1
  __m128i v123; // xmm1
  _QWORD *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rax
  PVOID v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  _QWORD *v139; // rax
  PVOID v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  ULONG Flags[2]; // [rsp+20h] [rbp-198h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-198h]
  SIZE_T Size; // [rsp+28h] [rbp-190h]
  SIZE_T Sizea; // [rsp+28h] [rbp-190h]
  ULONG Tag[2]; // [rsp+30h] [rbp-188h]
  ULONG Taga[2]; // [rsp+30h] [rbp-188h]
  __int64 Depth; // [rsp+38h] [rbp-180h]
  __int64 Deptha; // [rsp+38h] [rbp-180h]
  void *v152; // [rsp+40h] [rbp-178h]
  _BYTE v154[16]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v155; // [rsp+A0h] [rbp-118h]
  _QWORD *v156; // [rsp+A8h] [rbp-110h]
  _OWORD v157[3]; // [rsp+B0h] [rbp-108h] BYREF
  _DXGKARG_CREATECONTEXT v158; // [rsp+E0h] [rbp-D8h] BYREF
  __m256i v159; // [rsp+130h] [rbp-88h] BYREF
  __int128 v160; // [rsp+150h] [rbp-68h] BYREF
  __int64 v161; // [rsp+160h] [rbp-58h]
  int v162; // [rsp+168h] [rbp-50h]

  v156 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v5, this, 1, *((_DWORD *)this + 102));
  if ( *(int *)(v5 + 2304) >= 9472 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( PoolWithTag )
      *PoolWithTag = 0LL;
    *((_QWORD *)this + 62) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v97 = WdLogNewEntry5_WdLowResource(v90, v89, v91, v92);
      *(_QWORD *)(v97 + 24) = this;
      WdLogEvent5_WdLowResource(v97);
      return 3221225495LL;
    }
    *(_QWORD *)PoolWithTag = this;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v154, Current);
  Flags[0] = 0;
  v7 = HMGRTABLE::AllocHandle(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 240LL, this, 7LL);
  v10 = v7;
  *((_DWORD *)this + 6) = v7;
  if ( !v7 )
  {
    v100 = WdLogNewEntry5_WdWarning(0LL, v8, v9);
    *(_QWORD *)(v100 + 24) = this;
    *(_QWORD *)(v100 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v100);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v154);
    return 3221225495LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v12 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 256) )
  {
    v13 = *(_QWORD *)(v11 + 240);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( v10 >> 30 == ((v14 >> 5) & 3) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * (((unsigned __int64)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v154);
  if ( *(_BYTE *)(v5 + 209) )
  {
    *((_BYTE *)this + 457) = 1;
    v101 = *((_QWORD *)this + 2);
    v102 = *(_DWORD *)(v101 + 440);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v101 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4208),
                       HostProcess,
                       v102,
                       *((_DWORD *)this + 102),
                       *((_DWORD *)this + 103),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 420),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v109 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v110 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v109 + 208));
      v111 = ((unsigned int)v110 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v111 < *(_DWORD *)(v109 + 256) )
      {
        v112 = *(_QWORD *)(v109 + 240);
        v113 = ((unsigned int)v110 >> 25) & 0x60;
        if ( (((unsigned int)v110 >> 25) & 0x60) == (*(_BYTE *)(v112 + 16 * v111 + 8) & 0x60)
          && (*(_DWORD *)(v112 + 16 * v111 + 8) & 0x1F) != 0 )
        {
          v114 = 2 * ((v110 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v112 + 8 * v114 + 8) & 0x2000) == 0 )
          {
            v115 = WdLogNewEntry5_WdAssertion(v113, v112);
            *(_QWORD *)(v115 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v115);
            v112 = *(_QWORD *)(v109 + 240);
          }
          *(_DWORD *)(v112 + 8 * v114 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v109 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v109 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v159 = *(__m256i *)((char *)this + 200);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v152) = v159.m256i_i32[2];
          LODWORD(Deptha) = v159.m256i_i32[1];
          Taga[0] = v159.m256i_i32[0];
          LODWORD(Sizea) = *((_DWORD *)this + 103);
          Flagsa[0] = *((_DWORD *)this + 102);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            HIDWORD(v159.m256i_i64[0]),
            &EventCreateContext,
            v159.m256i_i64[0],
            *((_QWORD *)this + 2),
            *(_QWORD *)Flagsa,
            Sizea,
            *(_QWORD *)Taga,
            Deptha,
            v152,
            v159.m256i_i32[3],
            v159.m256i_i32[4],
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v107 = WdLogNewEntry5_WdError(v106, v105);
    *(_QWORD *)(v107 + 24) = 984LL;
    goto LABEL_123;
  }
  LODWORD(v15) = 0;
  memset(&v158, 0, sizeof(v158));
  if ( *(int *)(v5 + 2304) >= 9472 )
    v16 = (DXGCONTEXT *)*((_QWORD *)this + 62);
  else
    v16 = this;
  *((_QWORD *)this + 24) = v16;
  v158.hContext = v16;
  v17 = *((unsigned int *)this + 102);
  v158.NodeOrdinal = *((_DWORD *)this + 102);
  v158.EngineAffinity = *((_DWORD *)this + 103);
  v158.pPrivateDriverData = a2;
  v158.PrivateDriverDataSize = a3;
  v18 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v18 + 1869) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v158.Flags.Value |= 2u;
  v19 = *((_BYTE *)this + 454);
  v158.Flags.Value ^= (v158.Flags.Value ^ (4 * v19)) & 4;
  v20 = *((unsigned int *)this + 105);
  if ( (v20 & 8) != 0 )
  {
    v20 = (unsigned int)v20 & 0xFFFFFFEF;
    *((_DWORD *)this + 105) = v20;
    goto LABEL_18;
  }
  v21 = *(_QWORD *)(v18 + 16);
  if ( (v20 & 0x10) == 0 )
  {
    v22 = *(_QWORD *)(v21 + 16);
    v23 = *(_QWORD *)(v22 + 2560) + 360LL * *((unsigned int *)this + 104);
    v24 = *(_QWORD *)(v23 + 32);
    if ( v24 )
    {
      v22 = 74 * v17;
      v25 = *(_BYTE *)(74 * v17 + v24 + 68) & 1;
    }
    else
    {
      v25 = 0;
    }
    if ( !v25 )
      goto LABEL_18;
    v107 = WdLogNewEntry5_WdError(v22, v23);
    *(_QWORD *)(v107 + 24) = 1083LL;
LABEL_123:
    WdLogEvent5_WdError(v107);
    return 3221225473LL;
  }
  v116 = *(_QWORD *)(v21 + 16);
  if ( *(int *)(v116 + 2572) < 2500 )
  {
    v107 = WdLogNewEntry5_WdError(v21, v116);
    *(_QWORD *)(v107 + 24) = 1053LL;
    goto LABEL_123;
  }
  v117 = 360LL * *((unsigned int *)this + 104);
  v118 = *(_QWORD *)(v117 + *(_QWORD *)(v116 + 2560) + 32);
  if ( !v118 || (v116 = 74 * v17, (*(_BYTE *)(74 * v17 + v118 + 68) & 1) == 0) )
  {
    v107 = WdLogNewEntry5_WdError(v118, v116);
    *(_QWORD *)(v107 + 24) = 1059LL;
    goto LABEL_123;
  }
  if ( !v19 )
  {
    v107 = WdLogNewEntry5_WdError(v118, v116);
    *(_QWORD *)(v107 + 24) = 1065LL;
    goto LABEL_123;
  }
  if ( (unsigned int)v20 >= 0x20 )
  {
    v107 = WdLogNewEntry5_WdError(v118, v116);
    *(_QWORD *)(v107 + 24) = 1071LL;
    goto LABEL_123;
  }
  v158.Flags.Value |= 0x10u;
  v119 = *(_QWORD *)(v117 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 2560LL) + 32);
  if ( v119 )
    v120 = (*(_BYTE *)(v116 + v119 + 68) & 2) != 0;
  else
    v120 = 0;
  *((_BYTE *)this + 312) = v120;
LABEL_18:
  v26 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 2032LL);
  if ( (v26 & 1) != 0 )
  {
    if ( (v20 & 8) != 0 )
    {
      v158.hContext = 0LL;
    }
    else
    {
      v27 = ADAPTER_RENDER::DdiCreateContext(*(ADAPTER_RENDER **)(v18 + 16), *(void **)(v18 + 584), &v158);
      v15 = v27;
      if ( v27 < 0 )
      {
        v121 = WdLogNewEntry5_WdError(v26, v28);
        *(_QWORD *)(v121 + 24) = v15;
        WdLogEvent5_WdError(v121);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v158.ContextInfo.AllocationListSize;
  }
  else
  {
    v158.hContext = *(HANDLE *)(v18 + 584);
    v122 = *(__m128i *)(v18 + 592);
    v155 = *(_QWORD *)(v18 + 608);
    v158.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v122);
    v155 = *(_QWORD *)(v18 + 608);
    v158.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v18 + 592));
    v123 = *(__m128i *)(v18 + 592);
    v155 = *(_QWORD *)(v18 + 608);
    v123.m128i_i64[0] = _mm_srli_si128(v123, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v123.m128i_i64[0]);
    v158.ContextInfo.AllocationListSize = v123.m128i_u32[1];
    v155 = *(_QWORD *)(v18 + 608);
    v158.ContextInfo.PatchLocationListSize = v155;
    v158.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v18 + 592), 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v15 < 0 )
    return (unsigned int)v15;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v125 = WdLogNewEntry5_WdWarning(v26, AllocationListSize, v20);
    *(_QWORD *)(v125 + 24) = 256LL;
    *(_QWORD *)(v125 + 32) = v158.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v125);
    v158.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v158.hContext;
  *(DXGK_CONTEXTINFO *)((char *)this + 200) = v158.ContextInfo;
  if ( *((_DWORD *)this + 52) )
  {
    v30 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x64507844u, (POOL_TYPE)512);
    *((_QWORD *)this + 64) = v30;
    if ( !v30 )
    {
      v126 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v126 + 24) = 1153LL;
      WdLogEvent5_WdError(v126);
      return 3221225495LL;
    }
    v33 = ExInitializeLookasideListEx(
            v30,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            (unsigned int)(*((_DWORD *)this + 52) + 16),
            0x64507844u,
            0);
    v15 = v33;
    if ( v33 < 0 )
    {
      v127 = WdLogNewEntry5_WdError(v26, AllocationListSize);
      *(_QWORD *)(v127 + 24) = v15;
      WdLogEvent5_WdError(v127);
      operator delete(*((void **)this + 64));
      *((_QWORD *)this + 64) = 0LL;
      return (unsigned int)v15;
    }
  }
  v34 = (char)v158.ContextInfo.Caps.0;
  if ( (*(_BYTE *)&v158.ContextInfo.Caps.0 & 2) != 0 )
  {
    v35 = *((_QWORD *)this + 2);
    *(_BYTE *)(v35 + 1871) = 1;
    *(_BYTE *)(*(_QWORD *)(v35 + 40) + 297LL) = 1;
    v34 = (char)v158.ContextInfo.Caps.0;
  }
  LOBYTE(v20) = *((_BYTE *)this + 454);
  if ( (_BYTE)v20 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2560LL)
        + 360LL * *((unsigned int *)this + 104);
    v37 = *(_QWORD *)(v36 + 32);
    if ( v37 )
    {
      v36 = 74LL * *((unsigned int *)this + 102);
      LOBYTE(v18) = *(_BYTE *)(v36 + v37 + 73);
    }
    else
    {
      LOBYTE(v18) = 0;
    }
    if ( v37 )
    {
      v36 = 74LL * *((unsigned int *)this + 102);
      v38 = *(_BYTE *)(v36 + v37 + 72);
    }
    else
    {
      v38 = 0;
    }
    if ( (v34 & 4) != 0 || (_BYTE)v18 && !v38 )
    {
      if ( !(_BYTE)v18 )
      {
        v108 = WdLogNewEntry5_WdWarning(v36, v37, v20);
        *(_QWORD *)(v108 + 24) = 1189LL;
        WdLogEvent5_WdWarning(v108);
        return 3221225473LL;
      }
      *((_BYTE *)this + 455) = 1;
    }
    else
    {
      *((_BYTE *)this + 456) = 1;
    }
  }
  else
  {
    LOBYTE(v20) = 0;
    if ( !*((_DWORD *)this + 50) )
    {
      v128 = WdLogNewEntry5_WdAssertion(v26, AllocationListSize);
      *(_QWORD *)(v128 + 24) = 1200LL;
      WdLogEvent5_WdAssertion(v128);
      LOBYTE(v20) = *((_BYTE *)this + 454);
    }
    if ( !(_BYTE)v20 )
    {
      LOBYTE(v20) = 0;
      if ( !*((_DWORD *)this + 53) )
      {
        v129 = WdLogNewEntry5_WdAssertion(v26, AllocationListSize);
        *(_QWORD *)(v129 + 24) = 1201LL;
        WdLogEvent5_WdAssertion(v129);
        LOBYTE(v20) = *((_BYTE *)this + 454);
      }
      if ( !(_BYTE)v20 && !*((_DWORD *)this + 54) )
      {
        v130 = WdLogNewEntry5_WdAssertion(v26, AllocationListSize);
        *(_QWORD *)(v130 + 24) = 1202LL;
        WdLogEvent5_WdAssertion(v130);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v159 = *(__m256i *)((char *)this + 200);
    v18 = *((_QWORD *)this + 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(Depth) = v159.m256i_i32[1];
      Tag[0] = v159.m256i_i32[0];
      LODWORD(Size) = *((_DWORD *)this + 103);
      Flags[0] = *((_DWORD *)this + 102);
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        HIDWORD(v159.m256i_i64[0]),
        &EventCreateContext,
        v159.m256i_i64[0],
        v18,
        *(_QWORD *)Flags,
        Size,
        *(_QWORD *)Tag,
        Depth,
        v159.m256i_i32[2],
        v159.m256i_i32[3],
        v159.m256i_i32[4],
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  v39 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
  {
    v160 = 0LL;
    v161 = 0LL;
    v162 = 0;
    HIDWORD(v160) = 0;
    HIDWORD(v161) = *(_DWORD *)(*(_QWORD *)(v39 + 40) + 352LL);
    DWORD1(v160) = *((_DWORD *)this + 102);
    DWORD2(v160) = *((_DWORD *)this + 104);
    v40 = (2 * (unsigned __int8)*((_DWORD *)this + 105)) & 2;
    LODWORD(v160) = v40;
    if ( *((_BYTE *)this + 454) )
      LODWORD(v160) = v40 | 0x80;
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
LABEL_48:
      v47 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *))(*(_QWORD *)(*(_QWORD *)(v44 + 616) + 8LL) + 216LL))(
              this,
              &v160);
      *((_QWORD *)this + 34) = v47;
      if ( v47 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(
            v47,
            (__int64)v46,
            (__int64)v48,
            this,
            v47,
            *((_QWORD *)this + 23),
            *((_QWORD *)this + 24));
LABEL_51:
        if ( !*((_BYTE *)this + 454) || *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2 )
        {
          result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
          if ( (int)result < 0 )
            return result;
        }
        v49 = (SIZE_T *)((char *)this + 48);
        *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
        *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
        *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
        if ( *((_BYTE *)this + 454) )
        {
          if ( *((_QWORD *)this + 46) )
          {
            v134 = WdLogNewEntry5_WdAssertion(v47, v46);
            *(_QWORD *)(v134 + 24) = 1327LL;
            WdLogEvent5_WdAssertion(v134);
          }
          v50 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 348LL);
          if ( (v50 & 0x10) == 0 || !v156 || a3 != 16 )
            goto LABEL_58;
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)this + 7,
                            0LL,
                            (PSIZE_T)this + 6,
                            0x3000u,
                            4u);
          v15 = VirtualMemory;
          if ( VirtualMemory >= 0 )
          {
            v46 = (unsigned __int64 *)v156[1];
            v48 = (_QWORD *)*v156;
            v94 = v46;
            if ( (unsigned __int64)v46 >= MmUserProbeAddress )
              v94 = (unsigned __int64 *)MmUserProbeAddress;
            v95 = *v94;
            if ( !v46 || v95 < 8 || !v48 )
            {
              v96 = WdLogNewEntry5_WdWarning(v95, v46, v48);
              *(_QWORD *)(v96 + 24) = this;
              *(_QWORD *)(v96 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v96);
              return 3221225485LL;
            }
            if ( (unsigned __int64)v48 >= MmUserProbeAddress )
              v48 = (_QWORD *)MmUserProbeAddress;
            *v48 = *((_QWORD *)this + 7);
            v50 = MmUserProbeAddress;
            if ( (unsigned __int64)v46 >= MmUserProbeAddress )
              v46 = (unsigned __int64 *)MmUserProbeAddress;
            *v46 = *v49;
            goto LABEL_58;
          }
        }
        else
        {
          v80 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 7,
                  0LL,
                  (PSIZE_T)this + 6,
                  0x3000u,
                  4u);
          v15 = v80;
          if ( v80 >= 0 )
          {
            v84 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v85 = *(struct DXGADAPTER **)(v84 + 16);
            Global = DXGGLOBAL::GetGlobal(v84, v81);
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)Global + 1436),
                   v85) )
            {
              v135 = ExAllocatePoolWithTag(PagedPool, *v49, 0x4B677844u);
              *((_QWORD *)this + 8) = v135;
              if ( !v135 )
              {
                v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v46, v48);
                v98[3] = this;
                v99 = *v49;
LABEL_116:
                v98[4] = v99;
                v98[5] = -1073741801LL;
LABEL_117:
                WdLogEvent5_WdWarning(v98);
                return 3221225495LL;
              }
            }
LABEL_58:
            v51 = *((unsigned int *)this + 18);
            if ( (_DWORD)v51 )
            {
              v52 = 8 * v51;
              if ( v52 > 0xFFFFFFFF )
              {
                v137 = WdLogNewEntry5_WdWarning(v50, v46, v48);
                *(_QWORD *)(v137 + 24) = this;
                v138 = *((unsigned int *)this + 18);
                goto LABEL_168;
              }
              v53 = (SIZE_T *)((char *)this + 80);
              *((_QWORD *)this + 10) = (unsigned int)v52;
              v54 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 11,
                      0LL,
                      (PSIZE_T)this + 10,
                      0x3000u,
                      4u);
              v58 = v54;
              if ( v54 < 0 )
              {
                v136 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
                v136[3] = this;
                v136[4] = *v53;
                v136[5] = v58;
                WdLogEvent5_WdWarning(v136);
                return (unsigned int)v58;
              }
              v59 = MmSecureVirtualMemory(*((PVOID *)this + 11), *v53, 4u);
              *((_QWORD *)this + 12) = v59;
              if ( !v59 )
                goto LABEL_165;
            }
            v61 = *((unsigned int *)this + 26);
            if ( !(_DWORD)v61 )
            {
LABEL_67:
              v73 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
              v74 = *((unsigned int *)this + 6);
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v73 + 208));
              v75 = ((unsigned int)v74 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v75 < *(_DWORD *)(v73 + 256) )
              {
                v76 = *(_QWORD *)(v73 + 240);
                v77 = ((unsigned int)v74 >> 25) & 0x60;
                if ( (((unsigned int)v74 >> 25) & 0x60) == (*(_BYTE *)(v76 + 16 * v75 + 8) & 0x60)
                  && (*(_DWORD *)(v76 + 16 * v75 + 8) & 0x1F) != 0 )
                {
                  v78 = 2 * ((v74 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v76 + 8 * v78 + 8) & 0x2000) == 0 )
                  {
                    v87 = WdLogNewEntry5_WdAssertion(v77, v76);
                    *(_QWORD *)(v87 + 24) = 217LL;
                    WdLogEvent5_WdAssertion(v87);
                    v76 = *(_QWORD *)(v73 + 240);
                  }
                  *(_DWORD *)(v76 + 8 * v78 + 8) &= ~0x2000u;
                }
              }
              *(_QWORD *)(v73 + 216) = 0LL;
              ExReleasePushLockExclusiveEx(v73 + 208, 0LL);
              KeLeaveCriticalRegion();
              return 0LL;
            }
            v62 = 24 * v61;
            if ( (unsigned __int64)(24 * v61) <= 0xFFFFFFFF )
            {
              v63 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = (unsigned int)v62;
              v64 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 15,
                      0LL,
                      (PSIZE_T)this + 14,
                      0x3000u,
                      4u);
              v68 = v64;
              if ( v64 < 0 )
              {
                v139 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67);
                v139[3] = this;
                v139[4] = *v63;
                v139[5] = v68;
                WdLogEvent5_WdWarning(v139);
                return (unsigned int)v68;
              }
              v69 = MmSecureVirtualMemory(*((PVOID *)this + 15), *v63, 4u);
              *((_QWORD *)this + 17) = v69;
              if ( v69 )
              {
                v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                v71 = *(struct DXGADAPTER **)(v70 + 16);
                v72 = DXGGLOBAL::GetGlobal(v60, v70);
                if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v72 + 1436),
                       v71) )
                {
                  v140 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
                  *((_QWORD *)this + 16) = v140;
                  if ( !v140 )
                  {
                    v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v142, v141, v143);
                    v98[3] = this;
                    v99 = *((_QWORD *)this + 14);
                    goto LABEL_116;
                  }
                }
                goto LABEL_67;
              }
LABEL_165:
              v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v46, v48);
              v98[3] = this;
              v98[4] = -1073741801LL;
              goto LABEL_117;
            }
            v137 = WdLogNewEntry5_WdWarning(v62, v46, v48);
            *(_QWORD *)(v137 + 24) = this;
            v138 = *((unsigned int *)this + 26);
LABEL_168:
            *(_QWORD *)(v137 + 32) = v138;
            WdLogEvent5_WdWarning(v137);
            return 3221225621LL;
          }
        }
        v124 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v81, v83);
        v124[3] = this;
        v124[4] = *v49;
        v124[5] = v15;
        WdLogEvent5_WdWarning(v124);
        return (unsigned int)v15;
      }
      return 3221225495LL;
    }
    if ( v43 < 0x20 )
    {
      LODWORD(v160) = v41 & 0xFFFFFBDF | (8 * (v43 & 4 | (16 * (v43 & 8))));
      v44 = *(_QWORD *)(v45 + 16);
      goto LABEL_48;
    }
    v107 = WdLogNewEntry5_WdError(v42, v41);
    *(_QWORD *)(v107 + 24) = 1281LL;
    goto LABEL_123;
  }
  v159.m256i_i32[0] = 0;
  *(__int64 *)((char *)&v159.m256i_i64[1] + 4) = 0LL;
  v159.m256i_i32[6] = 0;
  v159.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v39 + 40) + 352LL);
  v159.m256i_i32[1] = *((_DWORD *)this + 102);
  v159.m256i_i32[2] = *((_DWORD *)this + 104);
  v159.m256i_i32[0] = 2
                    * (*((_DWORD *)this + 105) & 1 | (4
                                                    * (*((_DWORD *)this + 105) & 4 | (16
                                                                                    * (*((_DWORD *)this + 105) & 8 | 0x11)))));
  v131 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, __int64, ULONG))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                                 + 8LL)
                                                                                     + 224LL))(
           this,
           &v159,
           v20,
           v18,
           Flags[0]);
  *((_QWORD *)this + 37) = v131;
  if ( !v131 )
    return 3221225495LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0pppp_EtwWriteTransfer(v132, v131, v133, this, v131, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    v131 = *((_QWORD *)this + 37);
  }
  memset(v157, 0, sizeof(v157));
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 232LL))(
             0LL,
             v131,
             v157,
             (char *)this + 304);
  if ( (int)result >= 0 )
    goto LABEL_51;
  return result;
}
