/*
 * XREFs of ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x1802489BC
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180248C88 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800B319C (--0CD3DResource@@IEAA@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CD3DSurface *__fastcall CD3DSurface::CD3DSurface(CD3DSurface *this, struct ID3D11Texture2D *a2)
{
  __int64 v4; // rcx

  *((_QWORD *)this + 4) = &CD3DSurface::`vbtable'{for `CD3DResource'};
  *((_QWORD *)this + 15) = &CD3DSurface::`vbtable'{for `IPixelFormat'};
  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)this = &CD3DSurface::`vftable';
  *((_QWORD *)this + 3) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 14) = &CD3DSurface::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DSurface::`vftable'{for `IUnknown'};
  v4 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  *(_DWORD *)((char *)this + v4 + 28) = v4 - 216;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 16) = a2;
  ((void (__fastcall *)(struct ID3D11Texture2D *))a2->lpVtbl->AddRef)(a2);
  return this;
}
