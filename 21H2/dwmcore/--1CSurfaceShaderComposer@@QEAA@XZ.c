/*
 * XREFs of ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180023F74
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18003A800 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSurfaceShaderComposer::~CSurfaceShaderComposer(CSurfaceShaderComposer *this)
{
  if ( *((_QWORD *)this + 13) )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILRefCountBaseT<IDeviceResource>::InternalRelease();
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 88);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 72);
  `vector destructor iterator'(
    this,
    8uLL,
    9uLL,
    (void (*)(void *))CSurfaceShaderComposer::SurfaceShader::~SurfaceShader);
}
