/*
 * XREFs of ??0CD3DConstantBuffer@@IEAA@XZ @ 0x1800A2EB4
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800A2C50 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800A2F20 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  *((_QWORD *)this + 4) = &CD3DPixelShader::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)this = &CD3DConstantBuffer::`vftable';
  *((_QWORD *)this + 3) = &CD3DPixelShader::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 28) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  return this;
}
