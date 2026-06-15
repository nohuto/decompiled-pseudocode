/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x1800D4F18
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$26 @ 0x180075908 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$26.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
