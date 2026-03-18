/*
 * XREFs of ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F2B8C
 * Callers:
 *     ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D07B0 (--_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
}
