/*
 * XREFs of ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x18016A138
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x1801EB93C (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x18016B110 (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 */

CContainerVectorShape *__fastcall CContainerVectorShape::CContainerVectorShape(
        CContainerVectorShape *this,
        struct CComposition *a2,
        int a3)
{
  CContainerVectorShape *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CContainerVectorShape *result; // rax

  if ( a3 )
  {
    *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vbtable'{for `CContent'};
    *((_QWORD *)this + 19) = &CInk::`vbtable'{for `IContent'};
    *((_QWORD *)this + 18) = &IContent::`vftable'{for `IContent'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 19) + 4LL) + 152) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  CVectorShape::CVectorShape(this, a2);
  v4 = *((_QWORD *)v3 + 7);
  *(_QWORD *)v3 = &CContainerVectorShape::`vftable';
  *(_QWORD *)((char *)v3 + *(int *)(v4 + 4) + 56) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(*((_QWORD *)v3 + 7) + 8LL) + 56) = &CContainerVectorShape::`vftable'{for `IContent'};
  v5 = *(int *)(*((_QWORD *)v3 + 7) + 4LL);
  *(_DWORD *)((char *)v3 + v5 + 52) = v5 - 72;
  v6 = *(int *)(*((_QWORD *)v3 + 7) + 8LL);
  result = v3;
  *(_DWORD *)((char *)v3 + v6 + 52) = v6 - 88;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 13) = 0LL;
  *((_QWORD *)v3 + 14) = 0LL;
  return result;
}
