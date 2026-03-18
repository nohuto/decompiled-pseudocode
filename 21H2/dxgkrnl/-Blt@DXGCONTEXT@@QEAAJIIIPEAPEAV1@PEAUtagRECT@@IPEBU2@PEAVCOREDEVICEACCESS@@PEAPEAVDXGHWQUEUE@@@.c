/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0328E3C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0330C90 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0373D20 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        struct DXGHWQUEUE **a10)
{
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // edx
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r10
  int v31; // edx
  struct _EX_RUNDOWN_REF *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // eax
  const wchar_t *v36; // r9
  UINT bottom; // edx
  UINT right; // ecx
  struct tagRECT *v39; // rsi
  __int64 Width; // r8
  int v41; // ecx
  __int64 Height; // r9
  __int64 v43; // rdx
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned int v47; // edi
  unsigned int v48; // ebx
  struct DXGPROCESS *Current; // rax
  int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rbx
  struct DXGDEVICE *v53; // rsi
  unsigned int v54; // edi
  struct ADAPTER_RENDER *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // r9d
  unsigned int v59; // eax
  struct COREDEVICEACCESS *v60; // rbx
  int v61; // eax
  __int64 v62; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v63; // r10
  int v64; // edx
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r9d
  struct DXGHWQUEUE **v68; // r8
  int v69; // eax
  struct tagRECT *v71; // [rsp+28h] [rbp-D8h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  struct DXGALLOCATION *v73; // [rsp+38h] [rbp-C8h]
  __int64 v74; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *v75; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v76; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v77; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDMM_DMA_BUFFER *v78; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v79; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v80; // [rsp+A8h] [rbp-58h]
  struct COREDEVICEACCESS *v81; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v82; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v83; // [rsp+C0h] [rbp-40h]
  struct DXGHWQUEUE **v84; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v85; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v86; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v87; // [rsp+130h] [rbp+30h] BYREF

  v83 = a5;
  v81 = a9;
  v84 = a10;
  v11 = *((_QWORD *)this + 2);
  v80 = a4;
  v12 = a3;
  v13 = a2;
  v14 = *(_QWORD *)(v11 + 16);
  v82 = a8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    WdLogSingleEntry1(1LL, 7341LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7341LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *(_DWORD *)(v15 + 272);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v18);
    }
    ExAcquirePushLockSharedEx(v15 + 248, 0LL);
  }
  v19 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *(_DWORD *)(v15 + 296)
    && (v20 = *(_QWORD *)(v15 + 280),
        v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
        (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
    && (v21 & 0x2000) == 0
    && (v21 & 0x1F) != 0 )
  {
    if ( (v21 & 0x1F) == 5 )
    {
      v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v22 = 0LL;
    }
  }
  else
  {
    v22 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v22);
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v15) = -1073741811;
  if ( v76 )
  {
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 1) + 16LL) + 16LL) != v24 )
    {
      WdLogSingleEntry3(2LL, v23, v76, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)this + 2),
        (__int64)v76,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_90;
    }
    memset(&v86, 0, sizeof(v86));
    v86.hAllocation = *(HANDLE *)(*((_QWORD *)v76 + 6) + 16LL);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 2800LL),
            &v86,
            v24);
    v15 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v25,
        this,
        *((unsigned int *)v76 + 4),
        v76,
        (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v15,
        (__int64)this,
        *((unsigned int *)v76 + 4),
        (__int64)v76,
        (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
      goto LABEL_90;
    }
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v28 = *(_DWORD *)(v15 + 272);
        if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, v28);
      }
      ExAcquirePushLockSharedEx(v15 + 248, 0LL);
    }
    v29 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v15 + 296)
      && (v30 = *(_QWORD *)(v15 + 280),
          v31 = *(_DWORD *)(v30 + 16 * v29 + 8),
          (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60))
      && (v31 & 0x2000) == 0
      && (v31 & 0x1F) != 0 )
    {
      if ( (v31 & 0x1F) == 5 )
      {
        v32 = *(struct _EX_RUNDOWN_REF **)(v30 + 16LL * (unsigned int)v29);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v32 = 0LL;
      }
    }
    else
    {
      v32 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v32);
    ExReleasePushLockSharedEx(v15 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v15) = -1073741811;
    if ( !v75 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid destination handle 0x%I64x",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_89:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
      goto LABEL_90;
    }
    v33 = *((_QWORD *)this + 2);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 1) + 16LL) + 16LL) != v34 )
    {
      WdLogSingleEntry3(2LL, v33, v75, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)this + 2),
        (__int64)v75,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_89;
    }
    memset(&v85, 0, sizeof(v85));
    v85.hAllocation = *(HANDLE *)(*((_QWORD *)v75 + 6) + 16LL);
    v35 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 2800LL),
            &v85,
            v34);
    v15 = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v35,
        this,
        *((unsigned int *)v75 + 4),
        v75,
        (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) >> 6) & 0xF);
      v36 = L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x";
      v74 = (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) >> 6) & 0xF;
      v73 = v75;
      v72 = *((unsigned int *)v75 + 4);
      v71 = (struct tagRECT *)this;
