/*
 * XREFs of ??1CShapeDrawingContext@@QEAA@XZ @ 0x18025BD90
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18025C818 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 */

void __fastcall CShapeDrawingContext::~CShapeDrawingContext(CShapeDrawingContext *this)
{
  void *v2; // rcx
  __int64 v3; // rax
  CShapeDrawingContext *v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 63);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 65) - (_QWORD)v2;
    v6 = v2;
    v5 = 8 * (v3 >> 3);
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v2 = v6;
    }
    operator delete(v2);
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
  }
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear((char *)this + 64);
  v4 = (CShapeDrawingContext *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 == (CShapeDrawingContext *)((char *)this + 88) )
    v4 = 0LL;
  DefaultHeap::Free(v4);
  DefaultHeap::Free(*((void **)this + 6));
}
