/*
 * XREFs of ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C
 * Callers:
 *     _lambda_4064d43483b5bb29fd990d0cb2f57b97_::operator() @ 0x1800589A4 (_lambda_4064d43483b5bb29fd990d0cb2f57b97_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_676e7f6ea73e348d625bea048ced39d0__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E5B10 (std--_Func_impl_no_alloc__lambda_676e7f6ea73e348d625bea048ced39d0__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x18005517C (--0EffectStage@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800B17A4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x1800D0FD0 (--1EffectInput@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
        CExternalEffectGraph::CGraphRenderingContext *this,
        int a2,
        unsigned int a3)
{
  int v6; // eax
  struct CDrawListCache *v7; // rbx
  int v8; // edi
  CGeometryOnlyDrawListBrush *v9; // rcx
  int v10; // xmm1_4
  int v11; // r14d
  int v12; // xmm0_4
  struct CDrawListBrush *v13; // rax
  int updated; // eax
  __int64 v15; // rdi
  EffectInput *v16; // r15
  struct CDrawListBrush *v17; // rsi
  struct CObjectCache *ObjectCache; // rcx
  __int64 v20; // rdx
  struct CDrawListBrush *v21; // [rsp+30h] [rbp-D0h] BYREF
  CDrawListCache *v22[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v23; // [rsp+48h] [rbp-B8h]
  _DWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[416]; // [rsp+58h] [rbp-A8h] BYREF
  char v26; // [rsp+1F8h] [rbp+F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v22[0] = 0LL;
  v6 = CDrawListCache::Create(v22);
  v7 = v22[0];
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v21 = 0LL;
    v22[1] = 0LL;
    v22[0] = (CDrawListCache *)&v21;
    v23 = 1;
    v8 = CGeometryOnlyDrawListBrush::Create(&v22[1]);
    if ( v23 )
    {
      v9 = *(CGeometryOnlyDrawListBrush **)v22[0];
      *(_QWORD *)v22[0] = v22[1];
      if ( v9 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      v10 = *((_DWORD *)this + 10);
      v11 = 0;
      v12 = *((_DWORD *)this + 11);
      v13 = v21;
      v22[0] = 0LL;
      LODWORD(v22[1]) = v10;
      *((_DWORD *)v21 + 12) = 0;
      HIDWORD(v22[1]) = v12;
      *((_BYTE *)v13 + 52) = 1;
      *((_OWORD *)v13 + 2) = *(_OWORD *)v22;
      if ( a3 )
      {
        while ( 1 )
        {
          EffectStage::EffectStage((EffectStage *)v24);
          v24[1] = 1;
          v24[0] = v11 + a2;
          EffectInput::operator=(v25, *((_QWORD *)this + 6) + 104LL * *((unsigned int *)this + 8));
          updated = CBrushRenderingGraph::UpdateDrawListCache(
                      *((CBrushRenderingGraph **)this + 2),
                      *(struct CDrawingContext **)this,
                      v21,
                      (struct EffectStage *)v24,
                      v7);
          v8 = updated;
          if ( updated < 0 )
            break;
          updated = CDrawListCache::Render(v7, *(_QWORD *)this, &CMILMatrix::Identity);
          v8 = updated;
          if ( updated < 0 )
          {
            v20 = 186LL;
            goto LABEL_24;
          }
          CDrawListCache::Invalidate(v7);
          v15 = 4LL;
          v16 = (EffectInput *)&v26;
          do
          {
            v16 = (EffectInput *)((char *)v16 - 104);
            EffectInput::~EffectInput(v16);
            --v15;
          }
          while ( v15 );
          if ( ++v11 >= a3 )
            goto LABEL_12;
        }
        v20 = 178LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
          (const char *)(unsigned int)updated);
        `vector destructor iterator'(v25, 0x68uLL, 4uLL, (void (*)(void *))EffectInput::~EffectInput);
      }
      else
      {
LABEL_12:
        v8 = 0;
      }
    }
    v17 = v21;
    if ( v21 )
    {
      ObjectCache = CThreadContext::GetObjectCache(v9);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        DefaultHeap::Free(v17);
      }
      else
      {
        *(_QWORD *)v17 = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = v17;
      }
    }
  }
  if ( v7 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  return (unsigned int)v8;
}
