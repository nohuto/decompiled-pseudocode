/*
 * XREFs of ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x1800C4F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800635F0 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18006524C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::`vector deleting destructor'(
        CBrushRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rdi
  unsigned int v6; // r8d
  struct CBrushRenderingEffect *v7; // rcx
  struct CObjectCache *ObjectCache; // rax

  v3 = (CBrushRenderingEffect *)((char *)this + 216);
  v5 = 4LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 48);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  v7 = (struct CBrushRenderingEffect *)*((_QWORD *)this + 2);
  if ( v7 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x168, v6);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v7);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
