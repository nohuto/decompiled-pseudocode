/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00944F8
 * Callers:
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00948C0 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0095BB0 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D67A0 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6A00 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    Win32FreePool(v3, a2, a3);
}
