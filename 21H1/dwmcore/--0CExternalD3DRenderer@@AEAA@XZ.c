/*
 * XREFs of ??0CExternalD3DRenderer@@AEAA@XZ @ 0x180239A28
 * Callers:
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180239AD8 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800A2F20 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CExternalD3DRenderer *__fastcall CExternalD3DRenderer::CExternalD3DRenderer(CExternalD3DRenderer *this)
{
  __int64 v2; // rcx
  CExternalD3DRenderer *result; // rax

  *((_QWORD *)this + 4) = &CExternalD3DRenderer::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)this = &CExternalD3DRenderer::`vftable';
  *((_QWORD *)this + 3) = &CExternalD3DRenderer::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CExternalD3DRenderer::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 104;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
