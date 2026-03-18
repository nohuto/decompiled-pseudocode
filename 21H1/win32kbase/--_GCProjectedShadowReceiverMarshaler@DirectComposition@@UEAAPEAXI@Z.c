/*
 * XREFs of ??_GCProjectedShadowReceiverMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00054B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
