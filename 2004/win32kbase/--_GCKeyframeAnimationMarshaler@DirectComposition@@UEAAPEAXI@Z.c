/*
 * XREFs of ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0045010
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009D108 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CKeyframeAnimationMarshaler *__fastcall DirectComposition::CKeyframeAnimationMarshaler::`scalar deleting destructor'(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
