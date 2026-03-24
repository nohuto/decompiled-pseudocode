/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027E754
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A2DC8 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B9E00 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004534 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017134 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FF5D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0171324 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0245FD4 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0280710 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        struct _EX_RUNDOWN_REF *this,
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
  ULONG_PTR Count; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rax
  ULONG_PTR v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  ULONG_PTR v53; // r9
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  UINT bottom; // edx
  UINT right; // ecx
  struct tagRECT *v63; // rbx
  signed int Width; // esi
  int v65; // ecx
  signed int Height; // r14d
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rbx
  struct DXGPROCESS *Current; // rax
  int v72; // eax
  __int64 v73; // rdx
  _QWORD *v74; // rax
  __int64 top; // rcx
  struct DXGDEVICE *v76; // r14
  unsigned int v77; // esi
  struct ADAPTER_RENDER *v78; // rbx
  __int64 v79; // r8
  ULONG_PTR v80; // rcx
  unsigned int v81; // edx
  unsigned int v82; // eax
  struct COREDEVICEACCESS *v83; // rsi
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  struct tagRECT v87; // xmm0
  ULONG_PTR v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v92; // r8
  __int64 v93; // rax
  int v94; // edx
  int v95; // eax
  int v96; // eax
  unsigned int v97; // r9d
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  size_t v103; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v104; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v105; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v106; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDMM_DMA_BUFFER *v107; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v108; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v109; // [rsp+A8h] [rbp-58h]
  struct COREDEVICEACCESS *v110; // [rsp+B0h] [rbp-50h]
  struct tagRECT *Src; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v112; // [rsp+C0h] [rbp-40h]
  struct DXGHWQUEUE **v113; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v114; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v115; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v116; // [rsp+130h] [rbp+30h] BYREF

  v112 = a5;
  v110 = a9;
  v113 = a10;
  Count = this[2].Count;
  v109 = a4;
  v12 = a3;
  v13 = a2;
  v14 = *(_QWORD *)(Count + 16);
  Src = a8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 7128LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *(_QWORD *)(this[2].Count + 40);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v18 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v21 = *(_DWORD *)(v18 + 232);
      if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v20, v21);
    }
    ExAcquirePushLockSharedEx(v18 + 208, 0LL);
  }
  v22 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 >= *(_DWORD *)(v18 + 256) )
    goto LABEL_15;
  v23 = *(_QWORD *)(v18 + 240);
  v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
    || (v24 & 0x2000) != 0
    || (v24 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v25 = v24 & 0x1F;
  if ( (_BYTE)v25 != 5 )
  {
    v26 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v25);
    *(_QWORD *)(v26 + 24) = 316LL;
    WdLogEvent5_WdError(v26);
LABEL_15:
    v27 = 0LL;
    goto LABEL_16;
  }
  v27 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v22);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v105, v27);
  ExReleasePushLockSharedEx(v18 + 208, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v30) = -1073741811;
  if ( v105 )
  {
    v32 = this[2].Count;
    v33 = *(_QWORD *)(*((_QWORD *)v105 + 1) + 16LL);
    v34 = *(_QWORD *)(v32 + 16);
    v35 = *(_QWORD *)(v34 + 16);
    if ( *(_QWORD *)(v33 + 16) != v35 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v34, v35);
      v31[3] = this[2].Count;
      v31[4] = v105;
      v31[5] = -1073741811LL;
      goto LABEL_23;
    }
    memset(&v115, 0, sizeof(v115));
    v115.hAllocation = *(HANDLE *)(*((_QWORD *)v105 + 6) + 16LL);
    v36 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 2704LL),
            &v115,
            v33);
    v30 = v36;
    if ( v36 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v31[3] = v30;
      v31[4] = this;
      v31[5] = *((unsigned int *)v105 + 4);
      v31[6] = v105;
      v31[7] = (*(_DWORD *)(*((_QWORD *)v105 + 6) + 4LL) >> 6) & 0xF;
      goto LABEL_23;
    }
    v40 = *(_QWORD *)(this[2].Count + 40);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v40 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *(_DWORD *)(v40 + 232);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, v43);
      }
      ExAcquirePushLockSharedEx(v40 + 208, 0LL);
    }
    v44 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 < *(_DWORD *)(v40 + 256) )
    {
      v45 = *(_QWORD *)(v40 + 240);
      v46 = *(_DWORD *)(v45 + 16 * v44 + 8);
      if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60)
        && (v46 & 0x2000) == 0
        && (v46 & 0x1F) != 0 )
      {
        v47 = v46 & 0x1F;
        if ( (_BYTE)v47 == 5 )
        {
          v49 = *(struct _EX_RUNDOWN_REF **)(v45 + 16LL * (unsigned int)v44);
LABEL_37:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104, v49);
          ExReleasePushLockSharedEx(v40 + 208, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v30) = -1073741811;
          if ( v104 )
          {
            v53 = this[2].Count;
            v54 = *(_QWORD *)(*((_QWORD *)v104 + 1) + 16LL);
            v55 = *(_QWORD *)(v53 + 16);
            v56 = *(_QWORD *)(v55 + 16);
            if ( *(_QWORD *)(v54 + 16) == v56 )
            {
              memset(&v114, 0, sizeof(v114));
              v114.hAllocation = *(HANDLE *)(*((_QWORD *)v104 + 6) + 16LL);
              v57 = ADAPTER_RENDER::DdiDescribeAllocation(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL) + 2704LL),
                      &v114,
                      v54);
              v30 = v57;
              if ( v57 >= 0 )
              {
                *(_QWORD *)&v106.left = 0LL;
                v108 = 0LL;
                if ( a6 )
                {
                  v108 = *a6;
                  bottom = v108.bottom;
                  right = v108.right;
                }
                else
                {
                  right = v115.Width;
                  bottom = v115.Height;
                }
                v63 = a8;
                Width = v114.Width;
                v65 = right - v108.left;
                Height = v114.Height;
                if ( v65 < (int)v114.Width )
                  Width = v65;
                v67 = bottom - v108.top;
                v106.right = Width;
                if ( (int)v67 < (int)v114.Height )
                  Height = v67;
                v108.right = Width + v108.left;
                v106.bottom = Height;
                v108.bottom = Height + v108.top;
                v68 = 0;
                if ( a7 )
                {
                  while ( v63->left >= 0 && v63->top >= 0 )
                  {
                    if ( v63->right > Width || v63->bottom > Height )
                    {
                      v74 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v108.top, v67);
                      v74[3] = v63->right;
                      v74[4] = v63->bottom;
                      v74[5] = Width;
                      v74[6] = Height;
                      goto LABEL_61;
                    }
                    ++v68;
                    ++v63;
                    if ( v68 >= a7 )
                      goto LABEL_57;
                  }
                  v74 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v108.top, v67);
                  v74[3] = v63->left;
                  top = v63->top;
                  v74[5] = 0LL;
                  v74[6] = 0LL;
                  v74[4] = top;
LABEL_61:
                  WdLogEvent5_WdError(v74);
                  LODWORD(v30) = -1073741811;
                  goto LABEL_88;
                }
