/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DD450 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001CE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00145E8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C004B0D0 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01588F8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C015A564 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C015A7CC (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A878 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C02DE31C (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03BDC58 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int CddShadowPitch; // eax
  DXGADAPTER **v14; // rcx
  struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v16; // rcx
  unsigned int Width; // r12d
  unsigned int Height; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // ebx
  __int64 left; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v21; // eax
  struct DXGGLOBAL *Global; // rax
  LONG *v23; // rbx
  LONG v24; // eax
  __int64 v25; // r9
  int v26; // r8d
  int v27; // edx
  int v28; // r12d
  int v29; // eax
  unsigned int right; // edx
  LONG v31; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // r11d
  unsigned int v36; // eax
  unsigned __int8 *v37; // r13
  unsigned int v38; // esi
  int v39; // edi
  int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  int v49; // r14d
  int v50; // eax
  __int64 v51; // rbx
  unsigned int v52; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+54h] [rbp-ACh] BYREF
  int v54; // [rsp+58h] [rbp-A8h]
  unsigned int v55; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGCONTEXT *v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+78h] [rbp-88h]
  struct DXGHWQUEUE *v60; // [rsp+80h] [rbp-80h]
  char v61[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  char v63; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_LOCK v64; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *pData; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E4h] [rbp-1Ch]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+F8h] [rbp-8h]
  int v72; // [rsp+FCh] [rbp-4h]
  struct tagRECT *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  _BYTE v75[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v76[8]; // [rsp+120h] [rbp+20h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v77; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v78; // [rsp+740h] [rbp+640h] BYREF
  struct tagRECT v79; // [rsp+750h] [rbp+650h] BYREF
  struct tagRECT v80; // [rsp+760h] [rbp+660h] BYREF
  char v81[8]; // [rsp+770h] [rbp+670h] BYREF
  char v82[64]; // [rsp+778h] [rbp+678h] BYREF
  char v83[88]; // [rsp+7B8h] [rbp+6B8h] BYREF

  v3 = a3;
  v59 = a3;
  v55 = 0;
  v52 = 0;
  v60 = a2;
  v56 = a1;
  v4 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 384);
  if ( !v4 )
    return 0LL;
  v6 = *((_QWORD *)v56 + 2);
  v7 = *(_QWORD *)(v6 + 1848);
  *(_QWORD *)&v80.left = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75,
    (struct DXGDEVICE *)v6);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v76,
    &v56,
    1u,
    v8,
    1);
  if ( v76[0] )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    v63 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, v6, 1, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v81, 0LL);
    LODWORD(v11) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(4LL, v10, v6);
      goto LABEL_79;
    }
    ADAPTER_DISPLAY::GetCddAllocationHandles(*(ADAPTER_DISPLAY **)(v7 + 2792), v3, &v55, &v52);
    if ( !v55 || !v52 )
    {
      v12 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(ADAPTER_DISPLAY **)(v7 + 2792),
              (struct DXGDEVICE *)v6,
              v3,
              &v55,
              &v52,
              (struct COREDEVICEACCESS *)v81);
      v11 = v12;
      if ( v12 == -1073741637 )
      {
        v11 = -1071775482LL;
LABEL_11:
        WdLogSingleEntry3(4LL, v7, v3, v11);
        goto LABEL_79;
      }
      if ( v12 < 0 )
        goto LABEL_11;
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v7 + 2792), v3);
    v14 = *(DXGADAPTER ***)(v7 + 2792);
    v54 = CddShadowPitch;
    CddDisplayMode = (struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetCddDisplayMode(v14, v3);
    v16 = *(_QWORD *)(v7 + 2792);
    v58 = (unsigned __int8 *)CddDisplayMode;
    Width = CddDisplayMode->Width;
    Height = CddDisplayMode->Height;
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v16, v3, 1);
    memset(&v64, 0, sizeof(v64));
    v64.hAllocation = v52;
    v19 = CurrentOrientation;
    v78 = 0LL;
    v64.hDevice = *(_DWORD *)(v6 + 436);
    v57 = DXGDEVICE::Lock((DXGDEVICE *)v6, &v64, (struct COREDEVICEACCESS *)v81);
    if ( v57 < 0 )
    {
      WdLogSingleEntry1(2LL, 4910LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PresentCddShadowBuffer: Failed to lock shadow buffer.",
        4910LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = v57;
      goto LABEL_79;
    }
    if ( !v64.pData )
    {
      WdLogSingleEntry1(2LL, 4916LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PresentCddShadowBuffer: The locked data pointer is invalid.",
        4916LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = -1073741823;
LABEL_79:
      COREACCESS::~COREACCESS((COREACCESS *)v83);
      COREACCESS::~COREACCESS((COREACCESS *)v82);
      if ( v63 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      goto LABEL_82;
    }
    if ( v4 == 1 )
    {
      if ( ((v19 - 2) & 0xFFFFFFFD) == 0 )
      {
        Width = *((_DWORD *)v58 + 1);
        Height = *(_DWORD *)v58;
        v21 = D3DKMDT_VPPR_ROTATE90;
        if ( v19 == D3DKMDT_VPPR_ROTATE90 )
          v21 = D3DKMDT_VPPR_ROTATE270;
        CurrentOrientation = v21;
      }
      v58 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 193);
      if ( v58 )
      {
        v79 = 0LL;
        Global = DXGGLOBAL_GetGlobal();
        v23 = (LONG *)((char *)Global + 1552);
        if ( GetShadowBufferDirtyRect(&v79, *((_DWORD *)Global + 388), *((_DWORD *)Global + 389)) )
        {
          v24 = v23[3];
          if ( v24 == 20 )
          {
            if ( *v23 > Width || v23[1] > Height )
              goto LABEL_72;
            v78 = v79;
            v29 = *v23;
            right = v79.right;
            if ( *v23 == Width )
            {
              left = (unsigned int)v78.left;
            }
            else
            {
              left = v79.left + ((Width - v29) >> 1);
              v78.left = v79.left + ((Width - v29) >> 1);
              right = ((Width - *v23) >> 1) + v79.right;
              v78.right = right;
            }
            v31 = v23[1];
            top = v78.top;
            if ( v31 == Height )
            {
              bottom = v78.bottom;
            }
            else
            {
              top = ((Height - v31) >> 1) + v78.top;
              v78.top = top;
              bottom = ((Height - v23[1]) >> 1) + v78.bottom;
              v78.bottom = bottom;
            }
            if ( (int)left < 0
              || (int)left > (int)right
              || top < 0
              || top > (int)bottom
              || right > Width
              || bottom > Height
              || v79.left < 0
              || (v34 = v79.right, v79.left > v79.right)
              || (v35 = v79.top, v79.top < 0)
              || (v36 = v79.bottom, v79.top > v79.bottom)
              || v79.right > (unsigned int)*v23
              || v79.bottom > (unsigned int)v23[1] )
            {
              if ( byte_1C0130156 )
              {
                DxgCreateLiveDumpWithWdLogs(
                  0x193u,
                  2057LL,
                  (unsigned int)(*v23 << 16) | (unsigned __int64)(unsigned __int16)v23[1],
                  (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                  0LL,
                  0);
                byte_1C0130156 = 0;
              }
              goto LABEL_72;
            }
            if ( v79.top < (unsigned int)v79.bottom )
            {
              v37 = v58;
              v38 = v79.left;
              v39 = v54;
              do
              {
                if ( v38 < v34 )
                {
                  do
                  {
                    v40 = 3 * v38++;
                    v41 = v40 + v35 * v23[2];
                    v42 = (unsigned int)(v39 * top) + (unsigned __int64)(unsigned int)(4 * left);
                    LODWORD(left) = left + 1;
                    *(_DWORD *)((char *)v64.pData + v42) = v37[v41] | ((v37[(unsigned int)(v41 + 1)] | (v37[(unsigned int)(v41 + 2)] << 8)) << 8);
                    v34 = v79.right;
                  }
                  while ( v38 < v79.right );
                  LODWORD(left) = v78.left;
                  v36 = v79.bottom;
                  v38 = v79.left;
                }
                ++top;
                ++v35;
              }
              while ( v35 < v36 );
              LODWORD(v3) = v59;
              v7 = *(_QWORD *)&v80.left;
            }
            v28 = v54;
          }
          else
          {
            if ( v24 != 22 )
              goto LABEL_72;
            v25 = (unsigned int)v23[2];
            v26 = v23[1];
            v27 = *v23;
            v80.left = 0;
            v80.top = 0;
            v80.right = Width;
            v28 = v54;
            v80.bottom = Height;
            if ( (int)DxgkpBlitA8R8R8G8(
                        v58,
                        v27,
                        v26,
                        v25,
                        CurrentOrientation,
                        (unsigned __int8 *)v64.pData,
                        v54,
                        &v80,
                        &v79,
                        &v78) < 0 )
              goto LABEL_72;
          }
          if ( *(_QWORD *)(v6 + 1848) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) )
          {
            memset(&v77, 0, sizeof(v77));
            CurrentOrientation = D3DKMDT_VPPR_UNINITIALIZED;
            if ( v60 )
            {
              CurrentOrientation = *((_DWORD *)v60 + 6);
              v77.hHwQueues = (D3DKMT_HANDLE *)&CurrentOrientation;
            }
            v77.PrivatePresentData.Flags.Value |= 1u;
            v77.PrivatePresentData.hDevice = *((_DWORD *)v56 + 6);
            v77.PrivatePresentData.pSrcSubRects = &v79;
            v77.PrivatePresentData.hSource = v52;
            v77.PrivatePresentData.hDestination = v55;
            v77.PrivatePresentData.DstRect = v78;
            v77.PrivatePresentData.SubRectCnt = 1;
            v77.PrivatePresentData.SrcRect = v78;
            v79 = v78;
            v43 = DXGCONTEXT::PresentFromCdd(
                    v56,
                    &v77,
                    v3,
                    (struct COREDEVICEACCESS *)v81,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v61,
                    &v56);
            if ( v43 >= 0 )
            {
              if ( (**(_DWORD **)(v7 + 2696) & 0x10) != 0 )
                PresentQualcommPanelRefreshWorkaround(v56, (struct DXGADAPTER *)v7, v3);
              goto LABEL_72;
            }
          }
          else
          {
            v44 = *(_QWORD *)(v7 + 2792);
            v65[1] = 0;
            v72 = 0;
            v74 = 0LL;
            ADAPTER_DISPLAY::GetCurrentOrientation(v44, v3, 1);
            v69 = 0LL;
            pData = v64.pData;
            v73 = &v78;
            v45 = *(_QWORD *)(v7 + 2792);
            v65[0] = v3;
            v67 = 4;
            v68 = v28;
            v70 = 0LL;
            v71 = 1;
            v46 = *(_QWORD *)(v45 + 448);
            if ( v46 )
            {
              if ( (unsigned int)v3 < *(_DWORD *)v46 && (v47 = *(_QWORD *)(v46 + 8)) != 0 )
                v43 = BLTQUEUE::PresentDisplayOnly(v47 + 2920LL * (unsigned int)v3, v65, 0LL, 1LL);
              else
                v43 = -1073741811;
              if ( v43 >= 0 )
                goto LABEL_72;
            }
            else
            {
              v43 = -1073741811;
            }
          }
          v48 = v43;
          WdLogSingleEntry1(2LL, v43);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PresentCddShadowBuffer: PresentFromCdd failed. Status = 0x%I64x",
            v48,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
LABEL_72:
    v79.left = *(_DWORD *)(v6 + 436);
    v79.top = 1;
    *(_QWORD *)&v79.right = &v52;
    v49 = DXGDEVICE::Unlock((DXGDEVICE *)v6, (const struct _D3DKMT_UNLOCK *)&v79, 0LL, left);
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v7) )
    {
      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v7 + 2792), v3) )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v7 + 2792), v3) )
        {
          if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v7 + 2792), v3) )
          {
            v50 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *(ADAPTER_DISPLAY **)(v7 + 2792),
                    v56,
                    v3,
                    (struct COREDEVICEACCESS *)v81);
            if ( v50 < 0 )
            {
              v51 = v50;
              WdLogSingleEntry3(2LL, v56, v50, 5175LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                (__int64)v56,
                v51,
                5175LL,
                0LL,
                0LL);
            }
          }
        }
      }
    }
    LODWORD(v11) = v49;
    goto LABEL_79;
  }
  WdLogSingleEntry1(2LL, 4827LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"PresentCddShadowBuffer: Out of memory - could not initialize context array lock exclusive",
    4827LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v11) = -1073741801;
LABEL_82:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v76);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
  return (unsigned int)v11;
}
