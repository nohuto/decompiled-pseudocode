/*
 * XREFs of ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F85BC
 * Callers:
 *     ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6730 (--_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 7) = 0LL;
  }
}
