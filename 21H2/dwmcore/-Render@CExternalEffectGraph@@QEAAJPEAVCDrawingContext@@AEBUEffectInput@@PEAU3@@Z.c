/*
 * XREFs of ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180058738
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x180057F30 (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180057FC0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ @ 0x180058880 (--1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalEffectGraph::Render(
        CExternalEffectGraph *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        struct EffectInput *a4)
{
  __int64 v6; // rcx
  int v9; // eax
  const struct EffectInput *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v18[104]; // [rsp+28h] [rbp-D8h] BYREF
  int v19[2]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+98h] [rbp-68h]
  CExternalEffectGraph *v21; // [rsp+A0h] [rbp-60h]
  struct EffectInput *v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B4h] [rbp-4Ch]
  _QWORD v25[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v26[416]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v27; // [rsp+278h] [rbp+178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v6 = *((_QWORD *)a3 + 1);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 16LL))(v6, v17);
    v9 = v17[0];
  }
  else
  {
    v9 = DisplayId::Invalid;
  }
  v20 = v9;
  *(_QWORD *)v19 = a2;
  v23 = -1;
  v24 = -1;
  v25[0] = v26;
  v25[1] = v26;
  v25[2] = &v27;
  v21 = this;
  v22 = a4;
  v10 = EffectInput::EffectInput((EffectInput *)v18, a3);
  detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
    v25,
    v10);
  v23 = 0;
  v11 = *((_QWORD *)this + 64);
  v12 = *((_QWORD *)this + 65);
  while ( 1 )
  {
    if ( v11 == v12 )
    {
      v15 = 0;
      goto LABEL_9;
    }
    v13 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)v17 = v19;
    if ( !v13 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x180136195LL);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 16LL))(v13, v17);
    v15 = v14;
    if ( v14 < 0 )
      break;
    v11 += 64LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
    (const char *)(unsigned int)v14);
LABEL_9:
  CExternalEffectGraph::CGraphRenderingContext::~CGraphRenderingContext((CExternalEffectGraph::CGraphRenderingContext *)v19);
  return v15;
}
