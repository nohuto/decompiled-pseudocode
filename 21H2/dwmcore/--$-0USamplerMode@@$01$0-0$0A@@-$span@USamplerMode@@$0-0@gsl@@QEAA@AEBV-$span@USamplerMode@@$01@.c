/*
 * XREFs of ??$?0USamplerMode@@$01$0?0$0A@@?$span@USamplerMode@@$0?0@gsl@@QEAA@AEBV?$span@USamplerMode@@$01@1@@Z @ 0x1801DCDBC
 * Callers:
 *     ?RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801DDDDC (-RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTarget.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801DE324 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<SamplerMode,-1>::span<SamplerMode,-1>(gsl::details *a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *(_QWORD *)a1 = 2LL;
  *((_QWORD *)a1 + 1) = v2;
  if ( !v2 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  return a1;
}
