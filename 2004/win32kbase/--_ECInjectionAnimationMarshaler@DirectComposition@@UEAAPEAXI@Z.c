/*
 * XREFs of ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0A80
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009D108 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInjectionAnimationMarshaler *__fastcall DirectComposition::CInjectionAnimationMarshaler::`vector deleting destructor'(
        DirectComposition::CInjectionAnimationMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
