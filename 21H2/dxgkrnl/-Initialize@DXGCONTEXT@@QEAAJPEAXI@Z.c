/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E78E4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E777C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0002588 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00027C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C003FCD4 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003FD74 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DC880 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C012BBEC (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01649D8 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C0246DC8 (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD **a2, unsigned int a3)
{
  __int64 v6; // r14
  _OWORD *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 result; // rax
  struct _KTHREAD **Current; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  DXGCONTEXT *v39; // rax
  __int64 v40; // r9
  __int64 v41; // r8
  unsigned __int8 v42; // r10
  __int64 v43; // rcx
  __int64 v44; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r11
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // rcx
  bool v52; // al
  __int64 v53; // rdx
  __int64 v54; // r10
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 AllocationListSize; // rdx
  __m128i v59; // xmm1
  __m128i v60; // xmm1
  __int64 v61; // rax
  struct _LOOKASIDE_LIST_EX *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  NTSTATUS v66; // eax
  __int64 v67; // rax
  char v68; // r10
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  char v72; // r9
  char v73; // al
  __int64 v74; // rax
  char v75; // r8
  __int64 v76; // rax
  char v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  int v81; // eax
  __int32 v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int64 *v86; // rdx
  __int64 v87; // rcx
  _QWORD *v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  SIZE_T *v92; // r14
  __int64 v93; // rax
  ULONG64 v94; // rcx
  NTSTATUS VirtualMemory; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  _QWORD *v99; // rax
  unsigned __int64 *v100; // rax
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  NTSTATUS v103; // eax
  __int64 v104; // rcx
  struct DXGADAPTER *v105; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID v107; // rax
  _QWORD *v108; // rax
  SIZE_T v109; // rcx
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  SIZE_T *v112; // r14
  NTSTATUS v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r15
  _QWORD *v118; // rax
  HANDLE v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  SIZE_T *v125; // rbx
  NTSTATUS v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r14
  _QWORD *v131; // rax
  HANDLE v132; // rax
  __int64 v133; // rdx
  struct DXGADAPTER *v134; // rbx
  struct DXGGLOBAL *v135; // rax
  PVOID v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r14
  unsigned __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-198h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-198h]
  SIZE_T Size; // [rsp+28h] [rbp-190h]
  SIZE_T Sizea; // [rsp+28h] [rbp-190h]
  ULONG Tag[2]; // [rsp+30h] [rbp-188h]
  ULONG Taga[2]; // [rsp+30h] [rbp-188h]
  __int64 Depth; // [rsp+38h] [rbp-180h]
  __int64 Deptha; // [rsp+38h] [rbp-180h]
  void *v155; // [rsp+40h] [rbp-178h]
  _BYTE v156[16]; // [rsp+88h] [rbp-130h] BYREF
  __int64 v157; // [rsp+98h] [rbp-120h]
  __int64 v158; // [rsp+A0h] [rbp-118h]
  _OWORD v159[3]; // [rsp+A8h] [rbp-110h] BYREF
  _DXGKARG_CREATECONTEXT v160; // [rsp+E0h] [rbp-D8h] BYREF
  __m256i v161; // [rsp+130h] [rbp-88h] BYREF
  __int128 v162; // [rsp+150h] [rbp-68h] BYREF
  __int64 v163; // [rsp+160h] [rbp-58h]
  int v164; // [rsp+168h] [rbp-50h]

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 102));
  if ( *(int *)(v6 + 2328) >= 9472 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( PoolWithTag )
      *PoolWithTag = 0LL;
    *((_QWORD *)this + 62) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    *(_QWORD *)PoolWithTag = this;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v156, Current);
  Flags[0] = 0;
  v15 = HMGRTABLE::AllocHandle(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 240LL, this, 7LL);
  v18 = v15;
  *((_DWORD *)this + 6) = v15;
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdWarning(0LL, v16, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v19);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
    return 3221225495LL;
  }
  v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v21 = (v15 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 < *(_DWORD *)(v20 + 256) )
  {
    v22 = *(_QWORD *)(v20 + 240);
    v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
    if ( v18 >> 30 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      *(_DWORD *)(v22 + 16LL * ((v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
  if ( *(_BYTE *)(v6 + 209) )
  {
    *((_BYTE *)this + 457) = 1;
    v24 = *((_QWORD *)this + 2);
    v25 = *(_DWORD *)(v24 + 440);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v24 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4240),
                       HostProcess,
                       v25,
                       *((_DWORD *)this + 102),
                       *((_DWORD *)this + 103),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 420),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( !ContextVirtual )
    {
      v30 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v30 + 24) = 995LL;
LABEL_18:
      WdLogEvent5_WdError(v30);
      return 3221225473LL;
    }
    v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v32 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v31 + 208));
    v33 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *(_DWORD *)(v31 + 256) )
    {
      v34 = *(_QWORD *)(v31 + 240);
      v35 = ((unsigned int)v32 >> 25) & 0x60;
      if ( (((unsigned int)v32 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60)
        && (*(_DWORD *)(v34 + 16 * v33 + 8) & 0x1F) != 0 )
      {
        v36 = 2 * ((v32 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v34 + 8 * v36 + 8) & 0x2000) == 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v37 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v37);
          v34 = *(_QWORD *)(v31 + 240);
        }
        *(_DWORD *)(v34 + 8 * v36 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v31 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v31 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v161 = *(__m256i *)((char *)this + 200);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v155) = v161.m256i_i32[2];
        LODWORD(Deptha) = v161.m256i_i32[1];
        Taga[0] = v161.m256i_i32[0];
        LODWORD(Sizea) = *((_DWORD *)this + 103);
        Flagsa[0] = *((_DWORD *)this + 102);
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          HIDWORD(v161.m256i_i64[0]),
          &EventCreateContext,
          v161.m256i_i64[0],
          *((_QWORD *)this + 2),
          *(_QWORD *)Flagsa,
          Sizea,
          *(_QWORD *)Taga,
          Deptha,
          v155,
          v161.m256i_i32[3],
          v161.m256i_i32[4],
          0,
          this,
          *((unsigned int *)this + 6),
          0LL);
      }
    }
    return 0LL;
  }
  LODWORD(v38) = 0;
  memset(&v160, 0, sizeof(v160));
  if ( *(int *)(v6 + 2328) < 9472 )
    v39 = this;
  else
    v39 = (DXGCONTEXT *)*((_QWORD *)this + 62);
  *((_QWORD *)this + 24) = v39;
  v160.hContext = v39;
  v40 = *((unsigned int *)this + 102);
  v160.NodeOrdinal = *((_DWORD *)this + 102);
  v160.EngineAffinity = *((_DWORD *)this + 103);
  v160.pPrivateDriverData = a2;
  v160.PrivateDriverDataSize = a3;
  v41 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v41 + 1869) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v160.Flags.Value |= 2u;
  v42 = *((_BYTE *)this + 454);
  v160.Flags.Value ^= (v160.Flags.Value ^ (4 * v42)) & 4;
  v43 = *((unsigned int *)this + 105);
  if ( (v43 & 8) != 0 )
  {
    *((_DWORD *)this + 105) = v43 & 0xFFFFFFEF;
  }
  else
  {
    v46 = *(_QWORD *)(v41 + 16);
    if ( (v43 & 0x10) != 0 )
    {
      v47 = *(_QWORD *)(v46 + 16);
      if ( *(int *)(v47 + 2596) < 2500 )
      {
        v30 = WdLogNewEntry5_WdError(v43, v47);
        *(_QWORD *)(v30 + 24) = 1064LL;
        goto LABEL_18;
      }
      v48 = 360LL * *((unsigned int *)this + 104);
      v49 = *(_QWORD *)(v48 + *(_QWORD *)(v47 + 2584) + 32);
      if ( !v49 || (v50 = 74 * v40, (*(_BYTE *)(v49 + v50 + 68) & 1) == 0) )
      {
        v30 = WdLogNewEntry5_WdError(v43, v49);
        *(_QWORD *)(v30 + 24) = 1070LL;
        goto LABEL_18;
      }
      if ( !v42 )
      {
        v30 = WdLogNewEntry5_WdError(v43, v49);
        *(_QWORD *)(v30 + 24) = 1076LL;
        goto LABEL_18;
      }
      if ( (unsigned int)v43 >= 0x40 )
      {
        v30 = WdLogNewEntry5_WdError(v43, v49);
        *(_QWORD *)(v30 + 24) = 1082LL;
        goto LABEL_18;
      }
      v160.Flags.Value |= 0x10u;
      v51 = *(_QWORD *)(v48 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 2584LL) + 32);
      if ( v51 )
        v52 = (*(_BYTE *)(v51 + v50 + 68) & 2) != 0;
      else
        v52 = 0;
      *((_BYTE *)this + 312) = v52;
    }
    else
    {
      v53 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 2584LL) + 360LL * *((unsigned int *)this + 104);
      v54 = *(_QWORD *)(v53 + 32);
      if ( v54 && (*(_BYTE *)(74 * v40 + v54 + 68) & 1) != 0 )
      {
        v30 = WdLogNewEntry5_WdError(74 * v40, v53);
        *(_QWORD *)(v30 + 24) = 1094LL;
        goto LABEL_18;
      }
    }
  }
  v44 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
  if ( (*(_DWORD *)(v44 + 2056) & 1) != 0 )
  {
    IsEnabledDeviceUsage = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
    v44 = *((unsigned int *)this + 105);
    if ( IsEnabledDeviceUsage && (v44 & 0x20) != 0 )
    {
      result = CheckNoKmdAccessPrivateData(v160.PrivateDriverDataSize, (_DWORD *)v160.pPrivateDriverData, 0xFF000003);
      LODWORD(v38) = result;
      if ( (int)result < 0 )
        return result;
      v160.hContext = 0LL;
      v160.ContextInfo.DmaBufferPrivateDataSize = 264;
    }
    else if ( (v44 & 8) != 0 )
    {
      v160.hContext = 0LL;
    }
    else
    {
      v55 = ADAPTER_RENDER::DdiCreateContext(
              *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
              *(void **)(*((_QWORD *)this + 2) + 584LL),
              &v160);
      v38 = v55;
      if ( v55 < 0 )
      {
        v57 = WdLogNewEntry5_WdError(v44, v56);
        *(_QWORD *)(v57 + 24) = v38;
        WdLogEvent5_WdError(v57);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v160.ContextInfo.AllocationListSize;
  }
  else
  {
    v160.hContext = *(HANDLE *)(v41 + 584);
    v59 = *(__m128i *)(v41 + 592);
    v157 = *(_QWORD *)(v41 + 608);
    v160.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v59);
    v157 = *(_QWORD *)(v41 + 608);
    v160.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v41 + 592));
    v60 = *(__m128i *)(v41 + 592);
    v157 = *(_QWORD *)(v41 + 608);
    v60.m128i_i64[0] = _mm_srli_si128(v60, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v60.m128i_i64[0]);
    v160.ContextInfo.AllocationListSize = v60.m128i_u32[1];
    v157 = *(_QWORD *)(v41 + 608);
    v160.ContextInfo.PatchLocationListSize = v157;
    v160.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v41 + 592), 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v38 < 0 )
    return (unsigned int)v38;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v61 = WdLogNewEntry5_WdWarning(v44, AllocationListSize, v41);
    *(_QWORD *)(v61 + 24) = 256LL;
    *(_QWORD *)(v61 + 32) = v160.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v61);
    v160.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v160.hContext;
  *(DXGK_CONTEXTINFO *)((char *)this + 200) = v160.ContextInfo;
  if ( *((_DWORD *)this + 52) )
  {
    v62 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x64507844u, (POOL_TYPE)512);
    *((_QWORD *)this + 64) = v62;
    if ( !v62 )
    {
      v65 = WdLogNewEntry5_WdError(v64, v63);
      *(_QWORD *)(v65 + 24) = 1176LL;
      WdLogEvent5_WdError(v65);
      return 3221225495LL;
    }
    v66 = ExInitializeLookasideListEx(
            v62,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            (unsigned int)(*((_DWORD *)this + 52) + 16),
            0x64507844u,
            0);
    v38 = v66;
    if ( v66 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v44, AllocationListSize);
      *(_QWORD *)(v67 + 24) = v38;
      WdLogEvent5_WdError(v67);
      operator delete(*((void **)this + 64));
      *((_QWORD *)this + 64) = 0LL;
      return (unsigned int)v38;
    }
  }
  v68 = (char)v160.ContextInfo.Caps.0;
  if ( (*(_BYTE *)&v160.ContextInfo.Caps.0 & 2) != 0 )
  {
    v69 = *((_QWORD *)this + 2);
    *(_BYTE *)(v69 + 1871) = 1;
    *(_BYTE *)(*(_QWORD *)(v69 + 40) + 297LL) = 1;
    v68 = (char)v160.ContextInfo.Caps.0;
  }
  LOBYTE(v41) = *((_BYTE *)this + 454);
  if ( (_BYTE)v41 )
  {
    v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2584LL)
        + 360LL * *((unsigned int *)this + 104);
    v71 = *(_QWORD *)(v70 + 32);
    if ( v71 )
    {
      v70 = 74LL * *((unsigned int *)this + 102);
      v72 = *(_BYTE *)(v70 + v71 + 73);
    }
    else
    {
      v72 = 0;
    }
    if ( v71 )
    {
      v70 = 74LL * *((unsigned int *)this + 102);
      v73 = *(_BYTE *)(v70 + v71 + 72);
    }
    else
    {
      v73 = 0;
    }
    if ( (v68 & 4) != 0 || v72 && !v73 )
    {
      if ( !v72 )
      {
        v74 = WdLogNewEntry5_WdWarning(v70, v71, v41);
        *(_QWORD *)(v74 + 24) = 1212LL;
        WdLogEvent5_WdWarning(v74);
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
    v75 = 0;
    if ( !*((_DWORD *)this + 50) )
    {
      v76 = WdLogNewEntry5_WdAssertion(v44, AllocationListSize);
      *(_QWORD *)(v76 + 24) = 1223LL;
      WdLogEvent5_WdAssertion(v76);
      v75 = *((_BYTE *)this + 454);
    }
    if ( !v75 )
    {
      v77 = 0;
      if ( !*((_DWORD *)this + 53) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v44, AllocationListSize);
        *(_QWORD *)(v78 + 24) = 1224LL;
        WdLogEvent5_WdAssertion(v78);
        v77 = *((_BYTE *)this + 454);
      }
      if ( !v77 && !*((_DWORD *)this + 54) )
      {
        v79 = WdLogNewEntry5_WdAssertion(v44, AllocationListSize);
        *(_QWORD *)(v79 + 24) = 1225LL;
        WdLogEvent5_WdAssertion(v79);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v161 = *(__m256i *)((char *)this + 200);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(Depth) = v161.m256i_i32[1];
      Tag[0] = v161.m256i_i32[0];
      LODWORD(Size) = *((_DWORD *)this + 103);
      Flags[0] = *((_DWORD *)this + 102);
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        HIDWORD(v161.m256i_i64[0]),
        &EventCreateContext,
        v161.m256i_i64[0],
        *((_QWORD *)this + 2),
        *(_QWORD *)Flags,
        Size,
        *(_QWORD *)Tag,
        Depth,
        v161.m256i_i32[2],
        v161.m256i_i32[3],
        v161.m256i_i32[4],
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  v80 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
  {
    v162 = 0LL;
    v163 = 0LL;
    v164 = 0;
    HIDWORD(v162) = 0;
    HIDWORD(v163) = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 352LL);
    DWORD1(v162) = *((_DWORD *)this + 102);
    DWORD2(v162) = *((_DWORD *)this + 104);
    LODWORD(v162) = (2 * (unsigned __int8)*((_DWORD *)this + 105)) & 2;
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
      LODWORD(v162) = ((unsigned __int16)v162 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)this + 105) << 7)) & 0x1000 ^ v162;
    if ( *((_BYTE *)this + 454) )
      LODWORD(v162) = v162 | 0x80;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      if ( *((_DWORD *)this + 105) >= 0x40u )
      {
        v30 = WdLogNewEntry5_WdError(v90, v89);
        *(_QWORD *)(v30 + 24) = 1312LL;
        goto LABEL_18;
      }
      LODWORD(v162) = v162 & 0xFFFFFBDF | (8 * (*((_DWORD *)this + 105) & 4 | (16 * (*((_DWORD *)this + 105) & 8))));
      v89 = *(_QWORD *)(v91 + 16);
    }
    v87 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *))(*(_QWORD *)(*(_QWORD *)(v89 + 616) + 8LL) + 216LL))(
            this,
            &v162);
    *((_QWORD *)this + 34) = v87;
    if ( !v87 )
      return 3221225495LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v87,
        (__int64)v86,
        (__int64)v88,
        this,
        v87,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
