/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x180217170
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1802171B0 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  DefaultHeap::Free(this[42]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
