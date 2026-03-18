/*
 * XREFs of ??_GCSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D69A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedHolographicInteropTextureMarshaler *__fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
