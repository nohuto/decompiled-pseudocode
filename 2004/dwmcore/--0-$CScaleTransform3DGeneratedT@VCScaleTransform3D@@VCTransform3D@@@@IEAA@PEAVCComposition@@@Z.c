/*
 * XREFs of ??0?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@IEAA@PEAVCComposition@@@Z @ 0x18016B92C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &CTransform3D::`vftable';
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 32) |= 1u;
  *(_DWORD *)(a1 + 152) = 1065353216;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 160) = 1065353216;
  result = a1;
  *(_BYTE *)(a1 + 148) = 0;
  return result;
}
