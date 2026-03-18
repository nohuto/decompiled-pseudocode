/*
 * XREFs of ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6730
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F85BC (--1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
