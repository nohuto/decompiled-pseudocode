/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027DD9C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023AB60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016994 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F58E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016BC24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C027F470 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        UINT a8,
        const struct tagRECT *a9,
        struct COREDEVICEACCESS *a10)
{
  ULONG_PTR Count; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rax
  ULONG_PTR v28; // r9
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r9
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  ULONG_PTR v49; // r9
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct DXGDEVICE *v57; // r14
  unsigned int v58; // esi
  struct ADAPTER_RENDER *v59; // rbx
  __int64 v60; // r8
  int v61; // eax
  __int64 right; // rcx
  LONG v63; // eax
  LONG left; // r9d
  __int64 v65; // rdx
  LONG top; // r10d
  LONG bottom; // r8d
  __int64 v68; // rcx
  int *v69; // rax
  int v70; // ebx
  LONG v71; // r11d
  LONG v72; // eax
  ULONG_PTR v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  const RECT *v80; // rax
  RECT v81; // xmm0
  RECT v82; // xmm1
  ULONG_PTR v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v87; // r8
  __int64 v88; // rax
  int v89; // edx
  int v90; // eax
  int v91; // eax
  struct DXGHWQUEUE *v92; // rdx
  DXGCONTEXT *v93; // rcx
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  struct DXGALLOCATION *v100; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v101; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v102; // [rsp+80h] [rbp-80h]
  struct _VIDMM_DMA_BUFFER *v103; // [rsp+88h] [rbp-78h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v104[2]; // [rsp+90h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v105; // [rsp+A0h] [rbp-60h]
  struct DXGHWQUEUE *v106; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGCONTEXT **v107; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v108; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v109; // [rsp+E8h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v110; // [rsp+120h] [rbp+20h] BYREF

