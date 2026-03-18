/*
 * XREFs of ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x18026A578
 * Callers:
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18026A668 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x18026A82C (--0CD3DTexture@@IEAA@_N@Z.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(CD3DVidMemOnlyTexture *this, bool a2)
{
  __int64 v3; // rcx
  CD3DVidMemOnlyTexture *result; // rax

  *((_QWORD *)this + 4) = &CD3DSurface::`vbtable'{for `CD3DResource'};
  CD3DTexture::CD3DTexture(this, a2);
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable';
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 28) = v3 - 216;
  *((_QWORD *)this + 29) = 0LL;
  return result;
}
