/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x180033560
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$4 @ 0x18003CECA (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
