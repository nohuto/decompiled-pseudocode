/*
 * XREFs of ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x18016B048
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800CC73C (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroupLayerClip *__fastcall CPrimitiveGroupLayerClip::CPrimitiveGroupLayerClip(
        CPrimitiveGroupLayerClip *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CPrimitiveGroupLayerClip *result; // rax

  *((_QWORD *)this + 7) = &CPrimitiveGroupLayerClip::`vbtable'{for `CContent'};
  *((_QWORD *)this + 91) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 90) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 91) + 4LL) + 728) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CPrimitiveGroup::CPrimitiveGroup(this, a2, 0);
  *(_QWORD *)this = &CPrimitiveGroupLayerClip::`vftable'{for `CContent'};
  *((_QWORD *)this + 8) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CPrimitiveGroupLayerClip::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CPrimitiveGroupLayerClip::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 648;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 664;
  return result;
}