LABEL_76:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v36, v15, (__int64)v71, v72, (__int64)v73, v74);
      goto LABEL_89;
    }
    *(_QWORD *)&v77.left = 0LL;
    v79 = 0LL;
    if ( a6 )
    {
      v79 = *a6;
      bottom = v79.bottom;
      right = v79.right;
    }
    else
    {
      right = v86.Width;
      bottom = v86.Height;
    }
    v39 = a8;
    Width = v85.Width;
    v41 = right - v79.left;
    Height = v85.Height;
    if ( v41 < (int)v85.Width )
      Width = (unsigned int)v41;
    v43 = bottom - v79.top;
    v77.right = Width;
    if ( (int)v43 < (int)v85.Height )
      Height = (unsigned int)v43;
    v79.right = Width + v79.left;
    v77.bottom = Height;
    v44 = 0;
    v79.bottom = Height + v79.top;
    if ( a7 )
    {
      while ( v39->left >= 0 && v39->top >= 0 )
      {
        if ( v39->right > (int)Width || v39->bottom > (int)Height )
        {
          v51 = (int)Width;
          v52 = (int)Height;
          WdLogSingleEntry4(2LL, v39->right, v39->bottom, (int)Width, (int)Height);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The (right bottom) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
            v39->right,
            v39->bottom,
            v51,
            v52,
            0LL);
          goto LABEL_61;
        }
        ++v44;
        ++v39;
        if ( v44 >= a7 )
          goto LABEL_57;
      }
      WdLogSingleEntry4(2LL, v39->left, v39->top, 0LL, 0LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The (left, top) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        v39->left,
        v39->top,
        0LL,
        0LL,
        0LL);
LABEL_61:
      LODWORD(v15) = -1073741811;
      goto LABEL_89;
    }
LABEL_57:
    if ( *((_BYTE *)this + 441) )
    {
      v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v46 = *(_QWORD *)(v45 + 16);
      v47 = *((_DWORD *)v75 + 5);
      v48 = *((_DWORD *)v76 + 5);
      Current = DXGPROCESS::GetCurrent(v45, v43, Width, Height);
      v50 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v46 + 4344),
              Current,
              this,
              v48,
              v47,
              &v79,
              &v77,
              a7,
              v82,
              0,
              0LL);
    }
    else if ( !*((_BYTE *)this + 438)
           || ((v53 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v54 = *((_DWORD *)this + 100),
                LOBYTE(Width) = *((_BYTE *)this + 439),
                v55 = (struct ADAPTER_RENDER *)*((_QWORD *)v53 + 2),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v55 + 81) + 8LL)
                                                                           + 256LL))(
                  *((_QWORD *)v55 + 82),
                  *((_QWORD *)v75 + 3),
                  Width,
                  v54))
            || (v50 = MapGpuVaForAllocation(v55, v53, v54, v75), v50 >= 0))
           && ((LOBYTE(v56) = *((_BYTE *)this + 439),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                       + 8LL)
                                                                           + 256LL))(
                  *((_QWORD *)v55 + 82),
                  *((_QWORD *)v76 + 3),
                  v56,
                  v54))
            || (v50 = MapGpuVaForAllocation(v55, v53, v54, v76), v50 >= 0)) )
    {
      v57 = *((_QWORD *)this + 46);
      v78 = 0LL;
      if ( !v57 )
        goto LABEL_74;
      v58 = *((_DWORD *)this + 94);
      v59 = 0;
      if ( !v58 )
        goto LABEL_74;
      while ( !*(_QWORD *)(v57 + 8LL * v59) )
      {
        if ( ++v59 >= v58 )
          goto LABEL_74;
      }
      v78 = *(struct _VIDMM_DMA_BUFFER **)(v57 + 8LL * v59);
      *(_QWORD *)(v57 + 8LL * v59) = 0LL;
      if ( v78 )
      {
        v60 = v81;
      }
      else
      {
LABEL_74:
        v60 = v81;
        v61 = DXGCONTEXT::AcquireDmaBuffer(this, &v78, v81, 1);
        v15 = v61;
        if ( v61 < 0 )
        {
          WdLogSingleEntry1(2LL, v61);
          v74 = 0LL;
          v36 = L"Failed to acquire DMA buffer 0x%I64x";
          v73 = 0LL;
          v72 = 0LL;
          v71 = 0LL;
          goto LABEL_76;
        }
      }
      memset(&v87, 0, sizeof(v87));
      v62 = *((_QWORD *)this + 2);
      v87.Flags.Value |= 1u;
      v87.pDstSubRects = v82;
      v87.DstRect = v77;
      v87.SubRectCnt = a7;
      v87.SrcRect = v79;
      *(_QWORD *)&v77.right = *(_QWORD *)(v62 + 16);
      *(_QWORD *)&v77.left = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v77);
      v63 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v77.left;
      if ( *(_QWORD *)&v77.left )
      {
        v64 = **(_DWORD **)&v77.left | 0x10000;
        **(_DWORD **)&v77.left = v64;
        v65 = *(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL);
        if ( (v65 & 2) != 0
          || (v65 & 1) != 0
          || (v66 = *(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL), (v66 & 2) != 0)
          || (v66 & 1) != 0 )
        {
          v64 |= 1u;
          *(_DWORD *)v63 = v64;
        }
        v67 = v80;
        v68 = v84;
        *(_DWORD *)v63 = v64 | 0x100;
        v69 = DXGCONTEXT::SubmitPresent(this, 0LL, v68, v67, v83, 0LL, v13, v12, &v87, 0LL, v78, v63, v85.Format, v60);
        v15 = v69;
        if ( v69 < 0 )
        {
          WdLogSingleEntry1(2LL, v69);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"SubmitPresent failed 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(6LL, 7537LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          7537LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v15) = -1073741801;
      }
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v77);
      goto LABEL_89;
    }
    LODWORD(v15) = v50;
    goto LABEL_89;
  }
  WdLogSingleEntry1(2LL, v13);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v13, 0LL, 0LL, 0LL, 0LL);
LABEL_90:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76);
  return (unsigned int)v15;
}
