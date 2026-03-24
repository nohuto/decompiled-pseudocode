/*
 * XREFs of ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180268BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800791C0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A29F0 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801A72B4 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::EmitGeometry(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  int appended; // eax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF

  v3 = 0;
  v4 = (__int64)a3 + 168;
  if ( !a3 )
    v4 = 184LL;
  v7 = *(_QWORD *)v4;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
  v9 = *(unsigned int *)(v7 + 20);
  v17 = v9;
  v18 = v8;
  if ( v8 )
  {
    if ( v9 )
    {
      appended = CD3DBatchExecutionContext::AppendGeometry(
                   (__int64)a2,
                   *(_DWORD *)(v7 + 8),
                   0,
                   (unsigned int *)&v17,
                   &v19,
                   0LL);
      v3 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x92u, 0LL);
      }
      else
      {
        v12 = *((_DWORD *)a2 + 19);
        v13 = (__int64)a3 + 48;
        v17 = v19;
        v14 = *((_BYTE *)a2 + 72) != 0 ? 48 : 16;
        if ( !a3 )
          v13 = 64LL;
        HIDWORD(v18) = *(_DWORD *)(v7 + 8);
        LODWORD(v18) = v14 + 8 * v12;
        TransferVertices2DH_UV2(v7, (CMILMatrix *)(*(_QWORD *)v13 + 8LL), *(float *)(*(_QWORD *)v13 + 4LL));
      }
    }
  }
  else if ( v9 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v15 = (__int64)a3 + 48;
  if ( !a3 )
    v15 = 64LL;
  v19 = *(_QWORD *)v15;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
    (__int64 *)v15,
    &v20,
    &v19);
  return v3;
}
