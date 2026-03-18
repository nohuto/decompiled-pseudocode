/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015DFB4 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0319174 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C001E0AC (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C015ED50 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C015EEE8 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015F208 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C015F6B0 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C015FA00 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C015FA4C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015FA98 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C015FB14 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015FB90 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3988 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3BFC (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void **v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGALLOCATION **v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v32; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v33; // rcx
  __int64 *v34; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v35; // r8
  __int64 v36; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 v39; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v40; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v41; // r10
  unsigned int v42; // edx
  __int64 v43; // rdi
  unsigned int v44; // ebx
  void **v45; // rdx
  signed __int64 v46; // r13
  __int64 v47; // r8
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  ADAPTER_DISPLAY *v50; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v51; // r13
  unsigned int v52; // ebx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v64[2]; // [rsp+58h] [rbp-A8h] BYREF
  ADAPTER_DISPLAY *v65; // [rsp+60h] [rbp-A0h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v66; // [rsp+68h] [rbp-98h]
  struct ADAPTER_RENDER *v67; // [rsp+70h] [rbp-90h]
  unsigned int v68; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v69; // [rsp+80h] [rbp-80h]
  PVOID v70; // [rsp+88h] [rbp-78h] BYREF
  char v71; // [rsp+90h] [rbp-70h] BYREF
  int v72; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  char v74; // [rsp+B8h] [rbp-48h] BYREF
  int v75; // [rsp+D0h] [rbp-30h]
  PVOID v76; // [rsp+D8h] [rbp-28h] BYREF
  char v77; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+F8h] [rbp-8h]
  PVOID v79; // [rsp+100h] [rbp+0h] BYREF
  char v80; // [rsp+108h] [rbp+8h] BYREF
  int v81; // [rsp+120h] [rbp+20h]
  PVOID v82; // [rsp+130h] [rbp+30h] BYREF
  char v83; // [rsp+138h] [rbp+38h] BYREF
  int v84; // [rsp+1BCh] [rbp+BCh]
  PVOID v85; // [rsp+1C0h] [rbp+C0h] BYREF
  char v86; // [rsp+1C8h] [rbp+C8h] BYREF
  int v87; // [rsp+228h] [rbp+128h]
  PVOID v88; // [rsp+230h] [rbp+130h] BYREF
  char v89; // [rsp+238h] [rbp+138h] BYREF
  int v90; // [rsp+340h] [rbp+240h]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 24);
  v67 = a2;
  v68 = a1;
  v8 = v7 * *(_DWORD *)(v6 + 2632);
  v65 = a3;
  v85 = 0LL;
  v87 = 0;
  *(_QWORD *)v64 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v85, v8);
  if ( *(_QWORD *)v64 )
  {
    v79 = 0LL;
    v81 = 0;
    v66 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                               &v79,
                                                               v8);
    v88 = 0LL;
    v90 = 0;
    v15 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(&v88, v8);
    if ( v15 )
    {
      v76 = 0LL;
      v78 = 0;
      v22 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&v76, v8);
      if ( v22 )
      {
        P = 0LL;
        v75 = 0;
        v27 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         &P,
                                         v8);
        if ( v27 )
        {
          v82 = 0LL;
          v84 = 0;
          *(_QWORD *)v63 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                             &v82,
                             (unsigned int)v7);
          if ( *(_QWORD *)v63 )
          {
            v70 = 0LL;
            v72 = 0;
            v32 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(
                                                                                       &v70,
                                                                                       (unsigned int)v7);
            v69 = v32;
            if ( v8 )
            {
              v33 = v66;
              v34 = (__int64 *)(*(_QWORD *)v64 + 24LL);
              v35 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v64;
              v36 = v8;
              do
              {
                *v33 = v35++;
                *v34 = v15;
                ++v33;
                v15 += 88LL;
                v34 += 4;
                --v36;
              }
              while ( v36 );
            }
            if ( (_DWORD)v7 )
            {
              v37 = *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v63;
              v38 = v7;
              do
              {
                *v32++ = v37++;
                --v38;
              }
              while ( v38 );
            }
            v63[0] = 0;
            v64[0] = 0;
            v39 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v67 + 2));
            v42 = -1;
            if ( !v39 )
              v42 = v68;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(v65, v42, v8, v27, v63, v41, v64, v40);
            v43 = v63[0];
            if ( v63[0] > v8 )
            {
              WdLogSingleEntry1(1LL, 9983LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"ActualPlaneCount <= MaxPlanes",
                9983LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v44 = v64[0];
            if ( v64[0] > (unsigned int)v7 )
            {
              WdLogSingleEntry1(1LL, 9984LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"ActualPostCompositionCount <= NumVidPnSources",
                9984LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (_DWORD)v43 )
            {
              v45 = v22;
              v46 = (char *)v27 - (char *)v22;
              v47 = v43;
              do
              {
                *v45 = *(void **)((*(_QWORD **)((char *)v45 + v46))[6] + 16LL);
                ++v45;
                --v47;
              }
              while ( v47 );
            }
            v48 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v67 + 2));
            v50 = v65;
            v51 = v66;
            if ( v48 )
            {
              CallCheckMultiPlaneOverlaySupport3DDI(v43, v66, v22, v44, v69, v65, a4, a5);
            }
            else if ( (unsigned int)v43 <= *(_DWORD *)(v49 + 2632) )
            {
              if ( *(_QWORD *)(v49 + 984) )
                CallCheckMultiPlaneOverlaySupport2DDI(v43, v66, v22, v65, a4, a5);
              else
                CallCheckMultiPlaneOverlaySupport1DDI(v43, v66, v22, v65, a4, a5);
            }
            if ( *a4 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v50)
              && !*(_BYTE *)(*((_QWORD *)v67 + 2) + 2740LL) )
            {
              *a4 = 0;
              a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0, *a4, v43, v51, v22, v44, v69, v67);
            v52 = 0;
            if ( v70 != &v71 && v70 )
              ExFreePoolWithTag(v70, 0);
            v70 = 0LL;
            v72 = 0;
          }
          else
          {
            CurrentProcess = PsGetCurrentProcess(v29, v28, v30, v31);
            v52 = -1073741801;
            WdLogSingleEntry3(3LL, v7, -1073741801LL, CurrentProcess);
          }
          if ( v82 != &v83 && v82 )
            ExFreePoolWithTag(v82, 0);
          v82 = 0LL;
          v84 = 0;
        }
        else
        {
          v60 = PsGetCurrentProcess(v24, v23, v25, v26);
          v61 = v8;
          v52 = -1073741801;
          WdLogSingleEntry3(3LL, v61, -1073741801LL, v60);
        }
        if ( P != &v74 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v75 = 0;
      }
      else
      {
        v58 = PsGetCurrentProcess(v19, v18, v20, v21);
        v59 = v8;
        v52 = -1073741801;
        WdLogSingleEntry3(3LL, v59, -1073741801LL, v58);
      }
      if ( v76 != &v77 && v76 )
        ExFreePoolWithTag(v76, 0);
      v76 = 0LL;
      v78 = 0;
    }
    else
    {
      v56 = PsGetCurrentProcess(v14, v13, v16, v17);
      v57 = v8;
      v52 = -1073741801;
      WdLogSingleEntry3(3LL, v57, -1073741801LL, v56);
    }
    if ( v88 != &v89 && v88 )
      ExFreePoolWithTag(v88, 0);
    v88 = 0LL;
    v90 = 0;
    if ( v79 != &v80 && v79 )
      ExFreePoolWithTag(v79, 0);
    v79 = 0LL;
    v81 = 0;
  }
  else
  {
    v54 = PsGetCurrentProcess(v10, v9, v11, v12);
    v55 = v8;
    v52 = -1073741801;
    WdLogSingleEntry3(3LL, v55, -1073741801LL, v54);
  }
  if ( v85 != &v86 && v85 )
    ExFreePoolWithTag(v85, 0);
  return v52;
}
