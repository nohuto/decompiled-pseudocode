/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800CC73C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x18016B048 (--0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r11

  if ( a3 )
  {
    *((_QWORD *)this + 7) = &CPrimitiveGroup::`vbtable'{for `CContent'};
    *((_QWORD *)this + 91) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 90) = &IContent::`vftable'{for `IContent'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 91) + 4LL) + 728) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  CContent::CContent(this, a2);
  *(_QWORD *)(v3 + 64) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v3 = &CPrimitiveGroup::`vftable'{for `CContent'};
  *(_QWORD *)(v3 + 72) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 56) + 4LL) + v3 + 56) = &CPrimitiveGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 56) + 8LL) + v3 + 56) = &CPrimitiveGroup::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v3 + 56) + 4LL);
  *(_DWORD *)(v4 + v3 + 52) = v4 - 648;
  v5 = *(int *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_DWORD *)(v5 + v3 + 52) = v5 - 664;
  *(_QWORD *)(v3 + 100) = v6;
  *(_QWORD *)(v3 + 108) = v6;
  *(_QWORD *)(v3 + 120) = v3 + 152;
  *(_QWORD *)(v3 + 128) = v3 + 152;
  *(_DWORD *)(v3 + 136) = 2;
  *(_QWORD *)(v3 + 140) = 2LL;
  *(_QWORD *)(v3 + 176) = v3 + 208;
  *(_QWORD *)(v3 + 184) = v3 + 208;
  *(_DWORD *)(v3 + 192) = 4;
  *(_QWORD *)(v3 + 196) = 4LL;
  *(_QWORD *)(v3 + 240) = v3 + 272;
  *(_QWORD *)(v3 + 248) = v3 + 272;
  *(_DWORD *)(v3 + 256) = 4;
  *(_QWORD *)(v3 + 260) = 4LL;
  *(_QWORD *)(v3 + 304) = v3 + 336;
  *(_QWORD *)(v3 + 312) = v3 + 336;
  *(_DWORD *)(v3 + 320) = 4;
  *(_QWORD *)(v3 + 324) = 4LL;
  *(_QWORD *)(v3 + 368) = v3 + 400;
  *(_QWORD *)(v3 + 376) = v3 + 400;
  *(_DWORD *)(v3 + 384) = 4;
  *(_QWORD *)(v3 + 388) = 4LL;
  *(_QWORD *)(v3 + 592) = v3 + 600;
  *(_QWORD *)(v3 + 564) = v6;
  *(_QWORD *)(v3 + 572) = v6;
  *(_DWORD *)(v3 + 600) = v6;
  return (CPrimitiveGroup *)v3;
}
