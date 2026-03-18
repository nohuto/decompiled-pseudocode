/*
 * XREFs of ??0CD3DTexture@@IEAA@_N@Z @ 0x18026E07C
 * Callers:
 *     ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x18026DDC8 (--0CD3DVidMemOnlyTexture@@IEAA@_N@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800A2F20 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DTexture *__fastcall CD3DTexture::CD3DTexture(CD3DTexture *this)
{
  __int64 v2; // rcx

  CD3DResource::CD3DResource(this, 1);
  *(_QWORD *)this = &CD3DTexture::`vftable';
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 216;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_DWORD *)this + 43) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
