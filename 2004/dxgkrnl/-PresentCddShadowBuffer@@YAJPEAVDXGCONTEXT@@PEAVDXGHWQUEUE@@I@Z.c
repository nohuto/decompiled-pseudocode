/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0190FD4
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0190DC0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0001D04 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B9F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000D3D8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00198DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019B40 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019E64 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C0022B8C (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE040 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E1270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0101D90 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011F918 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014B454 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015634C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C01597A4 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0164F40 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0213B08 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C02210A0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C022E2FC (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FEB00 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int CddShadowPitch; // eax
  DXGADAPTER **v14; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rbx
  unsigned int Width; // r15d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  int *v25; // rbx
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  unsigned int *v32; // rcx
  int v33; // ebx
  int v34; // r14d
  __int64 v36; // rax
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  unsigned int left; // r13d
  unsigned int right; // edx
  signed int v46; // r9d
  int v47; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // r11d
  unsigned int v52; // eax
  unsigned __int8 *v53; // r12
  int v54; // esi
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  _QWORD *v65; // rax
  unsigned int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v68; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v69; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v70; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+70h] [rbp-90h]
  struct DXGHWQUEUE *v72; // [rsp+78h] [rbp-88h]
  char v73[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  char v75; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_LOCK v76; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v77; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v78[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v79[8]; // [rsp+120h] [rbp+20h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v80; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v81; // [rsp+740h] [rbp+640h] BYREF
  tagRECT v82; // [rsp+750h] [rbp+650h] BYREF
  struct tagRECT v83; // [rsp+760h] [rbp+660h] BYREF
  char v84[8]; // [rsp+770h] [rbp+670h] BYREF
  char v85[64]; // [rsp+778h] [rbp+678h] BYREF
  char v86[88]; // [rsp+7B8h] [rbp+6B8h] BYREF

  v3 = a3;
  v68 = 0;
  v66 = 0;
  v72 = a2;
  v69 = a1;
  LODWORD(v70) = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 346);
  if ( (_DWORD)v70 )
  {
    v4 = *((_QWORD *)v69 + 2);
    v5 = *(_QWORD *)(v4 + 1848);
    *(_QWORD *)&v83.left = v5;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78,
      (struct DXGDEVICE *)v4);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v79,
      &v69,
      1u);
    if ( !v79[0] )
    {
      v36 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v36 + 24) = 4765LL;
      WdLogEvent5_WdError(v36);
      LODWORD(v12) = -1073741801;
LABEL_27:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
      return (unsigned int)v12;
    }
    v74 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    v75 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, v4, 1, v8, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v84, 0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
      v37[3] = v12;
      v37[4] = v4;
    }
    else
    {
      ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v5 + 2696), (unsigned int)v3, &v68, &v66);
      if ( v68 && v66 )
      {
LABEL_6:
        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v5 + 2696), v3);
        v14 = *(DXGADAPTER ***)(v5 + 2696);
        v67 = CddShadowPitch;
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v14, v3);
        Width = CddDisplayMode->Width;
        Height = CddDisplayMode->Height;
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(v5 + 2696),
                                             (unsigned int)v3,
                                             1);
        memset(&v76, 0, sizeof(v76));
        v76.hAllocation = v66;
        v19 = CurrentOrientation;
        v81 = 0LL;
        v76.hDevice = *(_DWORD *)(v4 + 436);
        v71 = DXGDEVICE::Lock((DXGDEVICE *)v4, &v76, (struct COREDEVICEACCESS *)v84);
        if ( v71 < 0 )
        {
          v41 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v41 + 24) = 4848LL;
          WdLogEvent5_WdError(v41);
          LODWORD(v12) = v71;
        }
        else
        {
          if ( v76.pData )
          {
            if ( (_DWORD)v70 != 1 )
              goto LABEL_23;
            if ( ((v19 - 2) & 0xFFFFFFFD) == 0 )
            {
              Width = CddDisplayMode->Height;
              v43 = 2;
              Height = CddDisplayMode->Width;
              if ( v19 == D3DKMDT_VPPR_ROTATE90 )
                v43 = 4;
              v19 = v43;
            }
            v70 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL, v20) + 174);
            if ( !v70 )
              goto LABEL_23;
            v82 = 0LL;
            Global = DXGGLOBAL::GetGlobal(v23, v22);
            v25 = (int *)((char *)Global + 1400);
            if ( !GetShadowBufferDirtyRect(&v82, *((unsigned int *)Global + 350), *((_DWORD *)Global + 351)) )
              goto LABEL_23;
            v26 = v25[3];
            if ( v26 == 20 )
            {
              if ( *v25 > Width || v25[1] > Height )
                goto LABEL_23;
              left = v82.left;
              v81 = v82;
              right = v82.right;
              if ( *v25 == Width )
              {
                v46 = v81.left;
              }
              else
              {
                v46 = v82.left + ((Width - *v25) >> 1);
                v81.left = v46;
                right = ((Width - *v25) >> 1) + v82.right;
                v81.right = right;
              }
              v47 = v25[1];
              top = v81.top;
              if ( v47 == Height )
              {
                bottom = v81.bottom;
              }
              else
              {
                top = ((Height - v47) >> 1) + v81.top;
                v81.top = top;
                bottom = ((Height - v25[1]) >> 1) + v81.bottom;
                v81.bottom = bottom;
              }
              if ( v46 >= 0
                && v46 <= (int)right
                && top >= 0
                && top <= (int)bottom
                && right <= Width
                && bottom <= Height
                && v82.left >= 0 )
              {
                v50 = v82.right;
                if ( v82.left <= v82.right )
                {
                  v51 = v82.top;
                  if ( v82.top >= 0 )
                  {
                    v52 = v82.bottom;
                    if ( v82.top <= v82.bottom && v82.right <= (unsigned int)*v25 && v82.bottom <= (unsigned int)v25[1] )
                    {
                      if ( v82.top < (unsigned int)v82.bottom )
                      {
                        v53 = v70;
                        v54 = v67;
                        do
                        {
                          if ( left < v50 )
                          {
                            do
                            {
                              v55 = 3 * left++;
                              v56 = v55 + v25[2] * v51;
                              v57 = (unsigned int)(4 * v46++);
                              *(_DWORD *)((char *)v76.pData + (unsigned int)(v54 * top) + v57) = v53[v56] | ((v53[(unsigned int)(v56 + 1)] | (v53[(unsigned int)(v56 + 2)] << 8)) << 8);
                              v50 = v82.right;
                            }
                            while ( left < v82.right );
                            v46 = v81.left;
                            v52 = v82.bottom;
                            left = v82.left;
                          }
                          ++top;
                          ++v51;
                        }
                        while ( v51 < v52 );
                        v5 = *(_QWORD *)&v83.left;
                      }
                      goto LABEL_16;
                    }
                  }
                }
              }
              if ( byte_1C00B0FF7 )
              {
                DxgCreateLiveDumpWithWdLogs(
                  0x193u,
                  0x809uLL,
                  (unsigned int)(*v25 << 16) | (unsigned __int64)(unsigned __int16)v25[1],
                  (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                  0LL,
                  0);
                byte_1C00B0FF7 = 0;
              }
              v30 = -1073741823;
            }
            else
            {
              if ( v26 != 22 )
                goto LABEL_23;
              v83.left = 0;
              v83.top = 0;
              v27 = v25[2];
              v28 = v25[1];
              v29 = *v25;
              v83.right = Width;
              v83.bottom = Height;
              v30 = DxgkpBlitA8R8R8G8(v70, v29, v28, v27, v19, (unsigned __int8 *)v76.pData, v67, &v83, &v82, &v81);
            }
            if ( v30 < 0 )
              goto LABEL_23;
LABEL_16:
            if ( *(_QWORD *)(v4 + 1848) == *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) )
            {
              memset(&v80, 0, sizeof(v80));
              v67 = 0;
              if ( v72 )
              {
                v67 = *((_DWORD *)v72 + 6);
                v80.hHwQueues = (D3DKMT_HANDLE *)&v67;
              }
              v80.PrivatePresentData.Flags.Value |= 1u;
              v80.PrivatePresentData.hDevice = *((_DWORD *)v69 + 6);
              v80.PrivatePresentData.pSrcSubRects = &v82;
              v80.PrivatePresentData.hSource = v66;
              v80.PrivatePresentData.hDestination = v68;
              v80.PrivatePresentData.DstRect = v81;
              v80.PrivatePresentData.SubRectCnt = 1;
              v80.PrivatePresentData.SrcRect = v81;
              v82 = v81;
              v33 = DXGCONTEXT::PresentFromCdd(
                      v69,
                      &v80,
                      v3,
                      (struct COREDEVICEACCESS *)v84,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)v73,
                      &v69);
              if ( v33 < 0 )
              {
LABEL_77:
                v60 = WdLogNewEntry5_WdError(v32, v31);
                *(_QWORD *)(v60 + 24) = v33;
                WdLogEvent5_WdError(v60);
LABEL_23:
                v82.left = *(_DWORD *)(v4 + 436);
                v82.top = 1;
                *(_QWORD *)&v82.right = &v66;
                v34 = DXGDEVICE::Unlock((DXGDEVICE *)v4, (const struct _D3DKMT_UNLOCK *)&v82, 0LL);
                if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v5) )
                {
                  if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                        *(ADAPTER_DISPLAY **)(v5 + 2696),
                                        (unsigned int)v3) )
                  {
                    if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v5 + 2696), (unsigned int)v3) )
                    {
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v5 + 2696), (unsigned int)v3) )
                      {
                        v61 = ADAPTER_DISPLAY::PresentCddPrimary(
                                *(ADAPTER_DISPLAY **)(v5 + 2696),
                                v69,
                                v3,
                                (struct COREDEVICEACCESS *)v84);
                        v64 = v61;
                        if ( v61 < 0 )
                        {
                          v65 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
                          v65[3] = v69;
                          v65[4] = v64;
                          v65[5] = 5112LL;
                          WdLogEvent5_WdError(v65);
                        }
                      }
                    }
                  }
                }
                LODWORD(v12) = v34;
                goto LABEL_25;
              }
              v32 = *(unsigned int **)(v5 + 2600);
              v31 = *v32;
              if ( (v31 & 0x10) != 0 )
                PresentQualcommPanelRefreshWorkaround(v69, (struct DXGADAPTER *)v5, v3);
            }
            else
            {
              v58 = *(_QWORD *)(v5 + 2696);
              *(&v77.VidPnSourceId + 1) = 0;
              *(&v77.NumDirtyRects + 1) = 0;
              v77.pfnPresentDisplayOnlyProgress = 0LL;
              ADAPTER_DISPLAY::GetCurrentOrientation(v58, (unsigned int)v3, 1);
              v77.Flags.Value = 0;
              v77.NumMoves = 0;
              v77.pMoves = 0LL;
              v77.pSource = v76.pData;
              v77.Pitch = v67;
              v77.pDirtyRect = &v81;
              v59 = *(_QWORD *)(v5 + 2696);
              v77.VidPnSourceId = v3;
              v77.BytesPerPixel = 4;
              v77.NumDirtyRects = 1;
              v32 = *(unsigned int **)(v59 + 384);
              if ( v32 && (unsigned int)v3 < *v32 && (v31 = *((_QWORD *)v32 + 1)) != 0 )
                v33 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v31 + 2904 * v3), &v77);
              else
                v33 = -1073741811;
            }
            if ( v33 >= 0 )
              goto LABEL_23;
            goto LABEL_77;
          }
          v42 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v42 + 24) = 4854LL;
          WdLogEvent5_WdError(v42);
          LODWORD(v12) = -1073741823;
        }
LABEL_25:
        COREACCESS::~COREACCESS((COREACCESS *)v86);
        COREACCESS::~COREACCESS((COREACCESS *)v85);
        if ( v75 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        goto LABEL_27;
      }
      v38 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v5 + 2696),
              (struct DXGDEVICE *)v4,
              v3,
              &v68,
              &v66,
              (struct COREDEVICEACCESS *)v84);
      v12 = v38;
      if ( v38 == -1073741637 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39);
        v12 = -1071775482LL;
      }
      else
      {
        if ( v38 >= 0 )
          goto LABEL_6;
        v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39);
      }
      v37[4] = v3;
      v37[3] = v5;
      v37[5] = v12;
    }
    WdLogEvent5_WdEvent(v37);
    goto LABEL_25;
  }
  return 0LL;
}
