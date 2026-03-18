/*
 * XREFs of ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B659C
 * Callers:
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001B8F4 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1800B57B4 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B65F4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v6);
  }
  return a1;
}
