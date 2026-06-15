/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x14003D6D8
 * Callers:
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003D684 (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
