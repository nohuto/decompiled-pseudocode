/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EEB0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C060 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026450 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180026848 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180027878 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C0E4 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DC34 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180053C44 (IsOpenThemeDataPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ @ 0x180084D2C (--1-$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x180088A20 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800BDBB8 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // esi
  int v3; // edi
  __int64 v4; // r14
  struct CVisualProxy *v5; // rcx
  int v6; // eax
  struct CVisual *v7; // rdx
  VisualCollection *v8; // rcx
  int inserted; // eax
  CVisual *v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  char v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  int cxLeftWidth; // ecx
  __int64 v17; // rax
  int cyTopHeight; // edx
  __int64 v19; // rax
  int cxRightWidth; // r8d
  __int64 v21; // rax
  int cyBottomHeight; // r9d
  int v23; // edi
  int v24; // r14d
  bool IsSheetOfGlass; // al
  char v26; // r9
  int v27; // r11d
  __int64 v28; // rdx
  int v29; // r15d
  bool v30; // zf
  __int64 v31; // rax
  int v32; // r12d
  __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  struct CClientArea **v42; // rdx
  __int64 v43; // rax
  CIndirectSwapchainRenderTargetProxy *v44; // r14
  unsigned int v45; // r8d
  __int64 v46; // rax
  unsigned __int64 v47; // xmm0_8
  unsigned int v48; // edx
  unsigned int v49; // ecx
  __int64 v50; // rax
  float v51; // xmm2_4
  __int64 v52; // r10
  unsigned __int64 v53; // xmm0_8
  int updated; // eax
  CHolographicSlate *v55; // rcx
  _DWORD *v56; // rax
  unsigned int v57; // r8d
  int v58; // eax
  unsigned int v60; // [rsp+20h] [rbp-40h]
  struct _MARGINS v61; // [rsp+30h] [rbp-30h] BYREF
  struct CClientArea *v62[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v1 = 0;
  v3 = 0;
  if ( !*((_QWORD *)this + 60) )
  {
    v4 = *((_QWORD *)this + 91);
    v5 = *(struct CVisualProxy **)(v4 + 128);
    if ( v5 )
    {
      v62[0] = 0LL;
      v6 = CClientArea::Create(v5, v62);
      v3 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<CClientArea>::~ComPtr<CClientArea>(v62);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x784u);
        goto LABEL_11;
      }
      v7 = v62[0];
      *((_QWORD *)v62[0] + 30) = v4;
      v8 = (VisualCollection *)(*((_QWORD *)this + 67) + 32LL);
      *((_QWORD *)this + 60) = v7;
      inserted = VisualCollection::InsertRelative(v8, v7, 0LL, 1, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v60 = 1927;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v60);
        goto LABEL_11;
      }
      v10 = (CVisual *)*((_QWORD *)this + 60);
      v61 = 0LL;
      CVisual::SetInsetFromParent(v10, &v61);
      if ( (*((_BYTE *)this + 240) & 4) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v60 = 1934;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_11:
  if ( v3 >= 0 )
  {
    if ( *((_QWORD *)this + 60) )
    {
      v11 = *((_QWORD *)this + 91);
      v12 = *((_DWORD *)this + 148);
      v61 = 0LL;
      *(_OWORD *)v62 = *(_OWORD *)(v11 + 48);
      if ( (unsigned __int8)IsOpenThemeDataPresent() && (v12 & 6) != 0 || (*((_DWORD *)this + 148) & 0x200000) != 0 )
      {
        v13 = *((_BYTE *)this + 240) & 4;
        v14 = 644LL;
        if ( !v13 )
          v14 = 628LL;
        v15 = *((_QWORD *)this + 91);
        if ( !v15 || (*(_BYTE *)(v15 + 608) & 8) != 0 )
        {
          v23 = 0;
          v24 = 0;
          IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
          v29 = *(_DWORD *)((char *)this + v28);
          v30 = !IsSheetOfGlass;
          v31 = 648LL;
          if ( v30 )
          {
            if ( !v26 )
              v31 = 632LL;
            v32 = *(_DWORD *)((char *)this + v31);
            v33 = 656LL;
            if ( !v26 )
              v33 = 640LL;
            v34 = *(_DWORD *)((char *)this + v33);
            if ( *((_DWORD *)this + 153) - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) - v29 >= 0 )
              v27 = *((_DWORD *)this + 153) - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) - v29;
            if ( *((_DWORD *)this + 154) - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL) - v32 >= 0 )
              v23 = *((_DWORD *)this + 154) - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL) - v32;
            if ( *((_DWORD *)this + 156) - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL) - v34 >= 0 )
              v24 = *((_DWORD *)this + 156) - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL) - v34;
          }
          else
          {
            if ( !v26 )
              v31 = 632LL;
            v32 = *(_DWORD *)((char *)this + v31);
            v35 = 656LL;
            if ( !v26 )
              v35 = 640LL;
            v34 = *(_DWORD *)((char *)this + v35);
          }
          v30 = v26 == 0;
          cxLeftWidth = v27 + v29;
          cxRightWidth = v32 + v23;
          cyBottomHeight = v34 + v24;
          v36 = 652LL;
          if ( v30 )
            v36 = 636LL;
          cyTopHeight = *(_DWORD *)((char *)this + v36);
        }
        else
        {
          cxLeftWidth = *(_DWORD *)((char *)this + v14);
          v17 = 652LL;
          if ( !v13 )
            v17 = 636LL;
          cyTopHeight = *(_DWORD *)((char *)this + v17);
          v19 = 648LL;
          if ( !v13 )
            v19 = 632LL;
          cxRightWidth = *(_DWORD *)((char *)this + v19);
          v21 = 656LL;
          if ( !v13 )
            v21 = 640LL;
          cyBottomHeight = *(_DWORD *)((char *)this + v21);
        }
      }
      else
      {
        cyBottomHeight = v61.cyBottomHeight;
        cyTopHeight = v61.cyTopHeight;
        cxRightWidth = v61.cxRightWidth;
        cxLeftWidth = v61.cxLeftWidth;
      }
      LODWORD(v62[0]) += cxLeftWidth;
      v3 = 0;
      HIDWORD(v62[0]) += cyTopHeight;
      LODWORD(v62[1]) -= cxRightWidth;
      HIDWORD(v62[1]) -= cyBottomHeight;
      v37 = *(_QWORD *)(*((_QWORD *)this + 60) + 240LL);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 24);
        if ( v38 )
        {
          v39 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, struct CClientArea **))(*(_QWORD *)v38 + 392LL))(
                  v38,
                  v37 + 180,
                  v37 + 196,
                  v37 + 212,
                  v62);
          v3 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0xA0u);
        }
      }
      if ( v3 >= 0 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 60) + 16LL) + 16LL);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v40 + 16) + 368LL))(
               *(_QWORD *)(v40 + 16),
               *(unsigned int *)(v40 + 24),
               *((_QWORD *)this + 91) + 228LL);
        if ( v3 >= 0 )
        {
          v41 = *((_QWORD *)this + 103);
          if ( v41
            && (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) != 6
              ? (v42 = v62)
              : (v42 = (struct CClientArea **)(*((_QWORD *)this + 91) + 48LL)),
                (*(void (__fastcall **)(__int64, struct CClientArea **))(*(_QWORD *)v41 + 40LL))(v41, v42),
                v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 5)
                                                                     + 24LL)
                                                       + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                          + 24LL)),
                v3 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x131Bu);
          }
          else
          {
            v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 60) + 16LL) + 16LL);
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v43 + 16) + 352LL))(
                   *(_QWORD *)(v43 + 16),
                   *(unsigned int *)(v43 + 24));
            if ( v3 >= 0 )
            {
              v44 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 98);
              v3 = 0;
              if ( v44 )
              {
                v45 = 0;
                if ( *((_BYTE *)this + 776) )
                {
                  CTopLevelWindow::GetOutsideMargins(this, &v61);
                  v3 = v61.cxLeftWidth;
                  v45 = v61.cyTopHeight;
                  v44 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 98);
                  v46 = *(_QWORD *)(*((_QWORD *)this + 91) + 48LL);
                  v47 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 91) + 48LL), 8).m128i_u64[0];
                  v48 = v47 - v61.cxRightWidth - v46 - v61.cxLeftWidth;
                  v49 = HIDWORD(v47) - HIDWORD(v46) - v61.cyBottomHeight - v61.cyTopHeight;
                }
                else
                {
                  v50 = *((_QWORD *)this + 91);
                  v51 = *(float *)(v50 + 304);
                  v52 = *(_QWORD *)(v50 + 196);
                  v53 = _mm_srli_si128(*(__m128i *)(v50 + 196), 8).m128i_u64[0];
                  v48 = (int)(float)((float)((int)v53 - v52) * v51);
                  v49 = (int)(float)((float)(HIDWORD(v53) - HIDWORD(v52)) * v51);
                }
                updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v44, v3, v45, v48, v49);
                v3 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1575u);
              }
              if ( v3 >= 0 )
              {
                v3 = 0;
                if ( (*((_BYTE *)this + 241) & 2) != 0 )
                {
                  v55 = (CHolographicSlate *)*((_QWORD *)this + 99);
                  if ( v55 )
                  {
                    v56 = (_DWORD *)*((_QWORD *)this + 91);
                    v57 = 0;
                    if ( v56[52] - v56[50] >= 0 )
                      v57 = v56[52] - v56[50];
                    if ( v56[51] - v56[49] >= 0 )
                      v1 = v56[51] - v56[49];
                    v58 = CHolographicSlate::SetSize(v55, v1, v57);
                    v3 = v58;
                    if ( v58 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x162u);
                  }
                }
                if ( v3 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1326u);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1324u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1321u);
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x130Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x130Bu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x12FEu);
  }
  return (unsigned int)v3;
}
