/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1801C4C3C
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801C4C70 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[39]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
