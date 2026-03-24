/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18004FB78
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180015CE0 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B9480 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18004F7C4 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??8RenderTargetInfo@@QEBA_NAEBV0@@Z @ 0x18004F998 (--8RenderTargetInfo@@QEBA_NAEBV0@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051AF0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094910 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E7B44 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CDrawingContext *a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // rax
  bool v10; // r9
  _QWORD *v11; // rbx
  char *v12; // rcx
  __int64 v13; // rbx
  gsl::details *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbp
  char *v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rax
  bool v23; // r9
  _QWORD *v24; // rbx
  char *v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // [rsp+20h] [rbp-38h]

  v4 = 0;
  if ( !RenderTargetInfo::operator==((__int64)this + 32, (__int64)a2 + 56) )
  {
    CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
    v5 = *((unsigned int *)this + 14);
    if ( (_DWORD)v5 )
    {
      v6 = 48LL * *((unsigned int *)this + 14);
      if ( !is_mul_ok(v5, 0x30uLL) )
        v6 = -1LL;
      v7 = __CFADD__(v6, 8LL);
      v8 = v6 + 8;
      if ( v7 )
        v8 = -1LL;
      v9 = (unsigned __int64 *)DefaultHeap::Alloc(v8);
      if ( v9 )
      {
        v11 = v9 + 1;
        *v9 = v5;
        `vector constructor iterator'(
          v9 + 1,
          0x30uLL,
          (unsigned int)v5,
          (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = (char *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = v11;
      if ( v12 )
      {
        v19 = v12 - 8;
        `vector destructor iterator'(
          v12,
          0x30uLL,
          *((_QWORD *)v12 - 1),
          (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
        operator delete[](v19, 48LL * *(_QWORD *)v19 + 8);
        v11 = (_QWORD *)*((_QWORD *)this + 13);
      }
      if ( v11 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          v14 = (gsl::details *)(*((_QWORD *)this + 13) + 48 * v13);
          if ( (unsigned __int64)(unsigned int)v13 >= *((_QWORD *)this + 7) )
          {
LABEL_42:
            `gsl::details::get_terminate_handler'::`2'::handler(v14);
            __debugbreak();
          }
          v15 = CDrawListBitmap::Initialize(v14, *(struct IBitmapResource **)(*((_QWORD *)this + 8) + 8 * v13), a2, v10);
          v4 = v15;
          if ( v15 < 0 )
            break;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= (unsigned int)v5 )
            goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xEAu, 0LL);
LABEL_18:
        if ( (v4 & 0x80000000) == 0 )
          return v4;
LABEL_24:
        CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
        return v4;
      }
      v29 = 229;
    }
    else
    {
LABEL_16:
      v17 = *((unsigned int *)this + 18);
      if ( !(_DWORD)v17 )
      {
LABEL_17:
        *((_OWORD *)this + 2) = *(_OWORD *)((char *)a2 + 56);
        *((_QWORD *)this + 6) = *((_QWORD *)a2 + 9);
        goto LABEL_18;
      }
      v20 = 48LL * *((unsigned int *)this + 18);
      if ( !is_mul_ok(v17, 0x30uLL) )
        v20 = -1LL;
      v7 = __CFADD__(v20, 8LL);
      v21 = v20 + 8;
      if ( v7 )
        v21 = -1LL;
      v22 = (unsigned __int64 *)DefaultHeap::Alloc(v21);
      if ( v22 )
      {
        v24 = v22 + 1;
        *v22 = v17;
        `vector constructor iterator'(v22 + 1, 0x30uLL, v17, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
      }
      else
      {
        v24 = 0LL;
      }
      v12 = (char *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v24;
      if ( v12 )
      {
        v25 = v12 - 8;
        `vector destructor iterator'(
          v12,
          0x30uLL,
          *((_QWORD *)v12 - 1),
          (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
        operator delete[](v25, 48LL * *(_QWORD *)v25 + 8);
        v24 = (_QWORD *)*((_QWORD *)this + 14);
      }
      if ( v24 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          v14 = (gsl::details *)(*((_QWORD *)this + 14) + 48 * v26);
          if ( (unsigned __int64)(unsigned int)v26 >= *((_QWORD *)this + 9) )
            goto LABEL_42;
          v27 = CDrawListBitmap::Initialize(
                  v14,
                  *(struct IBitmapResource **)(*((_QWORD *)this + 10) + 8 * v26),
                  a2,
                  v23);
          v4 = v27;
          if ( v27 < 0 )
            break;
          v26 = (unsigned int)(v26 + 1);
          if ( (unsigned int)v26 >= (unsigned int)v17 )
            goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xF7u, 0LL);
        goto LABEL_18;
      }
      v29 = 242;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024882, v29, 0LL);
    goto LABEL_24;
  }
  return v4;
}
