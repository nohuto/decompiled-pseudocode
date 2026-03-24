/*
 * XREFs of ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x1800456F0
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180045790 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9824 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::CLinkedShader(CLinkedShader *this, struct ID3D10Blob *a2, int a3)
{
  _QWORD *v4; // rcx
  CLinkedShader *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CLinkedShader::`vftable';
  v4 = (_QWORD *)((char *)this + 16);
  *v4 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4);
  *((_DWORD *)this + 6) = a3;
  *((_QWORD *)this + 4) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = this;
  return result;
}
