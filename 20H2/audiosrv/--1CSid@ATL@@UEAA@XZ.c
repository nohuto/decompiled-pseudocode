/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x1800064A0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180005DD8 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x180075849 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$4 @ 0x1800758F6 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$4.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x180075AE0 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800D4EDC (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800D52E0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}
