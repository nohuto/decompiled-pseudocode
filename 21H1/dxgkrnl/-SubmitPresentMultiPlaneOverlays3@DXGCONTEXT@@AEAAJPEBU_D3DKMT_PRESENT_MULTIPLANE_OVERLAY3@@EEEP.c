/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C02A18EC
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C029FC1C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019318 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C328 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C015DE6C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C015F62C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C022ADE0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C027DE38 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C029F0F0 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C02A1658 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefC.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C02A17E4 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  int v12; // r12d
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  UINT ContextCount; // r9d
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  const struct DXGADAPTER *v24; // rcx
  __int64 v25; // r10
  int v26; // r14d
  int v27; // r8d
  struct _SLIST_ENTRY *v28; // rbx
  bool v29; // cc
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int8 v42; // si
  __int64 v43; // rcx
  int v44; // r10d
  __int64 v45; // rax
  unsigned int v46; // r13d
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v47; // r14
  __int64 v48; // r8
  unsigned int PresentPlaneCount; // edx
  __int64 v50; // r12
  D3DKMT_MULTIPLANE_OVERLAY3 *v51; // rdx
  __int64 LayerIndex; // rcx
  int v53; // edx
  int v54; // eax
  unsigned int v55; // r9d
  int v56; // r9d
  UINT v57; // eax
  __int64 v58; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  unsigned __int64 v60; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // r13d
  unsigned int v65; // esi
  unsigned int v66; // edx
  unsigned int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  struct DXGADAPTER *v71; // rcx
  char *v72; // r12
  int v73; // eax
  __int64 v74; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v75; // rax
  unsigned int v76; // r9d
  struct CRefCountedBuffer *v77; // r11
  struct CRefCountedBuffer *v78; // r10
  __int64 v79; // rax
  __int64 v80; // r13
  char *v81; // rdx
  __int64 v82; // r8
  char *v83; // rdx
  char *v84; // r9
  __int64 v85; // r14
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int8 IsDxgmms2; // al
  __int64 v91; // r10
  _BOOL8 v92; // r11
  struct CRefCountedBuffer *v93; // rsi
  int v94; // r8d
  unsigned int v95; // r9d
  unsigned __int64 v96; // rcx
  bool v97; // al
  __int64 v98; // r8
  int v99; // ecx
  __int64 v100; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v101; // r13
  struct _VIDSCH_LAYER_ATTRIBUTE *v102; // rsi
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r8
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  _QWORD *v108; // rax
  char *v109; // rdx
  unsigned __int64 v110; // rcx
  struct CRefCountedBuffer *v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v114; // rsi
  __int64 v115; // rax
  struct _DXGKARG_PRESENT *v116; // rdx
  UINT DirtyRectCount; // ecx
  __int64 v118; // r8
  DXGK_ALLOCATIONLIST *v119; // rax
  __int64 v120; // r8
  DXGK_ALLOCATIONLIST *v121; // r14
  void *p_pContextList; // rdx
  union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *p_PhysicalAddress; // r12
  unsigned int v124; // esi
  union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *v125; // r13
  __int64 v126; // rcx
  union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *v127; // rax
  __int16 v128; // dx
  __int64 v129; // rax
  __int64 v130; // r9
  struct _DXGKARG_PRESENT *v131; // r8
  void *v132; // rdx
  ADAPTER_RENDER *v133; // rcx
  unsigned int v134; // r14d
  DXGCONTEXT **v135; // r13
  DXGCONTEXT *v136; // rcx
  __int64 v137; // rax
  unsigned int v138; // r13d
  __int64 v139; // r14
  unsigned int v140; // eax
  unsigned int v141; // r12d
  int v142; // ecx
  __int64 v143; // rdx
  char *v144; // rdx
  __int64 v145; // rax
  unsigned int v146; // [rsp+30h] [rbp-D0h]
  unsigned int v147; // [rsp+34h] [rbp-CCh]
  unsigned int v148; // [rsp+38h] [rbp-C8h]
  unsigned int v149; // [rsp+3Ch] [rbp-C4h]
  int v150; // [rsp+40h] [rbp-C0h] BYREF
  int v151; // [rsp+44h] [rbp-BCh]
  struct CRefCountedBuffer *v152; // [rsp+48h] [rbp-B8h] BYREF
  UINT v153; // [rsp+50h] [rbp-B0h]
  unsigned int v154; // [rsp+54h] [rbp-ACh]
  int v155; // [rsp+58h] [rbp-A8h]
  struct CRefCountedBuffer *v156; // [rsp+60h] [rbp-A0h] BYREF
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v157; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v158; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_PRESENT *v159; // [rsp+78h] [rbp-88h]
  __int64 v160; // [rsp+80h] [rbp-80h] BYREF
  __int64 v161; // [rsp+88h] [rbp-78h]
  struct CRefCountedBuffer *v162; // [rsp+90h] [rbp-70h]
  int v163; // [rsp+98h] [rbp-68h]
  const struct DXGALLOCATIONREFERENCE *v164; // [rsp+A0h] [rbp-60h]
  _QWORD v165[12]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v167[128]; // [rsp+118h] [rbp+18h] BYREF
  int v168; // [rsp+198h] [rbp+98h]
  _DWORD v169[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v170; // [rsp+1A8h] [rbp+A8h]
  _BYTE v171[8]; // [rsp+1B0h] [rbp+B0h]
  _QWORD v172[37]; // [rsp+1B8h] [rbp+B8h]
  _QWORD v173[10]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v159 = a8;
  v164 = a6;
  v12 = a4;
  v13 = a3;
  v157 = a2;
  v162 = (struct CRefCountedBuffer *)a10;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 1513LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (unsigned int)a5 + v12 + v13;
  if ( (unsigned int)v15 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v16 + 24) = 1516LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v19 + 24) = 1517LL;
    WdLogEvent5_WdAssertion(v19);
  }
  ContextCount = a2->ContextCount;
  v146 = ContextCount;
  if ( ContextCount > 0x40 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    LODWORD(v22) = -1073741811;
    v21[4] = v146;
    v21[5] = 64LL;
    v21[6] = -1073741811LL;
    goto LABEL_11;
  }
  v23 = 1LL;
  v24 = *(const struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  v25 = *((_QWORD *)v24 + 2);
  v154 = *(_DWORD *)(v25 + 2512);
  v26 = *((_DWORD *)*a10 + 103);
  if ( ContextCount > 1 )
  {
    v24 = (struct CRefCountedBuffer *)((char *)v162 + 8);
    while ( 1 )
    {
      v27 = *(_DWORD *)(*(_QWORD *)v24 + 412LL);
      if ( (v27 & v26) != 0 )
        break;
      v26 |= v27;
      v23 = (unsigned int)(v23 + 1);
      v24 = (const struct DXGADAPTER *)((char *)v24 + 8);
      if ( (unsigned int)v23 >= ContextCount )
        goto LABEL_16;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    LODWORD(v22) = -1073741811;
    v21[4] = -1073741811LL;
LABEL_11:
    v21[3] = this;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v22;
  }
LABEL_16:
  v28 = 0LL;
  v29 = *(_DWORD *)(v25 + 2572) < 2500;
  v156 = 0LL;
  if ( !v29 )
  {
    v30 = ReadPresentDirtyRectsData(v24, v157->PresentPlaneCount, v157->ppPresentPlanes, &v156);
    v33 = v30;
    if ( v30 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v34 + 24) = v33;
      WdLogEvent5_WdError(v34);
      return (unsigned int)v33;
    }
    v28 = (struct _SLIST_ENTRY *)v156;
    ContextCount = v146;
  }
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v26;
  v36 = 2048;
  if ( ContextCount > 1 )
    v36 = 3072;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v36;
  `vector constructor iterator'(
    (char *)v173,
    8LL,
    10LL,
    (void (__fastcall *)(char *))CAutoRefCountedBuffer::CAutoRefCountedBuffer);
  v39 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = v28;
  if ( !v39 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v40 + 24) = 1593LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( v159->pDmaBuffer )
  {
    v41 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v41 + 24) = 1598LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v42 = v12 + v13;
  v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  LOBYTE(v43) = *(_BYTE *)(*(_QWORD *)(v43 + 16) + 2618LL);
  v44 = (unsigned __int8)(v42 + a5);
  if ( !(_BYTE)v43 )
    v44 = v42;
  v155 = v44;
  if ( (unsigned __int8)v44 > 0xAu )
  {
    v45 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v45 + 24) = 1616LL;
    WdLogEvent5_WdAssertion(v45);
    LOBYTE(v44) = v155;
  }
  v46 = 0;
  v47 = v157;
  v147 = 0;
  v48 = 0LL;
  PresentPlaneCount = v157->PresentPlaneCount;
  v50 = *((_BYTE *)a9 + 348) != 0 ? 568LL : 480LL;
  v161 = v50;
  if ( PresentPlaneCount )
  {
    while ( 1 )
    {
      v51 = v47->ppPresentPlanes[v48];
      LayerIndex = v51->LayerIndex;
      if ( (v51->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v53 = *(_DWORD *)((char *)a9 + v50);
        v54 = (v53 ^ (v53 | (1024 << LayerIndex))) & 0xFFC00;
        goto LABEL_36;
      }
LABEL_37:
      PresentPlaneCount = v47->PresentPlaneCount;
      v48 = (unsigned int)(v48 + 1);
      if ( (unsigned int)v48 >= PresentPlaneCount )
        goto LABEL_38;
    }
    v53 = *(_DWORD *)((char *)a9 + v50);
    v54 = (v53 ^ (v53 | (1 << LayerIndex))) & 0x3FF;
LABEL_36:
    *(_DWORD *)((char *)a9 + v50) = v53 ^ v54;
    goto LABEL_37;
  }
LABEL_38:
  v55 = *(_DWORD *)((char *)a9 + v50);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2618LL) )
    v55 = *(_DWORD *)((char *)a9 + v50) | (v55 >> 10);
  v56 = v55 & 0x3FF;
  v57 = 0;
  v151 = v56;
  v153 = 0;
  if ( !PresentPlaneCount )
  {
LABEL_117:
    P = 0LL;
    v168 = 0;
    memset(v165, 0, sizeof(v165));
    if ( v154 >= 2 )
    {
      LODWORD(v165[0]) = v47->VidPnSourceId;
      v165[1] = v169;
      HIDWORD(v165[0]) = v46;
    }
    else
    {
      _mm_lfence();
      v114 = *v47->ppPresentPlanes;
      if ( (v114->InputFlags.Value & 1) == 0 )
      {
        v115 = WdLogNewEntry5_WdAssertion(v113, v112);
        *(_QWORD *)(v115 + 24) = 1897LL;
        WdLogEvent5_WdAssertion(v115);
      }
      v116 = v159;
      v159->Flags.Value &= ~0x1000u;
      DirtyRectCount = v114->pPlaneAttributes->DirtyRectCount;
      v116->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v116->pDstSubRects = v114->pPlaneAttributes->pDirtyRects;
      v118 = v146;
      if ( v146 > 1 )
      {
        v119 = (DXGK_ALLOCATIONLIST *)PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, v146);
        v121 = v119;
        if ( v119 )
        {
          p_pContextList = v162;
          p_PhysicalAddress = (union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *)&v119->PhysicalAddress;
          v157 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v162;
          v124 = 0;
          while ( 1 )
          {
            v125 = (union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *)*((_QWORD *)v164 + v154 * v124);
            v126 = (v125[9].PhysicalAddress.LowPart >> 12) & 0x3F;
            if ( (_DWORD)v126 != *(_DWORD *)(*(_QWORD *)p_pContextList + 416LL) )
              break;
            p_PhysicalAddress[-2] = v125[4];
            LOBYTE(v120) = *((_BYTE *)this + 455);
            p_PhysicalAddress[-1].PhysicalAddress.QuadPart = (*(__int64 (__fastcall **)(_QWORD, LARGE_INTEGER, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 256LL))(
                                                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 648LL),
                                                               v125[3].PhysicalAddress,
                                                               v120,
                                                               *(unsigned int *)(*(_QWORD *)p_pContextList + 416LL));
            if ( *((_BYTE *)a9 + 348) )
              v127 = (union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *)((char *)a9
                                                                                     + 64
                                                                                     * (unsigned __int64)(v124 * *((_DWORD *)a9 + 143))
                                                                                     + *((_DWORD *)a9 + 143)
                                                                                     * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
                                                                                     + 608);
            else
              v127 = (union _DXGK_ALLOCATIONLIST::$4845AA0B8B8BF5C2F074F23484F2D773 *)((char *)a9 + 504);
            *p_PhysicalAddress = *v127;
            if ( *((_BYTE *)a9 + 348) )
              v128 = *(_WORD *)((char *)a9
                              + 64 * (unsigned __int64)(v124 * *((_DWORD *)a9 + 143))
                              + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
                              + 600);
            else
              v128 = (*((_DWORD *)a9 + 135) >> 17) & 0x1F;
            v120 = v146;
            ++v124;
            LOWORD(p_PhysicalAddress[1].PhysicalAddress.LowPart) = v128;
            p_PhysicalAddress += 4;
            p_pContextList = &v157->pContextList;
            v157 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)((char *)v157 + 8);
            if ( v124 >= v146 )
            {
              v159->NumSrcAllocations = v146;
              goto LABEL_144;
            }
          }
          v129 = WdLogNewEntry5_WdError(v126, p_pContextList);
          *(_QWORD *)(v129 + 24) = v125;
          WdLogEvent5_WdError(v129);
          LODWORD(v22) = -1073741811;
        }
        else
        {
          LODWORD(v22) = -1073741801;
        }
        v110 = (unsigned __int64)P;
        if ( P != v167 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_159;
      }
      if ( *((_BYTE *)this + 454) )
      {
        LOBYTE(v118) = *((_BYTE *)this + 455);
        v130 = *((unsigned int *)this + 104);
        v165[4] = v170;
        v165[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                          + 8LL)
                                                                              + 256LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                    *(_QWORD *)(*(_QWORD *)v164 + 24LL),
                    v118,
                    v130);
        v165[6] = v172[0];
        LOWORD(v165[7]) = v171[0] & 0x1F;
      }
      else
      {
        v165[3] = v170;
        v165[5] = v172[0];
        LODWORD(v165[4]) = v165[4] & 0xFFFFFFC0 | (2 * (v171[0] & 0x1F));
      }
    }
    v121 = (DXGK_ALLOCATIONLIST *)v165;
LABEL_144:
    v131 = v159;
    v132 = 0LL;
    v159->pAllocationList = v121;
    v133 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(*((_QWORD *)v133 + 2) + 2626LL) )
      v132 = (void *)*((_QWORD *)this + 23);
    LODWORD(v22) = ADAPTER_RENDER::DdiPresent(v133, v132, v131);
    if ( (int)v22 >= 0 )
    {
      v134 = 0;
      if ( v146 )
      {
        v135 = (DXGCONTEXT **)v162;
        do
        {
          v136 = *v135;
          if ( *((struct _KTHREAD **)*v135 + 59) != KeGetCurrentThread() )
          {
            v137 = WdLogNewEntry5_WdAssertion(v136, v109);
            *(_QWORD *)(v137 + 24) = 2020LL;
            WdLogEvent5_WdAssertion(v137);
            v136 = *v135;
          }
          if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
          {
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v136, 0LL, 0, 0, a9, 0);
            v136 = *v135;
          }
          LODWORD(v22) = DXGCONTEXT::SubmitCommandToImplicitQueue(v136, a9);
          if ( (int)v22 < 0 )
            break;
          *(_DWORD *)a9 &= ~0x800u;
          ++v134;
          ++v135;
        }
        while ( v134 < v146 );
      }
    }
    v110 = (unsigned __int64)P;
    if ( P != v167 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_158;
  }
  while ( 1 )
  {
    v58 = v57;
    ppPresentPlanes = v47->ppPresentPlanes;
    v60 = 32LL * v46;
    v61 = ppPresentPlanes[v58];
    v158 = v61;
    v62 = v61->LayerIndex;
    v169[v60 / 4] = v62;
    LODWORD(ppPresentPlanes) = v61->InputFlags.Value & 1;
    v163 = v62;
    v169[v60 / 4 + 1] = (_DWORD)ppPresentPlanes;
    if ( (v61->InputFlags.Value & 1) != 0 || a7[v62] )
      break;
LABEL_112:
    v47 = v157;
    v57 = v153 + 1;
    v153 = v57;
    if ( v57 >= v157->PresentPlaneCount )
      goto LABEL_117;
    LOBYTE(v44) = v155;
  }
  v63 = (unsigned int)v62;
  v64 = 1 << v62;
  if ( (v56 & (1 << v62)) != 0 )
  {
    v66 = (v56 & (v64 - 1) & 0x55555555) + (((v56 & (unsigned int)(v64 - 1)) >> 1) & 0x55555555);
    v63 = v66 & 0x33333333;
    v67 = v63 + ((v66 >> 2) & 0x33333333);
    v62 = v67 & 0xF0F0F0F;
    v65 = ((v62 + ((v67 >> 4) & 0xF0F0F0F)) & 0xFF00FF) + (((unsigned int)v62 + ((v67 >> 4) & 0xF0F0F0F)) >> 8);
  }
  else
  {
    v65 = -1;
  }
  v148 = v65;
  if ( v65 >= (unsigned __int8)v44 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v63, v62);
    *(_QWORD *)(v68 + 24) = 1691LL;
    WdLogEvent5_WdAssertion(v68);
  }
  if ( v65 >= 0xA )
  {
    v69 = WdLogNewEntry5_WdAssertion(v63, v62);
    *(_QWORD *)(v69 + 24) = 1698LL;
    WdLogEvent5_WdAssertion(v69);
  }
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v152 = 0LL;
    v72 = (char *)a9 + v65 * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8) + 568;
    v73 = ReadPresentPrivateDriverData(v71, v158, &v152);
    v22 = v73;
    if ( v73 < 0 )
    {
      v108 = (_QWORD *)WdLogNewEntry5_WdError(v74, v70);
      v108[3] = v22;
      goto LABEL_115;
    }
    v71 = v152;
    if ( v152 )
    {
      v70 = v153;
      v75 = v158;
      v173[v153] = v152;
      if ( !v75->LayerIndex )
      {
        v70 = (unsigned __int64)v159;
        v159->PrivateDriverDataSize = v75->DriverPrivateDataSize;
        *(_QWORD *)(v70 + 160) = (char *)v71 + 16;
      }
      *((_QWORD *)v72 + 25) = v71;
    }
    v50 = v161;
    v65 = v148;
  }
  if ( (v158->InputFlags.Value & 1) == 0 )
  {
    if ( (v64 & (*(_DWORD *)((char *)a9 + v50) >> 10) & 0x3FF) == 0 )
    {
      v107 = WdLogNewEntry5_WdAssertion(v71, v70);
      *(_QWORD *)(v107 + 24) = 1867LL;
      WdLogEvent5_WdAssertion(v107);
    }
    v46 = v147;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 216LL) + 64LL)
                               + 40LL)
                   + 28LL) >= 0x4002u )
    {
      *(_QWORD *)&v171[v60 - 8] = 0LL;
      *(_DWORD *)&v171[v60] &= 0xFFFFFFE0;
      v172[v60 / 8] = 0LL;
      v46 = ++v147;
    }
LABEL_111:
    v56 = v151;
    goto LABEL_112;
  }
  v76 = 0;
  v149 = 0;
  if ( !v146 )
  {
    v46 = v147;
LABEL_110:
    v50 = v161;
    goto LABEL_111;
  }
  v77 = v162;
  v156 = v162;
  while ( 1 )
  {
    v78 = (struct CRefCountedBuffer *)*((_QWORD *)v164 + v163 + v154 * v76);
    v152 = v78;
    if ( !v78 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v164, v70);
      *(_QWORD *)(v79 + 24) = 1752LL;
      WdLogEvent5_WdAssertion(v79);
      v76 = v149;
      v78 = v152;
      v77 = v156;
    }
    v80 = v65;
    if ( *((_BYTE *)a9 + 348) )
      v81 = (char *)a9
          + 64 * (unsigned __int64)(v65 + v76 * *((_DWORD *)a9 + 143))
          + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
          + 592;
    else
      v81 = (char *)a9 + 80 * v65 + 496;
    *(_QWORD *)v81 = *(_QWORD *)(*((_QWORD *)v78 + 6) + 16LL);
    v82 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v82 + 16) + 16LL) + 2626LL) )
    {
      if ( *((_BYTE *)a9 + 348) )
        v83 = (char *)a9
            + 64 * (unsigned __int64)(v65 + v76 * *((_DWORD *)a9 + 143))
            + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
            + 584;
      else
        v83 = (char *)a9 + 80 * v65 + 552;
      *(_QWORD *)v83 = *(_QWORD *)(*(_QWORD *)v77 + 184LL);
      v82 = *((_QWORD *)this + 2);
    }
    if ( *((_BYTE *)a9 + 348) )
    {
      v84 = (char *)a9
          + 64 * (unsigned __int64)(v65 + v76 * *((_DWORD *)a9 + 143))
          + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
          + 616;
      v85 = 80LL * v65;
    }
    else
    {
      v85 = 80LL * v65;
      v84 = (char *)a9 + v85 + 488;
    }
    v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v82 + 16) + 640LL)
                                                                        + 8LL)
                                                            + 416LL))(
            *(_QWORD *)(v82 + 760),
            *((_QWORD *)v78 + 3),
            v84);
    v22 = v86;
    if ( v86 < 0 )
      break;
    v89 = *((_QWORD *)this + 2);
    v150 = 0;
    v160 = 0LL;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v89 + 16) + 16LL));
    v93 = v152;
    if ( IsDxgmms2 )
    {
      v160 = -1LL;
      v94 = 0xFFFF;
      v150 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _BOOL8))(*(_QWORD *)(*(_QWORD *)(v91 + 640) + 8LL)
                                                                       + 224LL))(
        *(_QWORD *)(v91 + 648),
        *(_QWORD *)(*((_QWORD *)v152 + 6) + 8LL),
        &v150,
        &v160,
        v92);
      v94 = v150;
      v92 = 0LL;
    }
    v95 = v149;
    if ( *((_BYTE *)a9 + 348) == v92 )
      *(_DWORD *)((char *)a9 + v85 + 540) ^= ((v94 << 17) ^ *(_DWORD *)((char *)a9 + v85 + 540)) & 0x3E0000;
    else
      *(_WORD *)((char *)a9
               + 64 * (unsigned __int64)(v148 + v149 * *((_DWORD *)a9 + 143))
               + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
               + 600) = v94;
    if ( *((_BYTE *)a9 + 348) == v92 )
      v70 = (unsigned __int64)a9 + v85 + 504;
    else
      v70 = (unsigned __int64)a9
          + 64 * (unsigned __int64)(v148 + v149 * *((_DWORD *)a9 + 143))
          + *((_DWORD *)a9 + 143) * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
          + 608;
    *(_QWORD *)v70 = v160;
    v96 = *((_QWORD *)v93 + 5);
    if ( v96 )
      v97 = (*(_DWORD *)(v96 + 4) & 8) != 0;
    else
      v97 = v92;
    if ( v97 )
      v98 = *(_QWORD *)(*(_QWORD *)(v96 + 56) + 184LL);
    else
      v98 = v92;
    if ( *((_BYTE *)a9 + 348) == v92 )
    {
      *((_QWORD *)a9 + 10 * v80 + 70) = v98;
    }
    else
    {
      v99 = *((_DWORD *)a9 + 143);
      v100 = v99 * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8);
      v96 = (unsigned __int64)(v148 + v149 * v99) << 6;
      *(_QWORD *)((char *)a9 + v100 + v96 + 624) = v98;
    }
    if ( v149 )
    {
      v46 = v147;
    }
    else
    {
      v101 = v158;
      if ( *((_BYTE *)a9 + 348)
        && (v96 = v148 * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8),
            *(_DWORD *)((char *)a9 + v96 + 608) = v158->MaxImmediateFlipLine,
            *((_BYTE *)a9 + 348)) )
      {
        v102 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                                + v148 * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8)
                                                + 728);
      }
      else
      {
        v102 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v85 + 512);
      }
      pPlaneAttributes = v101->pPlaneAttributes;
      if ( pPlaneAttributes->SrcRect.right <= pPlaneAttributes->SrcRect.left )
      {
        v104 = WdLogNewEntry5_WdAssertion(v96, v70);
        *(_QWORD *)(v104 + 24) = 1842LL;
        WdLogEvent5_WdAssertion(v104);
        pPlaneAttributes = v101->pPlaneAttributes;
      }
      if ( pPlaneAttributes->SrcRect.bottom <= pPlaneAttributes->SrcRect.top )
      {
        v105 = WdLogNewEntry5_WdAssertion(v96, v70);
        *(_QWORD *)(v105 + 24) = 1843LL;
        WdLogEvent5_WdAssertion(v105);
        pPlaneAttributes = v101->pPlaneAttributes;
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3((DXGCONTEXT *)v96, v102, pPlaneAttributes);
      v70 = (unsigned __int64)v152;
      v95 = v149;
      v106 = 32LL * v147;
      *(_QWORD *)&v171[v106 - 8] = *((_QWORD *)v152 + 4);
      *(_DWORD *)&v171[v106] ^= ((unsigned __int8)v150 ^ (unsigned __int8)*(_DWORD *)&v171[v106]) & 0x1F;
      v46 = ++v147;
      v172[v106 / 8] = v160;
    }
    v76 = v95 + 1;
    v65 = v148;
    v77 = (struct CRefCountedBuffer *)((char *)v156 + 8);
    v149 = v76;
    v156 = (struct CRefCountedBuffer *)((char *)v156 + 8);
    if ( v76 >= v146 )
      goto LABEL_110;
  }
  v108 = (_QWORD *)WdLogNewEntry5_WdError(v88, v87);
  v111 = v152;
  v108[3] = this;
  v108[4] = v111;
  v108[5] = v22;
LABEL_115:
  WdLogEvent5_WdError(v108);
LABEL_158:
  if ( (int)v22 < 0 )
  {
LABEL_159:
    v138 = (unsigned __int8)v155;
    v139 = 0LL;
    if ( (_BYTE)v155 )
    {
      v140 = v146;
      do
      {
        v141 = 0;
        if ( v140 )
        {
          do
          {
            if ( *((_BYTE *)a9 + 348) )
            {
              v142 = *((_DWORD *)a9 + 143);
              v143 = v142 * ((8 * *((_DWORD *)a9 + 144) + 199) & 0xFFFFFFF8) + 616LL;
              v110 = (unsigned __int64)((unsigned int)v139 + v141 * v142) << 6;
              v144 = (char *)a9 + v143;
            }
            else
            {
              v110 = 80 * v139;
              v144 = (char *)a9 + 488;
            }
            v109 = &v144[v110];
            if ( *(_QWORD *)v109 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 640LL)
                                                                                 + 8LL)
                                                                     + 432LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                *((unsigned int *)a9 + 34),
                *(_QWORD *)v109,
                0LL);
            v140 = v146;
            ++v141;
          }
          while ( v141 < v146 );
        }
        v139 = (unsigned int)(v139 + 1);
      }
      while ( (unsigned int)v139 < v138 );
    }
    v145 = WdLogNewEntry5_WdError(v110, v109);
    *(_QWORD *)(v145 + 32) = (int)v22;
    *(_QWORD *)(v145 + 24) = this;
    WdLogEvent5_WdError(v145);
  }
  `vector destructor iterator'(
    (char *)v173,
    8LL,
    10LL,
    (void (__fastcall *)(char *))CAutoRefCountedBuffer::~CAutoRefCountedBuffer);
  if ( v28 )
    CRefCountedBuffer::RefCountedBufferRelease(v28);
  return (unsigned int)v22;
}
