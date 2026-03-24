/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0281CCC
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FF5D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C017217C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C0173984 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C022EDD4 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C02825CC (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct _EX_RUNDOWN_REF *v7; // r13
  UINT v9; // r14d
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *PoolWithTag; // r12
  ULONG_PTR Count; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  UINT v18; // edi
  ULONG_PTR v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax
  int v22; // edi
  __int64 v23; // rdx
  struct _EX_RUNDOWN_REF *v24; // r13
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  __int64 v27; // rdi
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  char *v35; // r14
  char *v36; // r8
  unsigned int v37; // edx
  __int64 v38; // r10
  int v39; // r8d
  UINT v40; // edi
  __int64 *v41; // rdx
  ULONG_PTR v42; // rcx
  bool v43; // al
  __int64 v44; // r8
  char *v45; // rdx
  char *v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rax
  DXGK_ALLOCATIONLIST *v49; // rcx
  __int64 v50; // rdx
  struct _DXGKARG_PRESENT *v51; // r8
  PVOID Ptr; // r9
  ULONG_PTR v53; // rdx
  __int64 v54; // rdx
  UINT i; // r14d
  struct _KTHREAD **v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // esi
  unsigned int v60; // r14d
  struct _EX_RUNDOWN_REF *v62; // [rsp+30h] [rbp-1A8h] BYREF
  int v63; // [rsp+38h] [rbp-1A0h] BYREF
  UINT v64; // [rsp+3Ch] [rbp-19Ch]
  unsigned int v65; // [rsp+40h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v66; // [rsp+48h] [rbp-190h]
  UINT v67; // [rsp+50h] [rbp-188h]
  __int64 v68; // [rsp+58h] [rbp-180h] BYREF
  DXGK_ALLOCATIONLIST *v69; // [rsp+60h] [rbp-178h]
  unsigned int v70; // [rsp+68h] [rbp-170h]
  DXGPROCESS *v71; // [rsp+70h] [rbp-168h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+78h] [rbp-160h]
  __int64 v73; // [rsp+80h] [rbp-158h]
  unsigned int v74; // [rsp+88h] [rbp-150h]
  struct DXGALLOCATION *v75; // [rsp+90h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v76; // [rsp+98h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v77[4]; // [rsp+A0h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v78; // [rsp+C0h] [rbp-118h]
  PVOID P; // [rsp+C8h] [rbp-110h]
  _BYTE v80[32]; // [rsp+D0h] [rbp-108h] BYREF
  UINT v81; // [rsp+F0h] [rbp-E8h]
  PVOID v82; // [rsp+100h] [rbp-D8h] BYREF
  char v83; // [rsp+108h] [rbp-D0h] BYREF
  int v84; // [rsp+188h] [rbp-50h]

  v7 = a4;
  v66 = a4;
  v76 = a2;
  v77[3] = this;
  v77[2] = a4;
  v75 = a5;
  v78 = a6;
  v71 = *(DXGPROCESS **)(this[2].Count + 40);
  v9 = a3 + 1;
  v67 = a3 + 1;
  v65 = 0;
  v82 = 0LL;
  v84 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v82, a3 + 1);
  v69 = (DXGK_ALLOCATIONLIST *)v82;
  PoolWithTag = 0LL;
  P = 0LL;
  v81 = 0;
  if ( v9 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v80;
    P = v80;
LABEL_5:
    v81 = v9;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v9);
      PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
    }
    goto LABEL_7;
  }
  v10 = 0xFFFFFFFFFFFFFFFFuLL % v9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    P = PoolWithTag;
    goto LABEL_5;
  }
