/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C00DC368
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8050 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C00DC2DC (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // edi
  unsigned int v20; // edi
  SIZE_T v21; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v22; // r13
  SIZE_T v23; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v24; // r15
  SIZE_T v25; // rax
  struct tagRECT **v26; // rax
  size_t v27; // r14
  __int64 v28; // r12
  SIZE_T v29; // rax
  SIZE_T v30; // rax
  void *v31; // rsi
  unsigned int v32; // edi
  char *v33; // rbx
  const void *v34; // rdx
  size_t v35; // r8
  _QWORD *v36; // r14
  const void *v37; // rdx
  char *v38; // rcx
  ULONG64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // edi
  unsigned int v43; // r11d
  unsigned __int64 v44; // rdx
  __int64 v45; // r12
  unsigned __int64 pPlaneAttributes; // rdx
  __int64 v47; // rsi
  ULONG64 v48; // rcx
  __int64 v49; // r14
  _QWORD *v50; // rax
  SIZE_T v52; // rax
  struct tagRECT *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  struct tagRECT **v56; // r14
  __int64 v57; // rbx
  size_t DirtyRectCount; // r8
  RECT *pDirtyRects; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 AllocationCount; // rax
  __int64 v63; // rbx
  D3DKMT_HANDLE *pAllocationList; // rdx
  char *v65; // rcx
  unsigned int *v66; // r12
  unsigned int v67; // r8d
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v68; // r9
  _QWORD *v69; // r10
  D3DKMT_HANDLE **p_pAllocationList; // rdx
  _QWORD *v71; // rbx
  unsigned int v72; // [rsp+20h] [rbp-138h]
  __int128 v73; // [rsp+30h] [rbp-128h] BYREF
  __int128 v74; // [rsp+40h] [rbp-118h]
  void *v75[2]; // [rsp+50h] [rbp-108h]
  __int128 v76; // [rsp+60h] [rbp-F8h]
  int v77; // [rsp+70h] [rbp-E8h]
  unsigned int v78; // [rsp+80h] [rbp-D8h]
  int v79; // [rsp+84h] [rbp-D4h]
  char *v80; // [rsp+88h] [rbp-D0h]
  void *v81; // [rsp+90h] [rbp-C8h]
  void *v82; // [rsp+98h] [rbp-C0h]
  struct tagRECT **v83; // [rsp+A0h] [rbp-B8h]
  void *v84[2]; // [rsp+B0h] [rbp-A8h]
  __m128i v85; // [rsp+C0h] [rbp-98h]
  void *Src[2]; // [rsp+D0h] [rbp-88h]
  __m128i v87; // [rsp+E0h] [rbp-78h]
  void *pHDRMetaData; // [rsp+F0h] [rbp-68h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  *(_OWORD *)v84 = *(_OWORD *)&a1->hAdapter;
  v85 = *(__m128i *)&a1->VidPnSourceId;
  v10 = v85;
  *(_OWORD *)Src = *(_OWORD *)&a1->ppPresentPlanes;
  v11 = *(__m128i *)&a1->Duration;
  v87 = v11;
  pHDRMetaData = (void *)a1->pHDRMetaData;
  v12 = _mm_srli_si128(v85, 8).m128i_u64[0];
  v13 = HIDWORD(v12);
  if ( (unsigned int)(HIDWORD(v12) - 1) > 9 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v13, a2);
    v71[3] = v85.m128i_u32[3];
    v19 = -1073741811;
    v71[4] = -1073741811LL;
    v71[5] = PsGetCurrentProcess();
    goto LABEL_79;
  }
  if ( (unsigned int)(HIDWORD(v84[0]) - 1) > 0x3F )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v13, a2);
    v19 = -1073741811;
    v71[3] = -1073741811LL;
    v71[4] = PsGetCurrentProcess();
