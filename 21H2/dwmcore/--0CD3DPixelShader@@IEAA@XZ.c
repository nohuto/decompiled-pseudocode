/*
 * XREFs of ??0CD3DPixelShader@@IEAA@XZ @ 0x18002BE10
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18002BBF0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18002C26C (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::CD3DPixelShader(CD3DPixelShader *this)
{
  __int64 v2; // rcx
  CD3DPixelShader *result; // rax

  *((_QWORD *)this + 4) = &CD3DPixelShader::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)this = &CD3DPixelShader::`vftable';
  *((_QWORD *)this + 3) = &CD3DPixelShader::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 104;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