LABEL_122:
    if ( !*((_BYTE *)this + 454) || *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 2 || *((_DWORD *)this + 36) == 2 )
    {
      result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
      if ( (int)result < 0 )
        return result;
    }
    v92 = (SIZE_T *)((char *)this + 48);
    *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
    *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
    if ( *((_BYTE *)this + 454) )
    {
      if ( *((_QWORD *)this + 46) )
      {
        v93 = WdLogNewEntry5_WdAssertion(v87, v86);
        *(_QWORD *)(v93 + 24) = 1358LL;
        WdLogEvent5_WdAssertion(v93);
      }
      v94 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 348LL);
      if ( (v94 & 0x10) != 0 && a2 && a3 == 16 )
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)this + 7,
                          0LL,
                          (PSIZE_T)this + 6,
                          0x3000u,
                          4u);
        v38 = VirtualMemory;
        if ( VirtualMemory < 0 )
        {
LABEL_133:
          v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, v96, v98);
          v99[3] = this;
          v99[4] = *v92;
          v99[5] = v38;
          WdLogEvent5_WdWarning(v99);
          return (unsigned int)v38;
        }
        v86 = a2[1];
        v88 = *a2;
        v158 = 0LL;
        v100 = v86;
        if ( (unsigned __int64)v86 >= MmUserProbeAddress )
          v100 = (unsigned __int64 *)MmUserProbeAddress;
        v101 = *v100;
        if ( !v86 || v101 < 8 || !v88 )
        {
          v102 = WdLogNewEntry5_WdWarning(v101, v86, v88);
          *(_QWORD *)(v102 + 24) = this;
          *(_QWORD *)(v102 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v102);
          return 3221225485LL;
        }
        if ( (unsigned __int64)v88 >= MmUserProbeAddress )
          v88 = (_QWORD *)MmUserProbeAddress;
        *v88 = *((_QWORD *)this + 7);
        v94 = MmUserProbeAddress;
        if ( (unsigned __int64)v86 >= MmUserProbeAddress )
          v86 = (unsigned __int64 *)MmUserProbeAddress;
        *v86 = *v92;
      }
    }
    else
    {
      v103 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)this + 7,
               0LL,
               (PSIZE_T)this + 6,
               0x3000u,
               4u);
      v38 = v103;
      if ( v103 < 0 )
        goto LABEL_133;
      v104 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v105 = *(struct DXGADAPTER **)(v104 + 16);
      Global = DXGGLOBAL::GetGlobal(v104, v96);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
             (struct DXGGLOBAL *)((char *)Global + 1548),
             v105) )
      {
        v107 = ExAllocatePoolWithTag(PagedPool, *v92, 0x4B677844u);
        *((_QWORD *)this + 8) = v107;
        if ( !v107 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v86, v88);
          v108[3] = this;
          v109 = *v92;
LABEL_149:
          v108[4] = v109;
          v108[5] = -1073741801LL;
LABEL_150:
          WdLogEvent5_WdWarning(v108);
          return 3221225495LL;
        }
      }
    }
    v110 = *((unsigned int *)this + 18);
    if ( (_DWORD)v110 )
    {
      v111 = 8 * v110;
      if ( v111 > 0xFFFFFFFF )
      {
        v121 = WdLogNewEntry5_WdWarning(v94, v86, v88);
        *(_QWORD *)(v121 + 24) = this;
        v122 = *((unsigned int *)this + 18);
        goto LABEL_158;
      }
      v112 = (SIZE_T *)((char *)this + 80);
      *((_QWORD *)this + 10) = (unsigned int)v111;
      v113 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)this + 11,
               0LL,
               (PSIZE_T)this + 10,
               0x3000u,
               4u);
      v117 = v113;
      if ( v113 < 0 )
      {
        v118 = (_QWORD *)WdLogNewEntry5_WdWarning(v115, v114, v116);
        v118[3] = this;
        v118[4] = *v112;
        v118[5] = v117;
        WdLogEvent5_WdWarning(v118);
        return (unsigned int)v117;
      }
      v119 = MmSecureVirtualMemory(*((PVOID *)this + 11), *v112, 4u);
      *((_QWORD *)this + 12) = v119;
      if ( !v119 )
      {
LABEL_156:
        v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v120, v86, v88);
        v108[3] = this;
        v108[4] = -1073741801LL;
        goto LABEL_150;
      }
    }
    v123 = *((unsigned int *)this + 26);
    if ( !(_DWORD)v123 )
      goto LABEL_168;
    v124 = 24 * v123;
    if ( (unsigned __int64)(24 * v123) <= 0xFFFFFFFF )
    {
      v125 = (SIZE_T *)((char *)this + 112);
      *((_QWORD *)this + 14) = (unsigned int)v124;
      v126 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)this + 15,
               0LL,
               (PSIZE_T)this + 14,
               0x3000u,
               4u);
      v130 = v126;
      if ( v126 < 0 )
      {
        v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v127, v129);
        v131[3] = this;
        v131[4] = *v125;
        v131[5] = v130;
        WdLogEvent5_WdWarning(v131);
        return (unsigned int)v130;
      }
      v132 = MmSecureVirtualMemory(*((PVOID *)this + 15), *v125, 4u);
      *((_QWORD *)this + 17) = v132;
      if ( !v132 )
        goto LABEL_156;
      v133 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v134 = *(struct DXGADAPTER **)(v133 + 16);
      v135 = DXGGLOBAL::GetGlobal(v120, v133);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v135 + 1548), v134) )
      {
        v136 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
        *((_QWORD *)this + 16) = v136;
        if ( !v136 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v138, v137, v139);
          v108[3] = this;
          v109 = *((_QWORD *)this + 14);
          goto LABEL_149;
        }
      }
