/*
 * XREFs of ??_GCHolographicExclusiveViewMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6970
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CHolographicExclusiveViewMarshaler *__fastcall DirectComposition::CHolographicExclusiveViewMarshaler::`scalar deleting destructor'(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
