/*
 * XREFs of ??_GCHolographicExclusiveViewMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE670
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

DirectComposition::CHolographicExclusiveViewMarshaler *__fastcall DirectComposition::CHolographicExclusiveViewMarshaler::`scalar deleting destructor'(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
