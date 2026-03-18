/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0332444
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01ED040 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01ED55C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02E2BD4 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  DXGPROCESS *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r9
  PVOID v12; // r8
  struct _EX_RUNDOWN_REF *Pool2; // r13
  __int64 v14; // rcx
  unsigned int v15; // r8d
  ULONG_PTR Count; // rax
  unsigned int v17; // edx
  __int64 v18; // rbx
  const wchar_t *v19; // r9
  int v20; // esi
  struct _EX_RUNDOWN_REF *v21; // r14
  unsigned int *v22; // rdx
  __int64 v23; // rsi
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v25; // rbx
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  ULONG_PTR v28; // rdx
  char *v29; // r9
  unsigned int v30; // edx
  __int64 v31; // r10
  int v32; // r8d
  char v33; // al
  char *v34; // rdx
  ULONG_PTR v35; // rcx
  bool v36; // al
  __int64 v37; // r8
  char v38; // cl
  __int64 v39; // r8
  char *v40; // rdx
  __int64 v41; // rsi
  char *v42; // rdx
  __int64 v43; // rax
  DXGK_ALLOCATIONLIST *v44; // rcx
  struct _DXGKARG_PRESENT *v45; // r8
  PVOID Ptr; // r9
  ULONG_PTR v47; // rdx
  unsigned int i; // r14d
  struct _KTHREAD **v49; // rcx
  unsigned int v51; // [rsp+50h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+60h] [rbp-188h] BYREF
  int v54; // [rsp+68h] [rbp-180h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-17Ch]
  unsigned int v56; // [rsp+70h] [rbp-178h]
  unsigned int v57; // [rsp+74h] [rbp-174h]
  DXGK_ALLOCATIONLIST *v58; // [rsp+78h] [rbp-170h]
  __int64 v59; // [rsp+80h] [rbp-168h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+88h] [rbp-160h]
  __int64 v61; // [rsp+90h] [rbp-158h]
  unsigned int v62; // [rsp+98h] [rbp-150h]
  struct DXGALLOCATION *v63; // [rsp+A0h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v64; // [rsp+A8h] [rbp-140h]
  DXGPROCESS *v65; // [rsp+B0h] [rbp-138h]
  struct _EX_RUNDOWN_REF *v66[4]; // [rsp+B8h] [rbp-130h] BYREF
  struct _DXGKARG_PRESENT *v67; // [rsp+D8h] [rbp-110h]
  PVOID P; // [rsp+E0h] [rbp-108h]
  _BYTE v69[32]; // [rsp+E8h] [rbp-100h] BYREF
  int v70; // [rsp+108h] [rbp-E0h]
  PVOID v71; // [rsp+110h] [rbp-D8h] BYREF
  char v72; // [rsp+118h] [rbp-D0h] BYREF
  int v73; // [rsp+198h] [rbp-50h]

  v7 = a4;
  v64 = a2;
  v66[2] = this;
  v66[3] = a4;
  v63 = a5;
  v67 = a6;
  v9 = *(DXGPROCESS **)(this[2].Count + 40);
  v65 = v9;
  v10 = (unsigned int)(a3 + 1);
  v57 = a3 + 1;
  v55 = 0;
  v71 = 0LL;
  v73 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements((__int64 *)&v71, a3 + 1, a3, (__int64)a4);
  v12 = v71;
  v58 = (DXGK_ALLOCATIONLIST *)v71;
  Pool2 = 0LL;
  P = 0LL;
  v70 = 0;
  if ( (unsigned int)v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
      goto LABEL_8;
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL, v11);
    P = Pool2;
    goto LABEL_6;
  }
  Pool2 = (struct _EX_RUNDOWN_REF *)v69;
  P = v69;
  if ( (_DWORD)v10 )
  {
    memset(v69, 0, 8LL * (unsigned int)v10);
    Pool2 = (struct _EX_RUNDOWN_REF *)P;
LABEL_6:
    v12 = v58;
  }
  v70 = v10;
