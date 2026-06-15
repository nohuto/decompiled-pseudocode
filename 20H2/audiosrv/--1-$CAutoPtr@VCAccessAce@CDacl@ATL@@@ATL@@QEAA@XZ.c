/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x1800D4D50
 * Callers:
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x180075960 (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x180075B00 (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(__int64 a1)
{
  return ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(a1);
}
