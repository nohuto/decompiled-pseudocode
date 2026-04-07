/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180022EF0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18000BEC0 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180015978 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18002A7D8 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DD64 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180053C34 (IsOpenThemeDataPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ @ 0x18008558C (--1-$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x180089140 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800BE278 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // esi
  int v3; // edi
  __int64 v4; // rax
  int v5; // edi
  int cyBottomHeight; // r8d
  int cyTopHeight; // r10d
  int cxRightWidth; // edx
  int cxLeftWidth; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  CIndirectSwapchainRenderTargetProxy *v16; // rcx
  __int64 v18; // r9
  int *v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r14
  struct CVisualProxy *v25; // rcx
  int v26; // eax
  struct CVisual *v27; // rdx
  VisualCollection *v28; // rcx
  int inserted; // eax
  struct _MARGINS *v30; // rcx
  struct CClientArea **v31; // rdx
  unsigned int v32; // r14d
  __int64 v33; // rax
  unsigned __int64 v34; // xmm0_8
  unsigned int v35; // r8d
  unsigned int v36; // edx
  __int64 v37; // rax
  float v38; // xmm2_4
  __int64 v39; // r10
  unsigned __int64 v40; // xmm0_8
  int updated; // eax
  CHolographicSlate *v42; // rcx
  _DWORD *v43; // rax
  unsigned int v44; // r8d
  int v45; // eax
  unsigned int v46; // [rsp+20h] [rbp-40h]
  struct _MARGINS v47; // [rsp+30h] [rbp-30h] BYREF
  struct CClientArea *v48[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v1 = 0;
  v3 = 0;
  if ( !*((_QWORD *)this + 60) )
  {
    v24 = *((_QWORD *)this + 91);
    v25 = *(struct CVisualProxy **)(v24 + 128);
    if ( v25 )
    {
      v48[0] = 0LL;
      v26 = CClientArea::Create(v25, v48);
      v3 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<CClientArea>::~ComPtr<CClientArea>(v48);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x784u);
        goto LABEL_2;
      }
      v27 = v48[0];
      *((_QWORD *)v48[0] + 30) = v24;
      v28 = (VisualCollection *)(*((_QWORD *)this + 67) + 32LL);
      *((_QWORD *)this + 60) = v27;
      inserted = VisualCollection::InsertRelative(v28, v27, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v46 = 1927;
LABEL_42:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v46);
        goto LABEL_2;
      }
      v30 = (struct _MARGINS *)*((_QWORD *)this + 60);
      v47 = 0LL;
      CVisual::SetInsetFromParent(v30, &v47);
      if ( (*((_BYTE *)this + 240) & 4) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v46 = 1934;
          goto LABEL_42;
        }
      }
    }
  }
