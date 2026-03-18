/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F77D4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180017BB8 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180035ADC (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180095B40 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B814 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  struct CShape *v4; // rdx
  int WindowClipShape; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CShape *v11; // [rsp+30h] [rbp-19h] BYREF
  char v12; // [rsp+38h] [rbp-11h]
  _BYTE v13[80]; // [rsp+40h] [rbp-9h] BYREF

  v11 = 0LL;
  v12 = 0;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v13);
  if ( *((_QWORD *)this + 97) )
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v11);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, WindowClipShape, 0x84Cu, 0LL);
      goto LABEL_11;
    }
    v4 = v11;
  }
  else
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v13, (CWindowNode *)((char *)this + 164));
    CShapePtr::Release((CShapePtr *)&v11);
    v4 = (struct CShape *)v13;
    v12 = 0;
    v11 = (struct CShape *)v13;
  }
  v8 = CDrawingContext::FillShapeWithSolidColor(a2, v4, (const __m128i *)&stru_1802F15F0);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x834u, 0LL);
  else
    *((_BYTE *)a2 + 5951) = 1;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x84Fu, 0LL);
LABEL_11:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v13);
  CShapePtr::Release((CShapePtr *)&v11);
  return (unsigned int)v7;
}
