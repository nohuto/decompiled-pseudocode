/*
 * XREFs of ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6A00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00944F8 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInjectionAnimationMarshaler *__fastcall DirectComposition::CInjectionAnimationMarshaler::`vector deleting destructor'(
        DirectComposition::CInjectionAnimationMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = a2;
  *(_QWORD *)this = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool((__int64)this, v5, v6);
  return this;
}
