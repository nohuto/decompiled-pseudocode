/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x180033378
 * Callers:
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x180033170 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x180033740 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180033B5C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180034340 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18003439C (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180034630 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035970 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18003CD88 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18003CEB8 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  volatile signed __int32 *v1; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx

  v1 = (volatile signed __int32 *)(*((_QWORD *)this + 14) - 24LL);
  *(_QWORD *)this = &ATL::CSid::`vftable';
  if ( _InterlockedDecrement(v1 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 13) - 24LL);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 12) - 24LL);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 11) - 24LL);
  if ( _InterlockedDecrement(v5 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
}
