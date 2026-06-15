/*
 * XREFs of ??_GPolicyRule@@UEAAPEAXI@Z @ 0x180111090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180110F1C (--1PolicyRule@@UEAA@XZ.c)
 */

PolicyRule *__fastcall PolicyRule::`scalar deleting destructor'(PolicyRule *this, char a2)
{
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
