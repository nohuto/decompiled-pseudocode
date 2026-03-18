/*
 * XREFs of ??_GCLegacyRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C005EA30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CLegacyRenderTargetMarshaler *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
