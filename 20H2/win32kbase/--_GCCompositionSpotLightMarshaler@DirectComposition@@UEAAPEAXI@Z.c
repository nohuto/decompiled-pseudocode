/*
 * XREFs of ??_GCCompositionSpotLightMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AF9D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

DirectComposition::CCompositionSpotLightMarshaler *__fastcall DirectComposition::CCompositionSpotLightMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionLightMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
