/*
 * XREFs of ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800DD9AC
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180045280 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180046C80 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

ShaderLinkingSamplerDesc *__fastcall ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(ShaderLinkingSamplerDesc *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = "NoOp";
  return this;
}
