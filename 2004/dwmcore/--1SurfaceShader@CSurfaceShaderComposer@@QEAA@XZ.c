/*
 * XREFs of ??1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ @ 0x1800DBCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSurfaceShaderComposer::SurfaceShader::~SurfaceShader(__int64 *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