LABEL_7:
  v77[1] = PoolWithTag;
  if ( !v69 || !PoolWithTag )
  {
    v58 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v58 + 24) = 8335LL;
    WdLogEvent5_WdLowResource(v58);
    v22 = -1073741801;
    goto LABEL_79;
  }
  Count = this[2].Count;
  v16 = *(_QWORD *)(Count + 1848);
  if ( v16 != *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) || DXGPROCESS::IsRemoteConnection(v71) )
    *((_DWORD *)a7 + 29) = 0;
  *(_DWORD *)a7 |= 0xC00u;
  *((_DWORD *)a7 + 35) = v9;
  v17 = *((_BYTE *)a7 + 348) != 0 ? 0x60 : 0;
  *(_DWORD *)((char *)a7 + v17 + 480) = *(_DWORD *)((_BYTE *)a7 + v17 + 480) & 0xFFFFFC00 | 1;
  v18 = 0;
  while ( 1 )
  {
    v64 = v18;
    if ( v18 >= v9 )
    {
      v51 = v78;
      v78->NumSrcAllocations = v9;
      v51->pAllocationList = v69;
      Ptr = 0LL;
      v53 = this[2].Count;
      if ( (v51->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL) + 2650LL) )
        Ptr = this[23].Ptr;
      v22 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v53 + 16), Ptr, v51);
      if ( v22 >= 0 )
      {
        for ( i = 0; i < v67; ++i )
        {
          v56 = (struct _KTHREAD **)v7[i].Count;
          if ( v56[59] != KeGetCurrentThread() )
          {
            v57 = WdLogNewEntry5_WdAssertion(v56, v54);
            *(_QWORD *)(v57 + 24) = 8561LL;
            WdLogEvent5_WdAssertion(v57);
            v56 = (struct _KTHREAD **)v7[i].Count;
          }
          if ( (HIDWORD(this[52].Ptr) & 0x10) != 0 )
          {
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)v56, 0LL, 0, 0, a7, 0);
            v56 = (struct _KTHREAD **)v7[i].Count;
          }
          v22 = DXGCONTEXT::SubmitCommandToImplicitQueue((DXGCONTEXT *)v56, a7);
          if ( v22 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x800u;
        }
      }
      goto LABEL_79;
    }
    v73 = v18;
    v19 = v7[v18].Count;
    v20 = *(_DWORD *)(v19 + 416);
    v70 = v20;
    v62 = 0LL;
    if ( !*(_BYTE *)(v19 + 454) )
    {
      v21 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v21 + 24) = 8375LL;
LABEL_16:
      WdLogEvent5_WdError(v21);
      v22 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v23);
      goto LABEL_79;
    }
    if ( !v18 )
    {
      v24 = (struct _EX_RUNDOWN_REF *)v75;
      goto LABEL_31;
    }
    v25 = v18 - 1;
    if ( v20 <= *(_DWORD *)(v7[v25].Count + 416) )
    {
      v21 = WdLogNewEntry5_WdError(v17, v25);
      *(_QWORD *)(v21 + 24) = 8391LL;
      goto LABEL_16;
    }
    v26 = &v76->BroadcastSrcAllocation[v25];
    if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v74 = *v26;
    v27 = v74;
    AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)v71,
                                                  (DXGALLOCATIONREFERENCE *)v77,
                                                  v74);
    DXGALLOCATIONREFERENCE::MoveAssign(&v62, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v77, v29);
    v24 = v62;
    if ( !v62 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v32[3] = v27;
      v22 = -1073741811;
      v32[4] = -1073741811LL;
      goto LABEL_26;
    }
    v16 = *(_QWORD *)(v62[1].Count + 16);
    v17 = *(_QWORD *)(this[2].Count + 16);
    if ( *(_QWORD *)(v16 + 16) != *(_QWORD *)(v17 + 16) )
      break;
    v18 = v64;
