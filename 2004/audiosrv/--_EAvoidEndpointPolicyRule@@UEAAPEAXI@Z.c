/*
 * XREFs of ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x180111C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180111BAC (--1PolicyRule@@UEAA@XZ.c)
 */

AvoidEndpointPolicyRule *__fastcall AvoidEndpointPolicyRule::`vector deleting destructor'(
        AvoidEndpointPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &AvoidEndpointPolicyRule::`vftable';
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
