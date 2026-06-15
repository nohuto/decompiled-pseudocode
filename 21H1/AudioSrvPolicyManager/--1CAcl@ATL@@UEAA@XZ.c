/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x180038E20
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$4 @ 0x180042808 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