LABEL_57:
                if ( BYTE1(this[57].Count) )
                {
                  v69 = *(_QWORD *)(this[2].Count + 16);
                  v70 = *(_QWORD *)(v69 + 16);
                  Current = DXGPROCESS::GetCurrent(v69, v67);
                  LODWORD(v103) = 0;
                  v72 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v70 + 4240),
                          Current,
                          (struct DXGCONTEXT *)this,
                          *((_DWORD *)v105 + 24),
                          *((_DWORD *)v104 + 24),
                          &v108,
                          &v106,
                          a7,
                          Src,
                          v103,
                          0LL);
                }
                else if ( !BYTE6(this[56].Ptr)
                       || ((v76 = (struct DXGDEVICE *)this[2].Count,
                            v77 = this[52].Count,
                            LOBYTE(v60) = HIBYTE(this[56].Ptr),
                            v78 = (struct ADAPTER_RENDER *)*((_QWORD *)v76 + 2),
                            (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v78 + 80) + 8LL)
                                                                                       + 256LL))(
                              *((_QWORD *)v78 + 81),
                              *((_QWORD *)v104 + 3),
                              v60,
                              v77))
                        || (v72 = MapGpuVaForAllocation(v78, v76, v77, v104), v72 >= 0))
                       && ((LOBYTE(v79) = HIBYTE(this[56].Ptr),
                            (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 640LL) + 8LL)
                                                                                       + 256LL))(
                              *((_QWORD *)v78 + 81),
                              *((_QWORD *)v105 + 3),
                              v79,
                              v77))
                        || (v72 = MapGpuVaForAllocation(v78, v76, v77, v105), v72 >= 0)) )
                {
                  v80 = this[48].Count;
                  v107 = 0LL;
                  if ( !v80 )
                    goto LABEL_74;
                  v81 = this[49].Count;
                  v82 = 0;
                  if ( !v81 )
                    goto LABEL_74;
                  while ( !*(_QWORD *)(v80 + 8LL * v82) )
                  {
                    if ( ++v82 >= v81 )
                      goto LABEL_74;
                  }
                  v107 = *(struct _VIDMM_DMA_BUFFER **)(v80 + 8LL * v82);
                  *(_QWORD *)(v80 + 8LL * v82) = 0LL;
                  if ( v107 )
                  {
                    v83 = v110;
                  }
                  else
                  {
LABEL_74:
                    v83 = v110;
                    v84 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v107, v110, 1);
                    v30 = v84;
                    if ( v84 < 0 )
                    {
                      v52 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
                      v52[3] = v30;
                      goto LABEL_76;
                    }
                  }
                  memset(&v116, 0, sizeof(v116));
                  v87 = v106;
                  v116.Flags.Value |= 1u;
                  *(_QWORD *)&v106.left = 0LL;
                  v116.pDstSubRects = Src;
                  v88 = this[2].Count;
                  v116.DstRect = v87;
                  v116.SubRectCnt = a7;
                  v116.SrcRect = v108;
                  *(_QWORD *)&v106.right = *(_QWORD *)(v88 + 16);
                  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v106);
                  v92 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v106.left;
                  if ( *(_QWORD *)&v106.left )
                  {
                    v94 = **(_DWORD **)&v106.left | 0x10000;
                    **(_DWORD **)&v106.left = v94;
                    v95 = *(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL);
                    if ( (v95 & 2) != 0
                      || (v95 & 1) != 0
                      || (v96 = *(_DWORD *)(*((_QWORD *)v105 + 6) + 4LL), (v96 & 2) != 0)
                      || (v96 & 1) != 0 )
                    {
                      v94 |= 1u;
                      *(_DWORD *)v92 = v94;
                    }
                    v97 = v109;
                    *(_DWORD *)v92 = v94 | 0x100;
                    v98 = DXGCONTEXT::SubmitPresent(
                            this,
                            0LL,
                            v113,
                            v97,
                            v112,
                            0LL,
                            v13,
                            v12,
                            &v116,
                            0LL,
                            v107,
                            v92,
                            v114.Format,
                            v83);
                    v30 = v98;
                    if ( v98 < 0 )
                    {
                      v101 = WdLogNewEntry5_WdError(v100, v99);
                      *(_QWORD *)(v101 + 24) = v30;
                      WdLogEvent5_WdError(v101);
                    }
                  }
                  else
                  {
                    v93 = WdLogNewEntry5_WdLowResource(v90, v89, 0LL, v91);
                    *(_QWORD *)(v93 + 24) = 7324LL;
                    WdLogEvent5_WdLowResource(v93);
                    LODWORD(v30) = -1073741801;
                  }
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v106);
                  goto LABEL_88;
                }
                LODWORD(v30) = v72;
LABEL_88:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v73);
                goto LABEL_89;
              }
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
              v52[3] = v30;
              v52[4] = this;
              v52[5] = *((unsigned int *)v104 + 4);
              v52[6] = v104;
              v52[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
            }
            else
            {
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v55, v56);
              v52[3] = this[2].Count;
              v52[4] = v104;
              v52[5] = -1073741811LL;
            }
          }
          else
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
            v52[3] = v12;
          }
LABEL_76:
          WdLogEvent5_WdError(v52);
          goto LABEL_88;
        }
        v48 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60, v47);
        *(_QWORD *)(v48 + 24) = 316LL;
        WdLogEvent5_WdError(v48);
      }
    }
    v49 = 0LL;
    goto LABEL_37;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
  v31[3] = v13;
LABEL_23:
  WdLogEvent5_WdError(v31);
LABEL_89:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v105, v39);
  return (unsigned int)v30;
}
