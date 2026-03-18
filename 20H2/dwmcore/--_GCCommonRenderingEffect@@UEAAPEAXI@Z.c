/*
 * XREFs of ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x1800618B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180062CE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800635F0 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rdi
  unsigned int v6; // r8d
  int Current; // eax
  struct CThreadContext *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (CCommonRenderingEffect *)((char *)this + 112);
  v5 = 2LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 48);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x78, v6);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v11);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v8 = v11;
      if ( *((_DWORD *)v11 + 35) >= *((_DWORD *)v11 + 34) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v11 + 18);
        ++*((_DWORD *)v8 + 35);
        *((_QWORD *)v8 + 18) = this;
      }
    }
  }
  return this;
}
