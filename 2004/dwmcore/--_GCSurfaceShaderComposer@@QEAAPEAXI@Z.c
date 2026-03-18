/*
 * XREFs of ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800AFE88
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009B05C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800D1080 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::`scalar deleting destructor'(CSurfaceShaderComposer *this)
{
  CMILPoolResource *v2; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILPoolResource::Release(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 88);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 72);
  `vector destructor iterator'(
    (char *)this,
    8LL,
    9LL,
    (void (__fastcall *)(char *))CSurfaceShaderComposer::SurfaceShader::~SurfaceShader);
  operator delete(this);
  return this;
}
