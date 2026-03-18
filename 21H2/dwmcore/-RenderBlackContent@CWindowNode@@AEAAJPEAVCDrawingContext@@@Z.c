/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802445C0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800D32D4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B2028 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  struct CShape *v4; // rdx
  int WindowClipShape; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct CShape *v12; // [rsp+30h] [rbp-19h] BYREF
  char v13; // [rsp+38h] [rbp-11h]
  _BYTE v14[80]; // [rsp+40h] [rbp-9h] BYREF

  v12 = 0LL;
  v13 = 0;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v14);
  if ( *((_QWORD *)this + 102) )
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v12);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, WindowClipShape, 0x669u);
      goto LABEL_9;
    }
    v4 = v12;
  }
  else
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v14, (CWindowNode *)((char *)this + 172));
    CShapePtr::Release((CShapePtr *)&v12);
    v4 = (struct CShape *)v14;
    v13 = 0;
    v12 = (struct CShape *)v14;
  }
  v8 = CDrawingContext::FillShapeWithSolidColor(a2, v4, (const __m128i *)&stru_180377378);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x654u);
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v7, 0x66Cu);
  }
  else
  {
    *((_BYTE *)a2 + 7967) = 1;
  }
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v14);
  CShapePtr::Release((CShapePtr *)&v12);
  return v7;
}