LABEL_31:
    if ( ((LODWORD(v24[9].Count) >> 12) & 0x3F) != v20 )
    {
      v34 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v34 + 24) = v24;
      WdLogEvent5_WdError(v34);
      v22 = -1073741811;
      goto LABEL_27;
    }
    v35 = (char *)a7 + 576;
    if ( *((_BYTE *)a7 + 348) )
      v36 = &v35[64 * (unsigned __int64)(v18 * *((_DWORD *)a7 + 145))
               + 48
               + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)];
    else
      v36 = (char *)a7 + 488;
    v72 = (struct _EX_RUNDOWN_REF *)v36;
    v22 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 640LL)
                                                                   + 8LL)
                                                       + 416LL))(
            *(_QWORD *)(this[2].Count + 760),
            v24[3].Count);
    if ( v22 < 0 )
      goto LABEL_27;
    v37 = v65;
    PoolWithTag[v65] = (struct _EX_RUNDOWN_REF)v72->Count;
    v65 = v37 + 1;
    v63 = 0;
    v68 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
    {
      v39 = 0xFFFF;
      v63 = 0xFFFF;
      v68 = -1LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v38 + 640) + 8LL)
                                                                       + 224LL))(
        *(_QWORD *)(v38 + 648),
        *(_QWORD *)(v24[6].Count + 8),
        &v63,
        &v68,
        0LL);
      v39 = v63;
    }
    v40 = v64;
    if ( *((_BYTE *)a7 + 348) )
      *(_WORD *)&v35[64 * (unsigned __int64)(v64 * *((_DWORD *)a7 + 145))
                   + 32
                   + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)] = v39;
    else
      *((_DWORD *)a7 + 135) ^= (*((_DWORD *)a7 + 135) ^ (v39 << 17)) & 0x3E0000;
    if ( *((_BYTE *)a7 + 348) )
      v41 = (__int64 *)&v35[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 145))
                          + 40
                          + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)];
    else
      v41 = (__int64 *)((char *)a7 + 504);
    *v41 = v68;
    v42 = v24[5].Count;
    if ( v42 )
      v43 = (*(_DWORD *)(v42 + 4) & 8) != 0;
    else
      v43 = 0;
    if ( v43 )
      v44 = *(_QWORD *)(*(_QWORD *)(v42 + 56) + 184LL);
    else
      v44 = 0LL;
    if ( *((_BYTE *)a7 + 348) )
      *(_QWORD *)((char *)a7
                + 64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 145))
                + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)
                + 632) = v44;
    else
      *((_QWORD *)a7 + 70) = v44;
    if ( *((_BYTE *)a7 + 348) )
      v45 = &v35[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 145))
               + 24
               + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)];
    else
      v45 = (char *)a7 + 496;
    *(_QWORD *)v45 = *(_QWORD *)(v24[6].Count + 16);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2650LL) )
    {
      v44 = *(_QWORD *)(v66[v73].Count + 184);
      if ( *((_BYTE *)a7 + 348) )
        v46 = &v35[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 145))
                 + 16
                 + *((_DWORD *)a7 + 145) * ((8 * *((_DWORD *)a7 + 146) + 199) & 0xFFFFFFF8)];
      else
        v46 = (char *)a7 + 552;
      *(_QWORD *)v46 = v44;
    }
    if ( *((_BYTE *)a7 + 348) )
      *((_DWORD *)a7 + 154) = -1;
    v47 = 32 * v73;
    *((struct _EX_RUNDOWN_REF *)&v69->hDeviceSpecificAllocation + 4 * v73) = v24[4];
    LOBYTE(v44) = HIBYTE(this[56].Ptr);
    v48 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 256LL))(
            *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 648LL),
            v24[3].Count,
            v44,
            v70);
    v49 = v69;
    *(_QWORD *)((char *)&v69->8 + v47) = v48;
    *(LONGLONG *)((char *)&v49->PhysicalAddress.QuadPart + v47) = v68;
    *(_WORD *)((char *)&v49[1].hDeviceSpecificAllocation + v47) = v63;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v50);
    v18 = v40 + 1;
    v7 = v66;
    v9 = v67;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
  v32[3] = this[2].Count;
  v32[4] = v24;
  v22 = -1073741811;
  v32[5] = -1073741811LL;
LABEL_26:
  WdLogEvent5_WdError(v32);
LABEL_27:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v33);
  v7 = v66;
LABEL_79:
  if ( v22 < 0 )
  {
    v59 = 0;
    v60 = v65;
    while ( v59 < v60 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 432LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 648LL),
        (unsigned int)(1 << *(_DWORD *)(v7[v59].Count + 416)),
        PoolWithTag[v59].Count,
        0LL);
      ++v59;
    }
  }
  if ( P != v80 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v81 = 0;
  if ( v82 != &v83 && v82 )
    ExFreePoolWithTag(v82, 0);
  return (unsigned int)v22;
}
