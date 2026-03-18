/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18004A834
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180014770 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180036350 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180049F00 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CSurfaceDrawListBrush *a1)
{
  char *Value; // rbx
  char *v3; // rax
  __int64 v4; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (char *)operator new(0x118uLL);
    Value = v3;
    if ( v3 )
    {
      *(_QWORD *)v3 = 0LL;
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = 0LL;
      *((_QWORD *)v3 + 3) = 0LL;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      *((_QWORD *)v3 + 8) = 0LL;
      *((_QWORD *)v3 + 9) = 0LL;
      *((_QWORD *)v3 + 10) = 0LL;
      *((_QWORD *)v3 + 11) = 0LL;
      *((_QWORD *)v3 + 12) = 0LL;
      *((_QWORD *)v3 + 13) = 0LL;
      *((_QWORD *)v3 + 14) = 0LL;
      *((_QWORD *)v3 + 15) = 0LL;
      *((_QWORD *)v3 + 16) = 0LL;
      *((_QWORD *)v3 + 17) = 0LL;
      *((_QWORD *)v3 + 18) = 0LL;
      *((_QWORD *)v3 + 19) = 0LL;
      *((_QWORD *)v3 + 20) = 0LL;
      *((_QWORD *)v3 + 21) = 0LL;
      *((_QWORD *)v3 + 22) = 0LL;
      *((_QWORD *)v3 + 23) = 0LL;
      *((_QWORD *)v3 + 24) = 0LL;
      *((_QWORD *)v3 + 25) = 0LL;
      *((_QWORD *)v3 + 26) = 0LL;
      *((_QWORD *)v3 + 27) = 0LL;
      *((_QWORD *)v3 + 28) = 0LL;
      *((_QWORD *)v3 + 29) = 0LL;
      *((_QWORD *)v3 + 30) = 0LL;
      *((_QWORD *)v3 + 31) = 0LL;
      *((_QWORD *)v3 + 32) = 0LL;
      *((_QWORD *)v3 + 33) = 0LL;
      *((_QWORD *)v3 + 34) = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  return (struct CObjectCache *)(Value + 168);
}