  v107 = a5;
  v104[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a9;
  v105 = a10;
  Count = this[2].Count;
  v12 = a2;
  v13 = a3;
  v102 = a2;
  v14 = *(_QWORD *)(Count + 40);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *(_DWORD *)(v14 + 232);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx(v14 + 208, 0LL);
  }
  v18 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *(_DWORD *)(v14 + 256) )
    goto LABEL_13;
  v19 = *(_QWORD *)(v14 + 240);
  v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
  if ( (((unsigned int)v12 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v21 = v20 & 0x1F;
  if ( (_BYTE)v21 != 5 )
  {
    v22 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60, v21);
    *(_QWORD *)(v22 + 24) = 267LL;
    WdLogEvent5_WdError(v22);
LABEL_13:
    v23 = 0LL;
    goto LABEL_14;
  }
  v23 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * (unsigned int)v18);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101, v23);
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v26) = -1073741811;
  if ( v101 )
  {
    v28 = this[2].Count;
    v29 = *(_QWORD *)(*((_QWORD *)v101 + 1) + 16LL);
    v30 = *(_QWORD *)(v28 + 16);
    v31 = *(_QWORD *)(v30 + 16);
    if ( *(_QWORD *)(v29 + 16) != v31 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v30, v31);
      v27[3] = this[2].Count;
      v27[4] = v101;
      v27[5] = -1073741811LL;
      goto LABEL_21;
    }
    memset(&v109, 0, sizeof(v109));
    v109.hAllocation = *(HANDLE *)(*((_QWORD *)v101 + 6) + 16LL);
    v32 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 2704LL),
            &v109,
            v29);
    v26 = v32;
    if ( v32 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
      v27[3] = v26;
      v27[4] = this;
      v27[5] = *((unsigned int *)v101 + 4);
      v27[6] = v101;
      v27[7] = (*(_DWORD *)(*((_QWORD *)v101 + 6) + 4LL) >> 6) & 0xF;
      goto LABEL_21;
    }
    v36 = *(_QWORD *)(this[2].Count + 40);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v36 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v39 = *(_DWORD *)(v36 + 232);
        if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, v39);
      }
      ExAcquirePushLockSharedEx(v36 + 208, 0LL);
    }
    v40 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < *(_DWORD *)(v36 + 256) )
    {
      v41 = *(_QWORD *)(v36 + 240);
      v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60)
        && (v42 & 0x2000) == 0
        && (v42 & 0x1F) != 0 )
      {
        v43 = v42 & 0x1F;
        if ( (_BYTE)v43 == 5 )
        {
          v45 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * (unsigned int)v40);
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v100, v45);
          ExReleasePushLockSharedEx(v36 + 208, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v26) = -1073741811;
          if ( v100 )
          {
            v49 = this[2].Count;
            v50 = *(_QWORD *)(*((_QWORD *)v100 + 1) + 16LL);
            v51 = *(_QWORD *)(v49 + 16);
            v52 = *(_QWORD *)(v51 + 16);
            if ( *(_QWORD *)(v50 + 16) == v52 )
            {
              memset(&v108, 0, sizeof(v108));
              v108.hAllocation = *(HANDLE *)(*((_QWORD *)v100 + 6) + 16LL);
              v53 = ADAPTER_RENDER::DdiDescribeAllocation(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) + 2704LL),
                      &v108,
                      v50);
              v26 = v53;
              if ( v53 >= 0 )
              {
                if ( BYTE6(this[56].Ptr) )
                {
                  v57 = (struct DXGDEVICE *)this[2].Count;
                  v58 = this[52].Count;
                  LOBYTE(v56) = HIBYTE(this[56].Ptr);
                  v59 = (struct ADAPTER_RENDER *)*((_QWORD *)v57 + 2);
                  if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v59 + 80)
                                                                                               + 8LL)
                                                                                   + 256LL))(
                          *((_QWORD *)v59 + 81),
                          *((_QWORD *)v100 + 3),
                          v56,
                          v58)
                    && (v61 = MapGpuVaForAllocation(v59, v57, v58, v100), v61 < 0)
                    || (LOBYTE(v60) = HIBYTE(this[56].Ptr),
                        !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 640LL)
                                                                                                + 8LL)
                                                                                    + 256LL))(
                           *((_QWORD *)v59 + 81),
                           *((_QWORD *)v101 + 3),
                           v60,
                           v58))
                    && (v61 = MapGpuVaForAllocation(v59, v57, v58, v101), v61 < 0) )
                  {
                    LODWORD(v26) = v61;
                    goto LABEL_97;
                  }
                  LODWORD(v12) = v102;
                }
                right = (unsigned int)a6->right;
                if ( a6->left >= (int)right
                  || a6->left < 0
                  || (int)right > (int)v109.Width
                  || (v63 = a6->top, right = (unsigned int)a6->bottom, v63 >= (int)right)
                  || v63 < 0
                  || (int)right > (int)v109.Height )
                {
                  v76 = WdLogNewEntry5_WdError(right, v54);
                  *(_QWORD *)(v76 + 24) = 7483LL;
                }
                else
                {
                  left = a7->left;
                  v65 = (unsigned int)a7->right;
                  if ( a7->left >= (int)v65
                    || left < 0
                    || (int)v65 > (int)v108.Width
                    || (top = a7->top, bottom = a7->bottom, top >= bottom)
                    || top < 0
                    || bottom > (int)v108.Height )
                  {
                    v76 = WdLogNewEntry5_WdError(right, v65);
                    *(_QWORD *)(v76 + 24) = 7493LL;
                  }
                  else
                  {
                    v68 = 0LL;
                    if ( !a8 )
                    {
LABEL_70:
                      v103 = 0LL;
                      v73 = this[48].Count;
                      if ( !v73 )
                        goto LABEL_77;
                      v74 = this[49].Count;
                      v75 = 0LL;
                      if ( !v74 )
                        goto LABEL_77;
                      while ( !*(_QWORD *)(v73 + 8 * v75) )
                      {
                        v75 = (unsigned int)(v75 + 1);
                        if ( (unsigned int)v75 >= v74 )
                          goto LABEL_77;
                      }
                      v103 = *(struct _VIDMM_DMA_BUFFER **)(v73 + 8 * v75);
                      *(_QWORD *)(v73 + 8 * v75) = 0LL;
                      if ( !v103 )
                      {
LABEL_77:
                        v77 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v103, v105, 1);
                        v26 = v77;
                        if ( v77 < 0 )
                        {
                          v48 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78);
                          v48[3] = v26;
                          goto LABEL_42;
                        }
                      }
                      memset(&v110, 0, sizeof(v110));
                      v80 = (const RECT *)v104[0];
                      v81 = *a7;
                      v82 = *a6;
                      v110.Flags.Value |= 1u;
                      v104[0] = 0LL;
                      v110.pDstSubRects = v80;
                      v83 = this[2].Count;
                      v110.DstRect = v81;
                      v110.SubRectCnt = a8;
                      v110.SrcRect = v82;
                      v104[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v83 + 16);
                      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v104);
                      v87 = v104[0];
                      if ( v104[0] )
                      {
                        v89 = *(_DWORD *)v104[0] | 0x10000;
                        *(_DWORD *)v104[0] = v89;
                        v90 = *(_DWORD *)(*((_QWORD *)v100 + 6) + 4LL);
                        if ( (v90 & 2) != 0
                          || (v90 & 1) != 0
                          || (v91 = *(_DWORD *)(*((_QWORD *)v101 + 6) + 4LL), (v91 & 2) != 0)
                          || (v91 & 1) != 0 )
                        {
                          v89 |= 1u;
                          *(_DWORD *)v87 = v89;
                        }
                        *(_DWORD *)v87 = v89 | 0x120;
                        v106 = 0LL;
                        if ( (HIDWORD(this[52].Ptr) & 0x10) == 0 )
                          goto LABEL_91;
                        v92 = 0LL;
                        v93 = (DXGCONTEXT *)this[53].Count;
                        if ( v93 != (DXGCONTEXT *)&this[53] )
                          v92 = (struct DXGHWQUEUE *)this[53].Count;
                        v106 = v92;
                        if ( v92 )
                        {
LABEL_91:
                          v95 = DXGCONTEXT::SubmitPresent(
                                  this,
                                  0LL,
                                  &v106,
                                  0,
                                  v107,
                                  0LL,
                                  v12,
                                  v13,
                                  &v110,
                                  0LL,
                                  v103,
                                  v87,
                                  v108.Format,
                                  v105);
                          v26 = v95;
                          if ( v95 < 0 )
                          {
                            v98 = WdLogNewEntry5_WdError(v97, v96);
                            *(_QWORD *)(v98 + 24) = v26;
                            WdLogEvent5_WdError(v98);
                          }
                        }
                        else
                        {
                          v94 = WdLogNewEntry5_WdError(v93, 0LL);
                          *(_QWORD *)(v94 + 24) = this;
                          WdLogEvent5_WdError(v94);
                          LODWORD(v26) = -1073741823;
                        }
                      }
                      else
                      {
                        v88 = WdLogNewEntry5_WdLowResource(v85, v84, 0LL, v86);
                        *(_QWORD *)(v88 + 24) = 7550LL;
                        WdLogEvent5_WdLowResource(v88);
                        LODWORD(v26) = -1073741801;
                      }
                      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v104);
                      goto LABEL_97;
                    }
                    while ( 1 )
                    {
                      v69 = (int *)((char *)v104[0] + 16 * (unsigned int)v68);
                      v70 = v69[2];
                      if ( *v69 >= v70 )
                        break;
                      if ( *v69 < left )
                        break;
                      if ( v70 > (int)v65 )
                        break;
                      v71 = v69[1];
                      v72 = v69[3];
                      if ( v71 >= v72 || v71 < top || v72 > bottom )
                        break;
                      v68 = (unsigned int)(v68 + 1);
                      if ( (unsigned int)v68 >= a8 )
                        goto LABEL_70;
                    }
                    v76 = WdLogNewEntry5_WdError(v68, v65);
                    *(_QWORD *)(v76 + 24) = 7506LL;
                  }
                }
                WdLogEvent5_WdError(v76);
                LODWORD(v26) = -1073741811;
                goto LABEL_97;
              }
              v48 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
              v48[3] = v26;
              v48[4] = this;
              v48[5] = *((unsigned int *)v100 + 4);
              v48[6] = v100;
              v48[7] = (*(_DWORD *)(*((_QWORD *)v100 + 6) + 4LL) >> 6) & 0xF;
            }
            else
            {
              v48 = (_QWORD *)WdLogNewEntry5_WdError(v51, v52);
              v48[3] = this[2].Count;
              v48[4] = v100;
              v48[5] = -1073741811LL;
            }
          }
          else
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
            v48[3] = v13;
          }
LABEL_42:
          WdLogEvent5_WdError(v48);
LABEL_97:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v100, v54);
          goto LABEL_98;
        }
        v44 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v43);
        *(_QWORD *)(v44 + 24) = 267LL;
        WdLogEvent5_WdError(v44);
      }
    }
    v45 = 0LL;
    goto LABEL_35;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
  v27[3] = v12;
LABEL_21:
  WdLogEvent5_WdError(v27);
LABEL_98:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v101, v35);
  return (unsigned int)v26;
}