LABEL_8:
  v66[1] = Pool2;
  if ( !v12 || !Pool2 )
  {
    WdLogSingleEntry1(6LL, 8559LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocated ReferencedAllocationArray",
      8559LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v20 = -1073741801;
    goto LABEL_29;
  }
  if ( *(_QWORD *)(this[2].Count + 1848) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL)
    || DXGPROCESS::IsRemoteConnection(v9) )
  {
    *((_DWORD *)a7 + 29) = 0;
  }
  *(_DWORD *)a7 |= 0xC00u;
  *((_DWORD *)a7 + 35) = v10;
  v14 = *((_BYTE *)a7 + 356) != 0 ? 0x68 : 0;
  *(_DWORD *)((char *)a7 + v14 + 496) = *(_DWORD *)((_BYTE *)a7 + v14 + 496) & 0xFFFFFC00 | 1;
  v15 = 0;
  v51 = 0;
  while ( v15 < (unsigned int)v10 )
  {
    v61 = v15;
    Count = v7[v15].Count;
    v17 = *(_DWORD *)(Count + 400);
    v56 = v17;
    v53 = 0LL;
    if ( !*(_BYTE *)(Count + 438) )
    {
      v18 = 8599LL;
      WdLogSingleEntry1(2LL, 8599LL);
      v19 = L"WDDMv2 LDA present must be on contexts, which support GpuVa";
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
      v20 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
      goto LABEL_29;
    }
    if ( v15 )
    {
      if ( v17 <= *(_DWORD *)(v7[v15 - 1].Count + 400) )
      {
        v18 = 8615LL;
        WdLogSingleEntry1(2LL, 8615LL);
        v19 = L"WDDMv2 LDA present contexts must be submitted in the order if increasing physical adapter index";
        goto LABEL_17;
      }
      v22 = &v64->BroadcastSrcAllocation[v15 - 1];
      if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v62 = *v22;
      v23 = v62;
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v65,
                                                    (DXGALLOCATIONREFERENCE *)v66,
                                                    v62);
      DXGALLOCATIONREFERENCE::MoveAssign(&v53, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v66);
      v21 = v53;
      if ( !v53 )
      {
        v25 = v23;
        v20 = -1073741811;
        WdLogSingleEntry2(2LL, v25, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid allocation handle in Present 0x%I64x. Returning 0x%I64x",
          v25,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_27;
      }
      v28 = this[2].Count;
      if ( *(_QWORD *)(*(_QWORD *)(v53[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) )
      {
        v20 = -1073741811;
        WdLogSingleEntry3(2LL, v28, v53, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          this[2].Count,
          (__int64)v21,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_27;
      }
      v15 = v51;
      v17 = v56;
    }
    else
    {
      v21 = (struct _EX_RUNDOWN_REF *)v63;
    }
    if ( ((LODWORD(v21[9].Count) >> 12) & 0x3F) != v17 )
    {
      WdLogSingleEntry1(2LL, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
        (__int64)v21,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = -1073741811;
LABEL_27:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
LABEL_28:
      v7 = a4;
      goto LABEL_29;
    }
    if ( *((_BYTE *)a7 + 356) )
      v29 = (char *)a7
          + 64 * (unsigned __int64)(v15 * *((_DWORD *)a7 + 151))
          + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
          + 648;
    else
      v29 = (char *)a7 + 504;
    v60 = (struct _EX_RUNDOWN_REF *)v29;
    v20 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                       + 648LL)
                                                                           + 8LL)
                                                               + 424LL))(
            *(_QWORD *)(this[2].Count + 760),
            v21[3].Count,
            v29);
    if ( v20 < 0 )
      goto LABEL_27;
    v30 = v55;
    Pool2[v55] = (struct _EX_RUNDOWN_REF)v60->Count;
    v55 = v30 + 1;
    v54 = 0;
    v59 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
    {
      v32 = 0xFFFF;
      v54 = 0xFFFF;
      v59 = -1LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v31 + 648) + 8LL)
                                                                       + 224LL))(
        *(_QWORD *)(v31 + 656),
        *(_QWORD *)(v21[6].Count + 8),
        &v54,
        &v59,
        0LL);
      v32 = v54;
    }
    v33 = *((_BYTE *)a7 + 356);
    if ( v33 )
    {
      *(_WORD *)((char *)a7
               + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
               + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
               + 632) = v32;
      v33 = *((_BYTE *)a7 + 356);
    }
    else
    {
      *((_DWORD *)a7 + 139) ^= (*((_DWORD *)a7 + 139) ^ (v32 << 17)) & 0x3E0000;
    }
    if ( v33 )
      v34 = (char *)a7
          + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
          + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
          + 640;
    else
      v34 = (char *)a7 + 520;
    *(_QWORD *)v34 = v59;
    v35 = v21[5].Count;
    if ( v35 )
      v36 = (*(_DWORD *)(v35 + 4) & 8) != 0;
    else
      v36 = 0;
    if ( v36 )
      v37 = *(_QWORD *)(*(_QWORD *)(v35 + 56) + 184LL);
    else
      v37 = 0LL;
    v38 = *((_BYTE *)a7 + 356);
    if ( v38 )
    {
      *(_QWORD *)((char *)a7
                + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
                + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v37;
      v38 = *((_BYTE *)a7 + 356);
    }
    else
    {
      *((_QWORD *)a7 + 72) = v37;
    }
    v39 = *(_QWORD *)(v21[6].Count + 16);
    if ( v38 )
      v40 = (char *)a7
          + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
          + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
          + 624;
    else
      v40 = (char *)a7 + 512;
    *(_QWORD *)v40 = v39;
    v41 = v61;
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2746LL) )
    {
      v39 = *(_QWORD *)(a4[v61].Count + 184);
      if ( *((_BYTE *)a7 + 356) )
        v42 = (char *)a7
            + 64 * (unsigned __int64)(v51 * *((_DWORD *)a7 + 151))
            + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
            + 616;
      else
        v42 = (char *)a7 + 568;
      *(_QWORD *)v42 = v39;
    }
    if ( *((_BYTE *)a7 + 356) )
      *((_DWORD *)a7 + 160) = -1;
    v10 = 32 * v41;
    *(struct _EX_RUNDOWN_REF *)((char *)&v58->hDeviceSpecificAllocation + v10) = v21[4];
    LOBYTE(v39) = HIBYTE(this[54].Ptr);
    v43 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                                + 648LL)
                                                                                    + 8LL)
                                                                        + 256LL))(
            *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 656LL),
            v21[3].Count,
            v39,
            v56);
    v44 = v58;
    *(_QWORD *)((char *)&v58->8 + v10) = v43;
    *(LONGLONG *)((char *)&v44->PhysicalAddress.QuadPart + v10) = v59;
    *(_WORD *)((char *)&v44[1].hDeviceSpecificAllocation + v10) = v54;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
    v15 = ++v51;
    LODWORD(v10) = v57;
    v7 = a4;
  }
  v45 = v67;
  v67->NumSrcAllocations = v10;
  v45->pAllocationList = v58;
  Ptr = 0LL;
  if ( (v45->Flags.Value & 1) != 0
    || (v47 = this[2].Count, !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL) + 2746LL)) )
  {
    Ptr = this[23].Ptr;
    v47 = this[2].Count;
  }
  v20 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v47 + 16), Ptr, v45);
  if ( v20 >= 0 )
  {
    for ( i = 0; i < v57; ++i )
    {
      v49 = (struct _KTHREAD **)a4[i].Count;
      if ( v49[57] != KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 8785LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
          8785LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v49 = (struct _KTHREAD **)a4[i].Count;
      }
      if ( (HIDWORD(this[50].Ptr) & 0x10) != 0 )
      {
        DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)v49, 0LL, 0, 0, a7, 0);
        v49 = (struct _KTHREAD **)a4[i].Count;
      }
      v20 = DXGCONTEXT::SubmitCommandToImplicitQueue((DXGCONTEXT *)v49, a7);
      if ( v20 < 0 )
        break;
      *(_DWORD *)a7 &= ~0x800u;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( v20 < 0 )
  {
    v26 = 0;
    v27 = v55;
    while ( v26 < v27 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                        + 648LL)
                                                                            + 8LL)
                                                                + 440LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 656LL),
        (unsigned int)(1 << *(_DWORD *)(v7[v26].Count + 400)),
        Pool2[v26].Count,
        0LL);
      ++v26;
    }
  }
  if ( P != v69 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v70 = 0;
  if ( v71 != &v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  return (unsigned int)v20;
}
