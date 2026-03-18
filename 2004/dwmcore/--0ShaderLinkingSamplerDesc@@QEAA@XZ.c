/*
 * XREFs of ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800DEE0C
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18004BA40 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18004D400 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

ShaderLinkingSamplerDesc *__fastcall ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(ShaderLinkingSamplerDesc *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = "NoOp";
  return this;
}
