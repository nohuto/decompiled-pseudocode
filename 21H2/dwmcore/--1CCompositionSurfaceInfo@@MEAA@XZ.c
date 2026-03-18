/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C7640
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800C75F0 (--_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1802481D0 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C7704 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x1800C7DDC (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  CCompositionSurfaceInfo *v2; // rcx

  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( *((_QWORD *)this + 4) )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  v2 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 6);
  if ( (__int64)(*((_QWORD *)this + 7) - (_QWORD)v2) >> 3 )
  {
    detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 48,
      0LL);
    v2 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 6);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( v2 == (CCompositionSurfaceInfo *)((char *)this + 72) )
    v2 = 0LL;
  DefaultHeap::Free(v2);
}
