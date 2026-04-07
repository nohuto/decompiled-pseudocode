/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001D930
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180015978 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x18001817C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001C460 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180020670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x1800308C0 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18003D064 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F820 (-InternalRelease@-$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  CBaseObject *v1; // rbx
  CBaseObject *v3; // rdi
  bool v4; // zf
  int updated; // eax
  unsigned int v6; // r14d
  struct CVisual **v7; // r15
  int v8; // eax
  _DWORD *v9; // rax
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float *v16; // rax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  CRenderDataVisual *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int inserted; // eax
  struct CVisual *v29; // rcx
  int v30; // eax
  int v31; // eax
  struct CDrawGeometryInstruction *v32; // [rsp+38h] [rbp-19h] BYREF
  struct CDrawGeometryInstruction *v33; // [rsp+40h] [rbp-11h] BYREF
  struct _MARGINS v34; // [rsp+48h] [rbp-9h] BYREF
  _D3DCOLORVALUE v35; // [rsp+58h] [rbp+7h] BYREF
  struct _D3DCOLORVALUE v36; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v1 = 0LL;
  v3 = 0LL;
  v4 = (*(_BYTE *)(*((_QWORD *)this + 91) + 608LL) & 8) == 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( v4
    || !*((_DWORD *)this + 153) && !*((_DWORD *)this + 155) && !*((_DWORD *)this + 154) && !*((_DWORD *)this + 156) )
  {
    v21 = (CRenderDataVisual *)*((_QWORD *)this + 36);
    if ( v21 )
    {
      v22 = CRenderDataVisual::ClearInstructions(v21);
      v6 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDCC,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_20;
      }
    }
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v6 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD76,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_20;
  }
  v7 = (struct CVisual **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v27 = CCanvasVisual::Create((struct CCanvasVisual **)this + 36);
    v6 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v27);
      goto LABEL_20;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 33) + 32LL), *v7, 0LL, 1u, 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)inserted);
      goto LABEL_20;
    }
    v29 = *v7;
    v34 = 0LL;
    CVisual::SetInsetFromParent((struct _MARGINS *)v29, &v34);
  }
  if ( *((_QWORD *)this + 94)
    || (v30 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (char *)this + 752),
        v6 = v30,
        v30 >= 0) )
  {
    v8 = CTopLevelWindow::UpdateColorizationColor(this);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      v9 = (_DWORD *)*((_QWORD *)this + 91);
      if ( v9[20] == 0x7FFFFFFF && v9[21] == 0x7FFFFFFF && v9[22] == 0x7FFFFFFF && v9[23] == 0x7FFFFFFF )
        v10 = (float *)*((_QWORD *)this + 73);
      else
        v10 = (float *)*((_QWORD *)this + 72);
      v11 = v10[8];
      v12 = v10[7];
      v4 = v12 == *((float *)this + 176);
      v13 = v11 * v10[4];
      v14 = v11 * v10[5];
      v15 = v11 * v10[6];
      v35.g = v10[8] * v10[5];
      v35.r = v13;
      v35.a = v12;
      v35.b = v15;
      if ( !v4 || v13 != *((float *)this + 173) || v14 != *((float *)this + 174) || v15 != *((float *)this + 175) )
      {
        CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 94), v12, &v35);
        *(_D3DCOLORVALUE *)((char *)this + 692) = *(_D3DCOLORVALUE *)&v35.r;
      }
      if ( *((_QWORD *)this + 95)
        || (v31 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                    (char *)this + 760),
            v6 = v31,
            v31 >= 0) )
      {
        v16 = (float *)*((_QWORD *)this + 73);
        v4 = 1.0 == *((float *)this + 180);
        v17 = v16[4] * v16[8];
        v36.r = v17;
        v18 = v16[5] * v16[8];
        v36.g = v18;
        v19 = v16[6] * v16[8];
        v36.a = 1.0;
        v36.b = v19;
        if ( !v4 || v17 != *((float *)this + 177) || v18 != *((float *)this + 178) || v19 != *((float *)this + 179) )
        {
          CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 95), 1.0, &v36);
          *(struct _D3DCOLORVALUE *)((char *)this + 708) = *(struct _D3DCOLORVALUE *)&v36.r;
        }
        if ( *((_DWORD *)*v7 + 68) )
          goto LABEL_19;
        Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v32);
        v23 = CDrawGeometryInstruction::Create(
                *((struct CBaseLegacyMilBrushProxy **)this + 94),
                *((struct CBaseGeometryProxy **)this + 69),
                &v32);
        v6 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDBB,
            (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)(unsigned int)v23);
          v1 = v32;
        }
        else
        {
          Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v33);
          v24 = CDrawGeometryInstruction::Create(
                  *((struct CBaseLegacyMilBrushProxy **)this + 95),
                  *((struct CBaseGeometryProxy **)this + 70),
                  &v33);
          v6 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xDC0,
              (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
              (const char *)(unsigned int)v24);
            v1 = v32;
            v3 = v33;
          }
          else
          {
            v1 = v32;
            v25 = CRenderDataVisual::AddInstruction(*v7, v32);
            v6 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDC3,
                (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
                (const char *)(unsigned int)v25);
              v3 = v33;
            }
            else
            {
              v3 = v33;
              v26 = CRenderDataVisual::AddInstruction(*v7, v33);
              v6 = v26;
              if ( v26 >= 0 )
                goto LABEL_19;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDC4,
                (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
                (const char *)(unsigned int)v26);
            }
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDA8,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v31);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD87,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v30);
  }
LABEL_20:
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v1 )
    CBaseObject::Release(v1);
  return v6;
}
