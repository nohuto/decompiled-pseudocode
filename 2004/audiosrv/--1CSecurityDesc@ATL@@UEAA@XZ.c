/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800D5BC8
 * Callers:
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$0 @ 0x1800762E5 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x180076380 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(ATL::CSecurityDesc *this)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
