/*
 * XREFs of ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@@Z @ 0x18003AB28
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18003A74C (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18009F730 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::CSurfaceShaderComposer(
        CSurfaceShaderComposer *this,
        struct ID3D11VertexShader *a2,
        struct ID3D11InputLayout *a3,
        struct ID3D11Buffer *a4,
        struct ID3DDeviceContextState *a5,
        struct CD3DDevice *a6)
{
  `vector constructor iterator'(
    this,
    8uLL,
    9uLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D11VertexShader *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11InputLayout *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 11) = a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 11);
  *((_QWORD *)this + 12) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3DDeviceContextState *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = a6;
  return this;
}