LABEL_2:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1332u);
  }
  else if ( *((_QWORD *)this + 60) )
  {
    v4 = *((_QWORD *)this + 91);
    v5 = *((_DWORD *)this + 148);
    v47 = 0LL;
    *(_OWORD *)v48 = *(_OWORD *)(v4 + 48);
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 || (*((_DWORD *)this + 148) & 0x200000) != 0 )
    {
      v18 = 644LL;
      if ( (*((_BYTE *)this + 240) & 4) == 0 )
        v18 = 628LL;
      v19 = (int *)((char *)this + v18);
      v20 = *((_QWORD *)this + 91);
      cxLeftWidth = *v19;
      cxRightWidth = v19[1];
      cyBottomHeight = v19[3];
      if ( v20 && (*(_BYTE *)(v20 + 608) & 8) == 0 )
      {
        cyTopHeight = v19[2];
      }
      else
      {
        v21 = 0;
        if ( *((_DWORD *)this + 153) - *v19 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) >= 0 )
          v21 = *((_DWORD *)this + 153) - *v19 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
        cyTopHeight = v19[2];
        cxLeftWidth += v21;
        v22 = 0;
        if ( *((_DWORD *)this + 154) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL) >= 0 )
          v22 = *((_DWORD *)this + 154) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL);
        cxRightWidth += v22;
        v23 = 0;
        if ( *((_DWORD *)this + 156) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL) >= 0 )
          v23 = *((_DWORD *)this + 156) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL);
        cyBottomHeight += v23;
      }
    }
    else
    {
      cyBottomHeight = v47.cyBottomHeight;
      cyTopHeight = v47.cyTopHeight;
      cxRightWidth = v47.cxRightWidth;
      cxLeftWidth = v47.cxLeftWidth;
    }
    LODWORD(v48[0]) += cxLeftWidth;
    v3 = 0;
    HIDWORD(v48[0]) += cyTopHeight;
    LODWORD(v48[1]) -= cxRightWidth;
    HIDWORD(v48[1]) -= cyBottomHeight;
    v10 = *(_QWORD *)(*((_QWORD *)this + 60) + 240LL);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, struct CClientArea **))(*(_QWORD *)v11 + 392LL))(
                v11,
                v10 + 180,
                v10 + 196,
                v10 + 212,
                v48);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xA0u);
      }
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x133Fu);
    }
    else
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 60) + 16LL) + 16LL);
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v13 + 16) + 368LL))(
             *(_QWORD *)(v13 + 16),
             *(unsigned int *)(v13 + 24),
             *((_QWORD *)this + 91) + 228LL);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1342u);
      }
      else
      {
        v14 = *((_QWORD *)this + 103);
        if ( v14
          && (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) != 6
            ? (v31 = v48)
            : (v31 = (struct CClientArea **)(*((_QWORD *)this + 91) + 48LL)),
              (*(void (__fastcall **)(__int64, struct CClientArea **))(*(_QWORD *)v14 + 40LL))(v14, v31),
              v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 24LL)
                                                     + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 5)
                                                                        + 24LL)),
              v3 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x134Fu);
        }
        else
        {
          v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 60) + 16LL) + 16LL);
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 16) + 352LL))(
                 *(_QWORD *)(v15 + 16),
                 *(unsigned int *)(v15 + 24));
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1355u);
          }
          else
          {
            v16 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 98);
            v3 = 0;
            if ( v16 )
            {
              v32 = 0;
              if ( *((_BYTE *)this + 776) )
              {
                CTopLevelWindow::GetOutsideMargins(this, &v47);
                v3 = v47.cxLeftWidth;
                v32 = v47.cyTopHeight;
                v16 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 98);
                v33 = *(_QWORD *)(*((_QWORD *)this + 91) + 48LL);
                v34 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 91) + 48LL), 8).m128i_u64[0];
                v35 = v34 - v47.cxRightWidth - v33 - v47.cxLeftWidth;
                v36 = HIDWORD(v34) - HIDWORD(v33) - v47.cyBottomHeight - v47.cyTopHeight;
              }
              else
              {
                v37 = *((_QWORD *)this + 91);
                v38 = *(float *)(v37 + 304);
                v39 = *(_QWORD *)(v37 + 196);
                v40 = _mm_srli_si128(*(__m128i *)(v37 + 196), 8).m128i_u64[0];
                v35 = (int)(float)((float)((int)v40 - v39) * v38);
                v36 = (int)(float)((float)(HIDWORD(v40) - HIDWORD(v39)) * v38);
              }
              updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v16, v3, v32, v35, v36);
              v3 = updated;
              if ( updated < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x15A9u);
            }
            if ( v3 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1358u);
            }
            else
            {
              v3 = 0;
              if ( (*((_BYTE *)this + 241) & 2) != 0 )
              {
                v42 = (CHolographicSlate *)*((_QWORD *)this + 99);
                if ( v42 )
                {
                  v43 = (_DWORD *)*((_QWORD *)this + 91);
                  v44 = 0;
                  if ( v43[52] - v43[50] >= 0 )
                    v44 = v43[52] - v43[50];
                  if ( v43[51] - v43[49] >= 0 )
                    v1 = v43[51] - v43[49];
                  v45 = CHolographicSlate::SetSize(v42, v1, v44);
                  v3 = v45;
                  if ( v45 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x162u);
                }
              }
              if ( v3 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x135Au);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
