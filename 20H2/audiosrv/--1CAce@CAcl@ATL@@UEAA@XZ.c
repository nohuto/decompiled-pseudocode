/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800D4EDC
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x1800D4EC4 (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x1800D5140 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800D51C0 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
