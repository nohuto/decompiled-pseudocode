/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1801C5FCC
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801C6000 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[39]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
