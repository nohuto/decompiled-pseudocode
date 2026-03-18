/*
 * XREFs of ??0CSpatialRemarshaler@@QEAA@PEAVCComposition@@@Z @ 0x1801EBE7C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CSpatialRemarshaler *__fastcall CSpatialRemarshaler::CSpatialRemarshaler(
        CSpatialRemarshaler *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSpatialRemarshaler::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CSpatialRemarshaler::`vftable'{for `ISceneNotificationListener'};
  return this;
}
