/*
 * XREFs of ??_GCDropShadowMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00CA3E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::`scalar deleting destructor'(
        DirectComposition::CDropShadowMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
