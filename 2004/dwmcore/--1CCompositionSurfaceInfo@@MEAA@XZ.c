/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180097880
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800977D0 (--_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1801F9A20 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x180097820 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180097968 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  CCompositionSurfaceInfo **v2; // rdi
  CCompositionSurfaceInfo *v3; // rcx

  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( *((_QWORD *)this + 4) )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  v2 = (CCompositionSurfaceInfo **)((char *)this + 48);
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 6);
  if ( (__int64)(*((_QWORD *)this + 7) - (_QWORD)v3) >> 3 )
  {
    detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 48,
      0LL);
    v3 = *v2;
  }
  *v2 = 0LL;
  if ( v3 == (CCompositionSurfaceInfo *)((char *)this + 72) )
    v3 = 0LL;
  operator delete(v3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
