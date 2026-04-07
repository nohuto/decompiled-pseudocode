/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001CE70
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000B960 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180015978 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x18001817C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001CA40 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180020670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180024A08 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x1800308C0 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18003D064 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800934E4 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  CBaseObject *v2; // r15
  CBaseObject *v3; // r14
  unsigned int v4; // ebx
  struct CBaseGeometryProxy *v5; // r13
  CRenderDataVisual *v7; // rcx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  _QWORD *v14; // rsi
  CBaseObject *v15; // rcx
  struct CVisual **v16; // r12
  __int64 v17; // rax
  const struct _MARGINS *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rsi
  HRGN v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  struct CBaseLegacyMilBrushProxy **v27; // rsi
  int v28; // eax
  int updated; // eax
  float *v30; // rax
  CSolidColorLegacyMilBrushProxy *v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-60h]
  CBaseObject *v35; // [rsp+30h] [rbp-50h] BYREF
  struct CDrawGeometryInstruction *v36; // [rsp+38h] [rbp-48h] BYREF
  HRGN v37; // [rsp+40h] [rbp-40h] BYREF
  struct CBaseGeometryProxy *v38; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v39; // [rsp+50h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v40; // [rsp+60h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 91);
  v2 = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v4 = 0;
  v36 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 609) & 4) != 0 )
  {
    if ( *(_QWORD *)(v1 + 368) )
    {
      v14 = (_QWORD *)((char *)this + 568);
      v15 = (CBaseObject *)*((_QWORD *)this + 71);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *v14 = 0LL;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v1 + 188) - *(_DWORD *)(v1 + 180);
      v10 = *(_DWORD *)(v1 + 192) - *(_DWORD *)(v1 + 184);
      v39.left = *(_DWORD *)(v1 + 260);
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      v39.right = v11 - *(_DWORD *)(v1 + 264) - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244);
      v39.top = *(_DWORD *)(v1 + 268);
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v39.bottom = v12 - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 256) - *(_DWORD *)(v1 + 252);
      inserted = ResourceHelper::CreateRectangleGeometry(&v39, (struct CRectangleGeometryProxy **)this + 71);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3566;
LABEL_56:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v34);
        return v4;
      }
    }
    v16 = (struct CVisual **)((char *)this + 296);
    v17 = *((_QWORD *)this + 37);
    if ( !v17 )
    {
      inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 37);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3577;
        goto LABEL_56;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 33) + 32LL),
                   *v16,
                   *((struct CVisual **)this + 36),
                   1u,
                   1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3579;
        goto LABEL_56;
      }
      v18 = (const struct _MARGINS *)*((_QWORD *)this + 68);
      if ( v18 )
        CVisual::SetInsetFromParent((struct _MARGINS *)*v16, v18 + 8);
      CTopLevelWindow::UpdateWindowScale(this);
      v17 = *((_QWORD *)this + 37);
    }
    if ( *(_DWORD *)(v17 + 272) )
      return v4;
    v19 = *((_QWORD *)this + 91);
    v20 = *(_QWORD *)(v19 + 368);
    if ( !v20 )
      v20 = *((_QWORD *)this + 71);
    v21 = 0LL;
    v37 = 0LL;
    v22 = *(_QWORD *)(v19 + 24);
    if ( v22 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v22 + 328LL))(v22, &v37);
      v21 = v37;
      v4 = v23;
    }
    else
    {
      v4 = 0;
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xE0Cu);
      return v4;
    }
    if ( v21 )
    {
      v38 = 0LL;
      v24 = ResourceHelper::CreateGeometryFromHRGN(v21, &v35);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xE13u);
        v2 = v35;
LABEL_48:
        if ( v2 )
          CBaseObject::Release(v2);
        if ( v5 )
          CBaseObject::Release(v5);
        if ( v3 )
          CBaseObject::Release(v3);
        return v4;
      }
      v2 = v35;
      v26 = ResourceHelper::CreateCombinedGeometry(v35, v20, v25, &v38);
      v4 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xE1Cu);
        goto LABEL_48;
      }
      v5 = v38;
    }
    else
    {
      v5 = (struct CBaseGeometryProxy *)v20;
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v2 = v35;
        v3 = v36;
      }
    }
    v27 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 768);
    if ( !*((_QWORD *)this + 96) )
    {
      v28 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 768);
      v4 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xE28u);
        goto LABEL_48;
      }
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xE2Au);
        goto LABEL_48;
      }
      v30 = (float *)*((_QWORD *)this + 72);
      v31 = *v27;
      v40.r = v30[4] * v30[8];
      v40.g = v30[5] * v30[8];
      v40.b = v30[6] * v30[8];
      v40.a = v30[7];
      CSolidColorLegacyMilBrushProxy::Update(v31, 1.0, &v40);
    }
    if ( !*((_DWORD *)*v16 + 68) )
    {
      v32 = CDrawGeometryInstruction::Create(*v27, v5, &v36);
      v4 = v32;
      if ( v32 >= 0 )
      {
        v3 = v36;
        v33 = CRenderDataVisual::AddInstruction(*v16, v36);
        v4 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xE37u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xE35u);
        v3 = v36;
      }
    }
    goto LABEL_48;
  }
  v7 = (CRenderDataVisual *)*((_QWORD *)this + 37);
  if ( v7 )
  {
    inserted = CRenderDataVisual::ClearInstructions(v7);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v34 = 3647;
      goto LABEL_56;
    }
  }
  return v4;
}
