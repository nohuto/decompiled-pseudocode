/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18000B0CC
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18000AF90 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000B404 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x18000B524 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CDB0 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  struct _MARGINS v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v5; // edi
  int v6; // ecx
  struct _MARGINS *i; // r15
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // r13d
  CDesktopManager *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+70h] [rbp-39h]
  int v20; // [rsp+74h] [rbp-35h]
  unsigned __int64 v21; // [rsp+78h] [rbp-31h] BYREF
  float v22; // [rsp+80h] [rbp-29h]
  float v23; // [rsp+84h] [rbp-25h]
  struct _MARGINS v24; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v25[8]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  v3 = 0;
  v21 = 0LL;
  this[1] = v2;
  v5 = 0;
  this[2] = *((struct _MARGINS *)a2 + 3);
  v6 = *((_DWORD *)a2 + 20);
  v22 = *((float *)a2 + 6);
  v23 = *((float *)a2 + 7);
  if ( v6 > 0 && *((int *)a2 + 22) > 0 )
  {
    v18 = *((_DWORD *)a2 + 21);
    if ( v18 > 0 && *((int *)a2 + 23) > 0 )
      v21 = __PAIR64__(v18, v6);
  }
  v24 = v2;
  CDrawNineGridInstruction::GetNineGridLayout(&v24, (const struct MilPointAndSizeL *)&v21, (struct NineGridLayout *)v25);
  this[7].cyTopHeight = 0;
  for ( i = this + 3; ; i = (struct _MARGINS *)((char *)i + 8) )
  {
    v8 = v3 / 3;
    v9 = v25[v8 + 4];
    v10 = v3 % 3;
    v11 = v25[(unsigned int)(v8 + 1) + 4];
    v19 = v25[v10];
    v20 = v25[(unsigned int)(v10 + 1)];
    if ( v20 - v19 <= 0 || v11 - v9 <= 0 )
    {
      *(_QWORD *)&i->cxLeftWidth = 0LL;
      goto LABEL_5;
    }
    v13 = CDesktopManager::s_pDesktopManagerInstance;
    ++this[7].cyTopHeight;
    v14 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)v13 + 5), (char *)&this[3] + 8 * v3);
    v5 = v14;
    if ( v14 < 0 )
      break;
    v24 = (struct _MARGINS)_xmm;
    v16 = *(_QWORD *)&i->cxLeftWidth;
    *(float *)&v21 = (float)v19;
    *((float *)&v21 + 1) = (float)v9;
    v23 = (float)v11;
    v22 = (float)v20;
    v17 = CImageLegacyMilBrushProxy::Update(v16, v15, &v24, &v21, 0LL);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x8Cu);
      return v5;
    }
LABEL_5:
    if ( ++v3 >= 9 )
      return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x70u);
  return v5;
}
