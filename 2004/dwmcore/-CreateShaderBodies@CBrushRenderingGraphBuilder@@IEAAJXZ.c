/*
 * XREFs of ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800B80A4
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E8C8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x1800B783C (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x1800B8128 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800B86F0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateShaderBodies(CBrushRenderingGraphBuilder *this)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  int v3; // esi
  unsigned int v4; // ebp
  __int64 i; // rdi
  __int64 v6; // r15
  int ShaderBodies; // eax
  __int64 v8; // rcx

  v1 = *(_QWORD *)this;
  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( v4 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v6 = *(_QWORD *)(v1 + 144);
      if ( !CRenderingTechnique::IsExternallyImplementedSubgraph(*(CRenderingTechnique **)(i + v6), 0LL) )
      {
        ShaderBodies = CRenderingTechnique::CreateShaderBodies(*(CRenderingTechnique **)(i + v6));
        v2 = ShaderBodies;
        if ( ShaderBodies < 0 )
          break;
      }
      if ( ++v3 >= v4 )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShaderBodies, 0x2B1u, 0LL);
  }
  return v2;
}
