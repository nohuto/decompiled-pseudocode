/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18009B418
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18009B5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18009BE44 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int16 ShaderLinkingArgument; // cx
  __int128 v9; // xmm0
  int v10; // eax
  LPVOID v11; // rax
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // esi
  unsigned __int64 v16; // rdi
  unsigned __int16 v17; // cx
  __int128 v19; // [rsp+30h] [rbp-50h]
  unsigned __int64 v20[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  char v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)v7 + 24LL))(
    v7,
    v20,
    *((unsigned int *)a1 + 4));
  ShaderLinkingArgument = v25;
  v9 = v21;
  *((_BYTE *)a1 + 88) = v22;
  a1[12] = v23;
  *(_OWORD *)(a1 + 9) = v9;
  if ( (ShaderLinkingArgument & 0xFF00) == 0x100 )
    ShaderLinkingArgument = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                              (_DWORD)a1,
                              256,
                              (unsigned __int8)ShaderLinkingArgument,
                              a2,
                              a3);
  *((_WORD *)a1 + 54) = ShaderLinkingArgument;
  v10 = v24;
  if ( (v24 & 0xF) != 0 )
    v10 = v24 - (v24 & 0xF) + 16;
  *((_DWORD *)a1 + 26) = v10;
  v11 = DefaultHeap::Alloc(saturated_mul(v20[0], 2uLL));
  v13 = (void *)a1[14];
  a1[14] = v11;
  if ( v13 )
  {
    operator delete(v13);
    v11 = (LPVOID)a1[14];
  }
  if ( v11 )
  {
    v14 = v20[0];
    v15 = 0;
    if ( (__int64)v20[0] > 0 )
    {
      v16 = 0LL;
      while ( v16 < v14 )
      {
        v17 = *(_WORD *)(v20[1] + 2 * v16);
        v12 = v17;
        LOWORD(v12) = v17 & 0xFF00;
        if ( (((v17 & 0xFF00) - 256) & 0xFCFF) == 0 && (_WORD)v12 != 768 )
          v17 = CRenderingTechniqueFragment::MakeShaderLinkingArgument((_DWORD)a1, v12, (unsigned __int8)v17, a2, a3);
        ++v15;
        *(_WORD *)(a1[14] + 2 * v16++) = v17;
        v14 = v20[0];
        if ( v15 >= (__int64)v20[0] )
          goto LABEL_15;
      }
LABEL_21:
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v14, v12);
      __debugbreak();
    }
LABEL_15:
    v12 = a1[14];
    *(_QWORD *)&v19 = v14;
    if ( v14 < 0 || !v12 && v14 )
      goto LABEL_21;
    *((_QWORD *)&v19 + 1) = a1[14];
    *(_OWORD *)(a1 + 7) = v19;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, -2147024882, 0x1F9u, 0LL);
  }
  return v6;
}
