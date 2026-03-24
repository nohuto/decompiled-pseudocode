/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252244
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02526D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C0218000 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0251A30 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0251C50 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0251CD8 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        unsigned __int64 a2,
        void **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v8; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v10; // r12
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _BYTE *PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v15; // rbx
  _QWORD *v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 p_HighPart; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v23; // r13
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v27; // r10
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  signed __int64 v34; // r9
  signed __int64 v35; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v36; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rdx
  int v40; // ecx
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  char v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+38h] [rbp-C8h]
  void **v47; // [rsp+40h] [rbp-C0h]
  ADAPTER_DISPLAY *v48; // [rsp+48h] [rbp-B8h]
  int *v49; // [rsp+50h] [rbp-B0h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v50; // [rsp+58h] [rbp-A8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v51; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v52; // [rsp+88h] [rbp-78h]
  _BYTE v53[24]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp-58h]
  PVOID v55; // [rsp+B0h] [rbp-50h] BYREF
  char v56; // [rsp+B8h] [rbp-48h] BYREF
  int v57; // [rsp+E4h] [rbp-1Ch]
  PVOID v58; // [rsp+F0h] [rbp-10h] BYREF
  char v59; // [rsp+F8h] [rbp-8h] BYREF
  int v60; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v10 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v11 = a8;
  v12 = a1;
  v48 = a6;
  v13 = a4;
  v47 = a3;
  v43 = a1;
  *a7 = 0;
  a8->Value = 0;
  v49 = a7;
  v50 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  v52 = 0LL;
  v54 = 0;
  if ( a1 <= 3 )
  {
    PoolWithTag = v53;
    v52 = v53;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, a2, a3);
      v16[3] = a1;
      v17 = -1073741801;
      v16[4] = -1073741801LL;
      v16[5] = PsGetCurrentProcess(v19, v18);
      WdLogEvent5_WdWarning(v16);
      goto LABEL_39;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    v52 = PoolWithTag;
  }
  v54 = a1;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8LL * a1);
  v15 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v52;
  if ( !v52 )
    goto LABEL_7;
  v58 = 0LL;
  v60 = 0;
  v23 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(
                                                            &v58,
                                                            a1);
  if ( v23 )
  {
    P = 0LL;
    v27 = 0LL;
    v46 = 0;
    v55 = 0LL;
    v57 = 0;
    if ( !(_DWORD)v13
      || (v8 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                                                                                   &v55,
                                                                                   v13),
          v28 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                                                                           &P,
                                                                           v13),
          v27 = v28,
          v8)
      && v28 )
    {
      if ( a1 )
      {
        p_HighPart = (__int64)&v23->CompSurfaceLuid.HighPart;
        v34 = (char *)v15 - (char *)v10;
        v35 = (char *)v47 - (char *)v10;
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + v34) = v23;
          v36 = *v10;
          *(_QWORD *)(p_HighPart - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + v35);
          *(_DWORD *)(p_HighPart - 4) = v36->VidPnSourceId;
          *(_DWORD *)p_HighPart = v36->LayerIndex;
          *(RECT *)(p_HighPart + 8) = v36->pPlaneAttributes->SrcRect;
          *(RECT *)(p_HighPart + 24) = v36->pPlaneAttributes->DstRect;
          *(RECT *)(p_HighPart + 40) = v36->pPlaneAttributes->ClipRect;
          *(_DWORD *)(p_HighPart + 56) = v36->pPlaneAttributes->Rotation;
          *(_DWORD *)(p_HighPart + 64) = v36->pPlaneAttributes->ColorSpace;
          *(_DWORD *)(p_HighPart + 4) ^= (*(_DWORD *)(p_HighPart + 4) ^ v36->pPlaneAttributes->Flags) & 1;
          *(_DWORD *)(p_HighPart + 4) ^= ((unsigned __int8)*(_DWORD *)(p_HighPart + 4) ^ (unsigned __int8)v36->pPlaneAttributes->Flags) & 2;
          *(_DWORD *)(p_HighPart + 60) ^= (*(_DWORD *)(p_HighPart + 60) ^ v36->pPlaneAttributes->Blend) & 1;
          if ( v36->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *(_DWORD *)(p_HighPart + 68) = 1;
          }
          else if ( v36->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *(_DWORD *)(p_HighPart + 68) = 2;
          }
          v23 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v23 + 104);
          ++v10;
          *(_DWORD *)(p_HighPart + 72) = v36->pPlaneAttributes->SDRWhiteLevel;
          p_HighPart += 104LL;
          --v12;
        }
        while ( v12 );
        a1 = v43;
      }
      if ( (_DWORD)v13 )
      {
        v37 = a5;
        p_HighPart = (__int64)&v8->PostComposition;
        v38 = v13;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v37 + (char *)v27 - (char *)a5) = v8++;
          v39 = (__int64)*v37++;
          v40 = *(_DWORD *)p_HighPart;
          *(_DWORD *)(p_HighPart - 4) = *(_DWORD *)v39;
          *(_OWORD *)(p_HighPart + 4) = *(_OWORD *)(v39 + 8);
          *(_OWORD *)(p_HighPart + 20) = *(_OWORD *)(v39 + 24);
          *(_DWORD *)(p_HighPart + 36) = *(_DWORD *)(v39 + 40);
          *(_DWORD *)p_HighPart ^= (*(_DWORD *)(v39 + 4) ^ v40) & 1;
          *(_DWORD *)p_HighPart ^= (*(_DWORD *)(v39 + 4) ^ *(_DWORD *)p_HighPart) & 2;
          p_HighPart += 44LL;
          --v38;
        }
        while ( v38 );
      }
      v51.PlaneCount = a1;
      *(&v51.PlaneCount + 1) = 0;
      *(&v51.PostCompositionCount + 1) = 0;
      *(_QWORD *)&v51.Supported = 0LL;
      v51.ppPlanes = v15;
      v51.PostCompositionCount = v13;
      v51.ppPostComposition = v27;
      v41 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v48, &v51, p_HighPart);
      if ( v41 >= 0 )
      {
        *v49 = v51.Supported;
        *v50 = v51.ReturnInfo.0;
      }
      v17 = v41;
    }
    else
    {
      v17 = -1073741801;
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, p_HighPart);
      v31[3] = v13;
      v31[4] = -1073741801LL;
      v31[5] = PsGetCurrentProcess(v33, v32);
      WdLogEvent5_WdWarning(v31);
    }
    if ( P != &v45 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v46 = 0;
    if ( v55 != &v56 && v55 )
      ExFreePoolWithTag(v55, 0);
    v55 = 0LL;
    v57 = 0;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, p_HighPart);
    v24[3] = a1;
    v17 = -1073741801;
    v24[4] = -1073741801LL;
    v24[5] = PsGetCurrentProcess(v26, v25);
    WdLogEvent5_WdWarning(v24);
  }
  if ( v58 != &v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  v58 = 0LL;
  v60 = 0;
LABEL_39:
  if ( v52 != v53 && v52 )
    ExFreePoolWithTag(v52, 0);
  return v17;
}