LABEL_168:
      v140 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v141 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v140 + 208));
      v142 = ((unsigned int)v141 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v142 < *(_DWORD *)(v140 + 256) )
      {
        v143 = *(_QWORD *)(v140 + 240);
        v144 = ((unsigned int)v141 >> 25) & 0x60;
        if ( (((unsigned int)v141 >> 25) & 0x60) == (*(_BYTE *)(v143 + 16 * v142 + 8) & 0x60)
          && (*(_DWORD *)(v143 + 16 * v142 + 8) & 0x1F) != 0 )
        {
          v145 = 2 * ((v141 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v143 + 8 * v145 + 8) & 0x2000) == 0 )
          {
            v146 = WdLogNewEntry5_WdAssertion(v144, v143);
            *(_QWORD *)(v146 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v146);
            v143 = *(_QWORD *)(v140 + 240);
          }
          *(_DWORD *)(v143 + 8 * v145 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v140 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v140 + 208, 0LL);
      KeLeaveCriticalRegion();
      return 0LL;
    }
    v121 = WdLogNewEntry5_WdWarning(v124, v86, v88);
    *(_QWORD *)(v121 + 24) = this;
    v122 = *((unsigned int *)this + 26);
LABEL_158:
    *(_QWORD *)(v121 + 32) = v122;
    WdLogEvent5_WdWarning(v121);
    return 3221225621LL;
  }
  v161.m256i_i32[0] = 0;
  *(__int64 *)((char *)&v161.m256i_i64[1] + 4) = 0LL;
  v161.m256i_i32[6] = 0;
  v161.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 352LL);
  v161.m256i_i32[1] = *((_DWORD *)this + 102);
  v161.m256i_i32[2] = *((_DWORD *)this + 104);
  v161.m256i_i32[0] = (2 * (unsigned __int8)*((_DWORD *)this + 105)) & 2;
  v81 = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
  v82 = v161.m256i_i32[0];
  if ( v81 )
    v82 = (v161.m256i_i16[0] ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)this + 105) << 7)) & 0x1000 ^ v161.m256i_i32[0];
  v161.m256i_i32[0] = v82 & 0xFFFFFBDF | (8 * (*((_DWORD *)this + 105) & 4 | (16 * (*((_DWORD *)this + 105) & 8 | 0x11))));
  v83 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 616LL)
                                                                       + 8LL)
                                                           + 224LL))(
          this,
          &v161);
  *((_QWORD *)this + 37) = v83;
  if ( !v83 )
    return 3221225495LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0pppp_EtwWriteTransfer(v84, v83, v85, this, v83, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    v83 = *((_QWORD *)this + 37);
  }
  memset(v159, 0, sizeof(v159));
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, char *, ULONG))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                           + 8LL)
                                                                               + 232LL))(
             0LL,
             v83,
             v159,
             (char *)this + 304,
             Flags[0]);
  if ( (int)result >= 0 )
    goto LABEL_122;
  return result;
}