LABEL_79:
    WdLogEvent5_WdError(v71);
    return v19;
  }
  *((_QWORD *)&v73 + 1) = 0LL;
  v74 = 0LL;
  *(_OWORD *)v75 = 0LL;
  v76 = 0LL;
  v77 = HIDWORD(v12);
  v14 = 8 * v13;
  if ( !is_mul_ok(v13, 8uLL) )
    v14 = -1LL;
  v81 = operator new[](v14, 0x4B677844u, PagedPool);
  *(_QWORD *)&v73 = v81;
  if ( !v81 )
    goto LABEL_8;
  v20 = _mm_cvtsi128_si32(_mm_srli_si128(v85, 12));
  v78 = v20;
  v21 = 56LL * v20;
  if ( !is_mul_ok(v20, 0x38uLL) )
    v21 = -1LL;
  v22 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new[](v21, 0x4B677844u, PagedPool);
  *((_QWORD *)&v73 + 1) = v22;
  if ( !v22 )
    goto LABEL_8;
  v23 = 88LL * v20;
  if ( !is_mul_ok(v20, 0x58uLL) )
    v23 = -1LL;
  v24 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v23, 0x4B677844u, PagedPool);
  *(_QWORD *)&v74 = v24;
  if ( !v24 )
    goto LABEL_8;
  v25 = 8LL * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v25 = -1LL;
  v26 = (struct tagRECT **)operator new[](v25, 0x4B677844u, PagedPool);
  v83 = v26;
  *(_QWORD *)&v76 = v26;
  if ( !v26 )
    goto LABEL_8;
  v27 = 8LL * v20;
  memset(v26, 0, v27);
  v72 = HIDWORD(v84[0]);
  v28 = HIDWORD(v84[0]);
  v29 = 4LL * HIDWORD(v84[0]);
  if ( !is_mul_ok(HIDWORD(v84[0]), 4uLL) )
    v29 = -1LL;
  v82 = operator new[](v29, 0x4B677844u, PagedPool);
  *((_QWORD *)&v74 + 1) = v82;
  if ( !v82 )
    goto LABEL_8;
  v30 = 4LL * v20 * HIDWORD(v84[0]);
  if ( !is_mul_ok(v20 * HIDWORD(v84[0]), 4uLL) )
    v30 = -1LL;
  v80 = (char *)operator new[](v30, 0x4B677844u, PagedPool);
  v75[0] = v80;
  if ( !v80 )
    goto LABEL_8;
  v31 = pHDRMetaData;
  if ( pHDRMetaData )
  {
    v32 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    if ( v32 )
    {
      v75[1] = operator new[](v32, 0x4B677844u, PagedPool);
      if ( !v75[1] )
        goto LABEL_8;
    }
  }
  else
  {
    v32 = v87.m128i_u32[2];
  }
  v33 = (char *)Src[1];
  if ( Src[1] )
  {
    *((_QWORD *)&v76 + 1) = operator new[](0x28uLL, 0x4B677844u, PagedPool);
    if ( !*((_QWORD *)&v76 + 1) )
    {
LABEL_8:
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      v19 = -1073741801;
      *(_QWORD *)(v18 + 24) = -1073741801LL;
      *(_QWORD *)(v18 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v18);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v73);
      return v19;
    }
  }
  v34 = Src[0];
  if ( (char *)Src[0] + v27 < Src[0] || (char *)Src[0] + v27 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v35 = v27;
  v36 = v81;
  memmove(v81, v34, v35);
  v37 = v84[1];
  v38 = (char *)v84[1] + 4 * v28;
  if ( v38 < v84[1] || (unsigned __int64)v38 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v82, v37, 4 * v28);
  if ( v31 && v32 )
  {
    v39 = (ULONG64)v31 + v32;
    if ( v39 < (unsigned __int64)v31 || v39 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v75[1], v31, v32);
  }
  if ( v33 )
  {
    if ( v33 + 40 < v33 || (unsigned __int64)(v33 + 40) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v40 = *((_QWORD *)&v76 + 1);
    **((_OWORD **)&v76 + 1) = *(_OWORD *)v33;
    *(_OWORD *)(v40 + 16) = *((_OWORD *)v33 + 1);
    *(_QWORD *)(v40 + 32) = *((_QWORD *)v33 + 4);
  }
  v41 = 0LL;
  v42 = v72;
  while ( 1 )
  {
    v79 = v41;
    v43 = v78;
    if ( (unsigned int)v41 >= v78 )
      break;
    v44 = v36[v41];
    v45 = (unsigned int)v41;
    if ( v44 + 56 < v44 || v44 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v22[v45].LayerIndex = *(_OWORD *)v44;
    *(_OWORD *)&v22[v45].AllocationCount = *(_OWORD *)(v44 + 16);
    *(_OWORD *)&v22[v45].DriverPrivateDataSize = *(_OWORD *)(v44 + 32);
    v22[v45].pPlaneAttributes = *(const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)(v44 + 48);
    pPlaneAttributes = (unsigned __int64)v22[v45].pPlaneAttributes;
    v47 = (unsigned int)v41;
    v48 = pPlaneAttributes + 88;
    if ( pPlaneAttributes + 88 < pPlaneAttributes || v48 > MmUserProbeAddress )
    {
      v48 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(_OWORD *)&v24[v47].Flags = *(_OWORD *)pPlaneAttributes;
    *(_OWORD *)&v24[v47].SrcRect.bottom = *(_OWORD *)(pPlaneAttributes + 16);
    *(_OWORD *)&v24[v47].DstRect.bottom = *(_OWORD *)(pPlaneAttributes + 32);
    *(_OWORD *)&v24[v47].ClipRect.bottom = *(_OWORD *)(pPlaneAttributes + 48);
    *(_OWORD *)&v24[v47].pDirtyRects = *(_OWORD *)(pPlaneAttributes + 64);
    *(_QWORD *)&v24[v47].SDRWhiteLevel = *(_QWORD *)(pPlaneAttributes + 80);
    v49 = (unsigned int)v41;
    if ( v24[v47].DirtyRectCount > 0xFFF )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v48, pPlaneAttributes);
      v50[3] = v24[v49].DirtyRectCount;
      v50[4] = (unsigned int)v41;
      v50[5] = -1073741811LL;
      WdLogEvent5_WdError(v50);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v73);
      return 3221225485LL;
    }
    v52 = 16LL * v24[v49].DirtyRectCount;
    if ( !is_mul_ok(v24[v49].DirtyRectCount, 0x10uLL) )
      v52 = -1LL;
    v53 = (struct tagRECT *)operator new[](v52, 0x4B677844u, PagedPool);
    v56 = v83;
    v83[v41] = v53;
    if ( !v53 )
    {
      v57 = WdLogNewEntry5_WdWarning(0LL, v54, v55);
      *(_QWORD *)(v57 + 24) = -1073741801LL;
      *(_QWORD *)(v57 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v57);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v73);
      return 3221225495LL;
    }
    DirtyRectCount = v24[v47].DirtyRectCount;
    pDirtyRects = v24[v47].pDirtyRects;
    if ( &pDirtyRects[DirtyRectCount] < pDirtyRects
      || (unsigned __int64)&pDirtyRects[DirtyRectCount] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v53, pDirtyRects, DirtyRectCount * 16);
    v24[v47].pDirtyRects = v56[v41];
    AllocationCount = v22[v45].AllocationCount;
    v42 = v72;
    if ( (unsigned int)AllocationCount > v72 )
    {
      v63 = WdLogNewEntry5_WdError(v61, v60);
      *(_QWORD *)(v63 + 24) = -1073741811LL;
      *(_QWORD *)(v63 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdError(v63);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v73);
      return 3221225485LL;
    }
    if ( (_DWORD)AllocationCount )
    {
      pAllocationList = v22[v45].pAllocationList;
      v65 = &v80[4 * v72 * (unsigned int)v41];
      if ( &pAllocationList[AllocationCount] < pAllocationList
        || (unsigned __int64)&pAllocationList[AllocationCount] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v65, pAllocationList, 4 * AllocationCount);
    }
    v41 = (unsigned int)(v41 + 1);
    v36 = v81;
  }
  Src[0] = v36;
  v66 = (unsigned int *)v82;
  v84[1] = v82;
  pHDRMetaData = v75[1];
  Src[1] = *((void **)&v76 + 1);
  v67 = 0;
  if ( v78 )
  {
    v68 = v24;
    v69 = v36;
    p_pAllocationList = &v22->pAllocationList;
    do
    {
      *v69 = p_pAllocationList - 3;
      p_pAllocationList[3] = &v68->Flags;
      *p_pAllocationList = (D3DKMT_HANDLE *)&v80[4 * v42 * v67++];
      ++v69;
      ++v68;
      p_pAllocationList += 7;
    }
    while ( v67 < v43 );
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v84;
  *(__m128i *)&a2->VidPnSourceId = v10;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(__m128i *)&a2->Duration = v11;
  a2->pHDRMetaData = pHDRMetaData;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v36;
  *a4 = v22;
  *a5 = v24;
  *a6 = v83;
  *a7 = v66;
  *a8 = (unsigned int *)v80;
  *a9 = (unsigned __int8 *)v75[1];
  *a10 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v76 + 1);
  v73 = 0LL;
  v74 = 0uLL;
  v76 = 0uLL;
  *(_OWORD *)v75 = 0LL;
  CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v73);
  return 0LL;
}
