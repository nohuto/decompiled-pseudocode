/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C032F268
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366B70 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0330C90 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
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
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // edx
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r10
  int v30; // edx
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // r8
  const wchar_t *v36; // r9
  struct DXGDEVICE *v37; // r14
  unsigned int v38; // edi
  struct ADAPTER_RENDER *v39; // rbx
  __int64 v40; // r8
  int v41; // eax
  int right; // ecx
  LONG v43; // eax
  LONG v44; // ecx
  LONG left; // r10d
  int v46; // r9d
  LONG top; // r8d
  LONG bottom; // edx
  unsigned int v49; // ecx
  LONG *v50; // rax
  int v51; // ebx
  LONG v52; // r11d
  LONG v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // r9d
  unsigned int v56; // eax
  struct COREDEVICEACCESS *v57; // rbx
  int v58; // eax
  RECT v59; // xmm0
  RECT v60; // xmm1
  __int64 v61; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v62; // r8
  int v63; // edx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct DXGHWQUEUE *v67; // rdx
  int v68; // eax
  __int64 v69; // rbx
  const wchar_t *v70; // r9
  struct DXGALLOCATION *v72; // [rsp+28h] [rbp-D8h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  struct DXGALLOCATION *v74; // [rsp+38h] [rbp-C8h]
  __int64 v75; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *v76; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v77; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v78; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v80[2]; // [rsp+90h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v81; // [rsp+A0h] [rbp-60h]
  struct DXGHWQUEUE *v82; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGCONTEXT **v83; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v84; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v85; // [rsp+E8h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v86; // [rsp+120h] [rbp+20h] BYREF

  v83 = a5;
  v80[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a9;
  v81 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v79 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *(_DWORD *)(v14 + 272);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v17);
    }
    ExAcquirePushLockSharedEx(v14 + 248, 0LL);
  }
  v18 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *(_DWORD *)(v14 + 296)
    && (v19 = *(_QWORD *)(v14 + 280),
        v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
        (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) != 0 )
  {
    if ( (v20 & 0x1F) == 5 )
    {
      v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * (unsigned int)v18);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v21 = 0LL;
    }
  }
  else
  {
    v21 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v21);
  ExReleasePushLockSharedEx(v14 + 248, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v14) = -1073741811;
  if ( v77 )
  {
    v22 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v77 + 1) + 16LL) + 16LL) != v23 )
    {
      WdLogSingleEntry3(2LL, v22, v77, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)this + 2),
        (__int64)v77,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_100;
    }
    memset(&v85, 0, sizeof(v85));
    v85.hAllocation = *(HANDLE *)(*((_QWORD *)v77 + 6) + 16LL);
    v24 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2800LL),
            &v85,
            v23);
    v14 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v24,
        this,
        *((unsigned int *)v77 + 4),
        v77,
        (*(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v14,
        (__int64)this,
        *((unsigned int *)v77 + 4),
        (__int64)v77,
        (*(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) >> 6) & 0xF);
      goto LABEL_100;
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v14 + 272);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v27);
      }
      ExAcquirePushLockSharedEx(v14 + 248, 0LL);
    }
    v28 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v14 + 296) )
    {
      v29 = *(_QWORD *)(v14 + 280);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        if ( (v30 & 0x1F) == 5 )
        {
          v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * (unsigned int)v28);
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v31);
          ExReleasePushLockSharedEx(v14 + 248, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v14) = -1073741811;
          if ( !v76 )
          {
            WdLogSingleEntry1(2LL, v13);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid destination handle 0x%I64x",
              v13,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_99:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76);
            goto LABEL_100;
          }
          v32 = *((_QWORD *)this + 2);
          v33 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 1) + 16LL) + 16LL) != v33 )
          {
            WdLogSingleEntry3(2LL, v32, v76, -1073741811LL);
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
            goto LABEL_99;
          }
          memset(&v84, 0, sizeof(v84));
          v84.hAllocation = *(HANDLE *)(*((_QWORD *)v76 + 6) + 16LL);
          v34 = ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 2800LL),
                  &v84,
                  v33);
          v14 = v34;
          if ( v34 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v34,
              this,
              *((unsigned int *)v76 + 4),
              v76,
              (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
            v36 = L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x";
            v75 = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
            v74 = v76;
            v73 = *((unsigned int *)v76 + 4);
            v72 = this;
LABEL_42:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v36, v14, (__int64)v72, v73, (__int64)v74, v75);
            goto LABEL_99;
          }
          if ( *((_BYTE *)this + 438) )
          {
            if ( (v37 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                  v38 = *((_DWORD *)this + 100),
                  LOBYTE(v35) = *((_BYTE *)this + 439),
                  v39 = (struct ADAPTER_RENDER *)*((_QWORD *)v37 + 2),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v39 + 81) + 8LL)
                                                                              + 256LL))(
                     *((_QWORD *)v39 + 82),
                     *((_QWORD *)v76 + 3),
                     v35,
                     v38))
              && (v41 = MapGpuVaForAllocation(v39, v37, v38, v76), v41 < 0)
              || (LOBYTE(v40) = *((_BYTE *)this + 439),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                          + 8LL)
                                                                              + 256LL))(
                     *((_QWORD *)v39 + 82),
                     *((_QWORD *)v77 + 3),
                     v40,
                     v38))
              && (v41 = MapGpuVaForAllocation(v39, v37, v38, v77), v41 < 0) )
            {
              LODWORD(v14) = v41;
              goto LABEL_99;
            }
          }
          right = a6->right;
          if ( a6->left >= right
            || a6->left < 0
            || right > (int)v85.Width
            || (v43 = a6->top, v44 = a6->bottom, v43 >= v44)
            || v43 < 0
            || v44 > (int)v85.Height )
          {
            v69 = 7695LL;
            WdLogSingleEntry1(2LL, 7695LL);
            v70 = L"Invalid source rect";
          }
          else
          {
            left = a7->left;
            v46 = a7->right;
            if ( a7->left < v46 && left >= 0 && v46 <= (int)v84.Width )
            {
              top = a7->top;
              bottom = a7->bottom;
              if ( top < bottom && top >= 0 && bottom <= (int)v84.Height )
              {
                v49 = 0;
                if ( !a8 )
                {
LABEL_70:
                  v54 = *((_QWORD *)this + 46);
                  v78 = 0LL;
                  if ( !v54 )
                    goto LABEL_77;
                  v55 = *((_DWORD *)this + 94);
                  v56 = 0;
                  if ( !v55 )
                    goto LABEL_77;
                  while ( !*(_QWORD *)(v54 + 8LL * v56) )
                  {
                    if ( ++v56 >= v55 )
                      goto LABEL_77;
                  }
                  v78 = *(struct _VIDMM_DMA_BUFFER **)(v54 + 8LL * v56);
                  *(_QWORD *)(v54 + 8LL * v56) = 0LL;
                  if ( v78 )
                  {
                    v57 = v81;
                  }
                  else
                  {
LABEL_77:
                    v57 = v81;
                    v58 = DXGCONTEXT::AcquireDmaBuffer(this, &v78, v81, 1);
                    v14 = v58;
                    if ( v58 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v58);
                      v36 = L"Failed to acquire DMA buffer 0x%I64x";
                      v75 = 0LL;
                      v74 = 0LL;
                      v73 = 0LL;
                      v72 = 0LL;
                      goto LABEL_42;
                    }
                  }
                  memset(&v86, 0, sizeof(v86));
                  v59 = *a7;
                  v60 = *a6;
                  v86.Flags.Value |= 1u;
                  v86.pDstSubRects = (const RECT *)v80[0];
                  v61 = *((_QWORD *)this + 2);
                  v86.DstRect = v59;
                  v86.SubRectCnt = a8;
                  v86.SrcRect = v60;
                  v80[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v61 + 16);
                  v80[0] = 0LL;
                  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v80);
                  v62 = v80[0];
                  if ( v80[0] )
                  {
                    v63 = *(_DWORD *)v80[0] | 0x10000;
                    *(_DWORD *)v80[0] = v63;
                    v64 = *(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL);
                    if ( (v64 & 2) != 0
                      || (v64 & 1) != 0
                      || (v65 = *(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL), (v65 & 2) != 0)
                      || (v65 & 1) != 0 )
                    {
                      v63 |= 1u;
                      *(_DWORD *)v62 = v63;
                    }
                    *(_DWORD *)v62 = v63 | 0x120;
                    v66 = *((_DWORD *)this + 101);
                    v82 = 0LL;
                    if ( (v66 & 0x10) == 0 )
                      goto LABEL_91;
                    v67 = 0LL;
                    if ( *((DXGCONTEXT **)this + 51) != (DXGCONTEXT *)((char *)this + 408) )
                      v67 = (struct DXGHWQUEUE *)*((_QWORD *)this + 51);
                    v82 = v67;
                    if ( v67 )
                    {
LABEL_91:
                      v68 = DXGCONTEXT::SubmitPresent(
                              this,
                              0LL,
                              &v82,
                              0,
                              v83,
                              0LL,
                              v79,
                              v13,
                              &v86,
                              0LL,
                              v78,
                              v62,
                              v84.Format,
                              v57);
                      v14 = v68;
                      if ( v68 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v68);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"SubmitPresent failed 0x%I64x",
                          v14,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL, this);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Attempting to Blt on a HardwareContext:0x%I64x with no HwQueues",
                        (__int64)this,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      LODWORD(v14) = -1073741823;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(6LL, 7762LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262145,
                      -1,
                      (__int64)L"Failed to allocate VidSchSubmitData",
                      7762LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    LODWORD(v14) = -1073741801;
                  }
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v80);
                  goto LABEL_99;
                }
                while ( 1 )
                {
                  v50 = (LONG *)((char *)v80[0] + 16 * v49);
                  v51 = v50[2];
                  if ( *v50 >= v51 )
                    break;
                  if ( *v50 < left )
                    break;
                  if ( v51 > v46 )
                    break;
                  v52 = v50[1];
                  v53 = v50[3];
                  if ( v52 >= v53 || v52 < top || v53 > bottom )
                    break;
                  if ( ++v49 >= a8 )
                    goto LABEL_70;
                }
                WdLogSingleEntry1(2LL, 7718LL);
                DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid subrect", 7718LL, 0LL, 0LL, 0LL, 0LL);
LABEL_98:
                LODWORD(v14) = -1073741811;
                goto LABEL_99;
              }
            }
            v69 = 7705LL;
            WdLogSingleEntry1(2LL, 7705LL);
            v70 = L"Invalid destination rect";
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v70, v69, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_98;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v31 = 0LL;
    goto LABEL_35;
  }
  WdLogSingleEntry1(2LL, v12);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v12, 0LL, 0LL, 0LL, 0LL);
LABEL_100:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v77);
  return (unsigned int)v14;
}
