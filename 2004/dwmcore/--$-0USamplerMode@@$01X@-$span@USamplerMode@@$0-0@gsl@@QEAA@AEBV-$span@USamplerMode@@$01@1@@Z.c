/*
 * XREFs of ??$?0USamplerMode@@$01X@?$span@USamplerMode@@$0?0@gsl@@QEAA@AEBV?$span@USamplerMode@@$01@1@@Z @ 0x18019325C
 * Callers:
 *     ?RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801941B4 (-RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTarget.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180194688 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall gsl::span<SamplerMode,-1>::span<SamplerMode,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = 2LL;
  a1[1] = v2;
  if ( !v2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
