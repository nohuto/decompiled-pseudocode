/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18000C9B4
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18000C850 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1801012A0 (--_V@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(CPrimitiveGroupDrawListGenerator *this)
{
  unsigned __int64 v1; // rbp
  unsigned int v2; // edi
  unsigned int v4; // r14d
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rbx
  char *v10; // rcx
  unsigned int v11; // r15d
  CDrawListBitmap *v12; // rax
  unsigned __int64 v13; // rbp
  char *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rbx
  char *v20; // rbx
  CDrawListBitmap *v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-58h]
  char v23[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v24[24]; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((unsigned int *)this + 8);
  v2 = 0;
  v4 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = 24LL * *((unsigned int *)this + 8);
    if ( !is_mul_ok(v1, 0x18uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    v8 = (unsigned __int64 *)DefaultHeap::Alloc(v7);
    if ( v8 )
    {
      v9 = v8 + 1;
      *v8 = v1;
      `vector constructor iterator'(
        v8 + 1,
        0x18uLL,
        (unsigned int)v1,
        (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = (char *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v9;
    if ( v10 )
    {
      v15 = v10 - 8;
      `vector destructor iterator'(v10, 0x18uLL, *((_QWORD *)v10 - 1), (void (*)(void *))EffectInput::~EffectInput);
      operator delete[](v15);
      v9 = (_QWORD *)*((_QWORD *)this + 10);
    }
    if ( !v9 )
    {
      v22 = 238;
LABEL_34:
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024882, v22, 0LL);
      return v4;
    }
    v11 = 0;
    do
    {
      if ( (unsigned __int64)v11 >= *((_QWORD *)this + 4) )
      {
        gsl::details::terminate((gsl::details *)v10);
        JUMPOUT(0x18000CAC8LL);
      }
      v12 = CDrawListBitmap::CDrawListBitmap(
              (CDrawListBitmap *)v23,
              *(struct IBitmapResource **)(*((_QWORD *)this + 5) + 8LL * v11));
      CDrawListBitmap::operator=(*((_QWORD *)this + 10) + 24LL * v11, v12);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v24);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v23);
      ++v11;
    }
    while ( v11 < (unsigned int)v1 );
  }
  v13 = *((unsigned int *)this + 12);
  if ( !(_DWORD)v13 )
    return v4;
  v16 = 24LL * *((unsigned int *)this + 12);
  if ( !is_mul_ok(v13, 0x18uLL) )
    v16 = -1LL;
  v6 = __CFADD__(v16, 8LL);
  v17 = v16 + 8;
  if ( v6 )
    v17 = -1LL;
  v18 = (unsigned __int64 *)DefaultHeap::Alloc(v17);
  if ( v18 )
  {
    v19 = v18 + 1;
    *v18 = v13;
    `vector constructor iterator'(v18 + 1, 0x18uLL, v13, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
  }
  else
  {
    v19 = 0LL;
  }
  v10 = (char *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v19;
  if ( v10 )
  {
    v20 = v10 - 8;
    `vector destructor iterator'(v10, 0x18uLL, *((_QWORD *)v10 - 1), (void (*)(void *))EffectInput::~EffectInput);
    operator delete[](v20);
    v19 = (_QWORD *)*((_QWORD *)this + 11);
  }
  if ( !v19 )
  {
    v22 = 250;
    goto LABEL_34;
  }
  do
  {
    if ( (unsigned __int64)v2 >= *((_QWORD *)this + 6) )
    {
      gsl::details::terminate((gsl::details *)v10);
      __debugbreak();
    }
    v21 = CDrawListBitmap::CDrawListBitmap(
            (CDrawListBitmap *)v23,
            *(struct IBitmapResource **)(*((_QWORD *)this + 7) + 8LL * v2));
    CDrawListBitmap::operator=(*((_QWORD *)this + 11) + 24LL * v2, v21);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v24);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v23);
    ++v2;
  }
  while ( v2 < (unsigned int)v13 );
  return v4;
}
