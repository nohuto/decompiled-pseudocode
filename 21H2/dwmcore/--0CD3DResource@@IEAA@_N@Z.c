/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x18002C26C
 * Callers:
 *     ??0CD3DPixelShader@@IEAA@XZ @ 0x18002BE10 (--0CD3DPixelShader@@IEAA@XZ.c)
 *     ??0CD3DConstantBuffer@@IEAA@XZ @ 0x18002C200 (--0CD3DConstantBuffer@@IEAA@XZ.c)
 *     ??0CExternalD3DRenderer@@AEAA@XZ @ 0x180238D88 (--0CExternalD3DRenderer@@AEAA@XZ.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18024A6DC (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x18026D4EC (--0CD3DTexture@@IEAA@_N@Z.c)
 * Callees:
 *     <none>
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  CD3DResource *result; // rax

  *(_QWORD *)this = &CD3DResource::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &CD3DResource::`vftable'{for `IDeviceResource'};
  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 32) = &CD3DResource::`vftable'{for `IUnknown'};
  v4 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 28) = v4 - 88;
  *((_BYTE *)this + 84) = a2;
  *(_WORD *)((char *)this + 85) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return result;
}
